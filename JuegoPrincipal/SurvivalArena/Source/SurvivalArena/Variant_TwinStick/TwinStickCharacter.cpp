// Copyright Epic Games, Inc. All Rights Reserved.


#include "TwinStickCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnhancedInputComponent.h"
#include "InputAction.h"
#include "TwinStickGameMode.h"
#include "TwinStickAoEAttack.h"
#include "Kismet/KismetMathLibrary.h"
#include "TwinStickProjectile.h"
#include "TwinStickNPC.h"
#include "TwinStickUI.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "CollisionQueryParams.h"
#include "Engine/OverlapResult.h"
#include "Kismet/GameplayStatics.h"

ATwinStickCharacter::ATwinStickCharacter()
{
 	PrimaryActorTick.bCanEverTick = true;

	// create the spring arm
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);

	SpringArm->SetRelativeRotation(FRotator(-50.0f, 0.0f, 0.0f));

	SpringArm->TargetArmLength = 2200.0f;
	SpringArm->bDoCollisionTest = false;
	SpringArm->bInheritYaw = false;
	SpringArm->bEnableCameraLag = true;
	SpringArm->CameraLagSpeed = 0.5f;

	// create the camera
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	Camera->SetFieldOfView(75.0f);

	// configure the character movement
	GetCharacterMovement()->GravityScale = 1.5f;
	GetCharacterMovement()->MaxAcceleration = 1000.0f;
	GetCharacterMovement()->BrakingFrictionFactor = 1.0f;
	GetCharacterMovement()->bCanWalkOffLedges = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 640.0f, 0.0f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;
}

void ATwinStickCharacter::BeginPlay()
{
	Super::BeginPlay();

	// initialize health
	Health = MaxHealth;

	// cache base movement speed
	BaseMaxWalkSpeed = GetCharacterMovement()->MaxWalkSpeed;

	// push initial UI state
	UpdateHealthUI();
	UpdateWeaponUI();

	// update the items count
	UpdateItems();
}

void ATwinStickCharacter::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	// clear timers
	GetWorld()->GetTimerManager().ClearTimer(AutoFireTimer);
	GetWorld()->GetTimerManager().ClearTimer(InvulnerabilityTimer);
	GetWorld()->GetTimerManager().ClearTimer(SpeedBoostTimer);
	GetWorld()->GetTimerManager().ClearTimer(DamageBoostTimer);
}

void ATwinStickCharacter::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	// set the player controller reference
	PlayerController = Cast<APlayerController>(GetController());
}

void ATwinStickCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// get the current rotation
	const FRotator OldRotation = GetActorRotation();

	// are we aiming with the mouse?
	if (bUsingMouse)
	{
		if (PlayerController)
		{
			// get the cursor world location
			FHitResult OutHit; 
			PlayerController->GetHitResultUnderCursorByChannel(MouseAimTraceChannel, true, OutHit);

			// find the aim rotation 
			const FRotator AimRot = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), OutHit.Location);

			// save the aim angle
			AimAngle = AimRot.Yaw;

			

			// update the yaw, reuse the pitch and roll
			SetActorRotation(FRotator(OldRotation.Pitch, AimAngle, OldRotation.Roll));

		}

	} else {

		// use quaternion interpolation to blend between our current rotation
		// and the desired aim rotation using the shortest path
		const FRotator TargetRot = FRotator(OldRotation.Pitch, AimAngle, OldRotation.Roll);

		SetActorRotation(TargetRot);
	}
}

void ATwinStickCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// set up the enhanced input action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{

		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ATwinStickCharacter::Move);
		EnhancedInputComponent->BindAction(StickAimAction, ETriggerEvent::Triggered, this, &ATwinStickCharacter::StickAim);
		EnhancedInputComponent->BindAction(MouseAimAction, ETriggerEvent::Triggered, this, &ATwinStickCharacter::MouseAim);
		EnhancedInputComponent->BindAction(DashAction, ETriggerEvent::Triggered, this, &ATwinStickCharacter::Dash);
		EnhancedInputComponent->BindAction(ShootAction, ETriggerEvent::Triggered, this, &ATwinStickCharacter::Shoot);
		EnhancedInputComponent->BindAction(AoEAction, ETriggerEvent::Triggered, this, &ATwinStickCharacter::AoEAttack);

	}

}

void ATwinStickCharacter::Move(const FInputActionValue& Value)
{
	// save the input vector
	FVector2D InputVector = Value.Get<FVector2D>();

	// route the input
	DoMove(InputVector.X, InputVector.Y);
}

void ATwinStickCharacter::StickAim(const FInputActionValue& Value)
{
	// get the input vector
	FVector2D InputVector = Value.Get<FVector2D>();

	// route the input
	DoAim(InputVector.X, InputVector.Y);
}

void ATwinStickCharacter::MouseAim(const FInputActionValue& Value)
{
	// raise the mouse controls flag
	bUsingMouse = true;

	// show the mouse cursor
	if (PlayerController)
	{
		PlayerController->SetShowMouseCursor(true);
	}
}

void ATwinStickCharacter::Dash(const FInputActionValue& Value)
{
	// route the input
	DoDash();
}

void ATwinStickCharacter::Shoot(const FInputActionValue& Value)
{
	// route the input
	DoShoot();
}

void ATwinStickCharacter::AoEAttack(const FInputActionValue& Value)
{
	// route the input
	DoAoEAttack();
}

void ATwinStickCharacter::DoMove(float AxisX, float AxisY)
{
	// save the input
	LastMoveInput.X = AxisX;
	LastMoveInput.Y = AxisY;

	// calculate the forward component of the input
	FRotator FlatRot = GetControlRotation();
	FlatRot.Pitch = 0.0f;

	// apply the forward input
	AddMovementInput(FlatRot.RotateVector(FVector::ForwardVector), AxisX);

	// apply the right input
	AddMovementInput(FlatRot.RotateVector(FVector::RightVector), AxisY);
}

void ATwinStickCharacter::DoAim(float AxisX, float AxisY)
{
	// calculate the aim angle from the inputs
	AimAngle = FMath::RadiansToDegrees(FMath::Atan2(AxisY, -AxisX));

	// lower the mouse controls flag
	bUsingMouse = false;

	// hide the mouse cursor
	if (PlayerController)
	{
		PlayerController->SetShowMouseCursor(false);
	}

	// are we on autofire cooldown?
	if (!bAutoFireActive)
	{
		// set ourselves on cooldown
		bAutoFireActive = true;

		// fire a projectile
		DoShoot();

		// schedule autofire cooldown reset (faster for rapid fire weapon)
		const float EffectiveDelay = (CurrentWeapon == EWeaponType::RapidFire) ? AutoFireDelay * RapidFireRateMultiplier : AutoFireDelay;
		GetWorld()->GetTimerManager().SetTimer(AutoFireTimer, this, &ATwinStickCharacter::ResetAutoFire, EffectiveDelay, false);
	}
}

void ATwinStickCharacter::DoDash()
{
	// calculate the launch impulse vector based on the last move input
	FVector LaunchDir = FVector::ZeroVector;

	LaunchDir.X = FMath::Clamp(LastMoveInput.X, -1.0f, 1.0f);
	LaunchDir.Y = FMath::Clamp(LastMoveInput.Y, -1.0f, 1.0f);

	// launch the character in the chosen direction
	LaunchCharacter(LaunchDir * DashImpulse, true, true);
}

void ATwinStickCharacter::DoShoot()
{
	switch (CurrentWeapon)
	{
	case EWeaponType::Sword:
		DoMeleeAttack();
		ConsumeAmmo();
		return;

	case EWeaponType::Shotgun:
	{
		// fire multiple projectiles in a spread
		const float HalfSpread = ShotgunSpreadAngle * 0.5f;
		const float AngleStep = (ShotgunPellets > 1) ? ShotgunSpreadAngle / (ShotgunPellets - 1) : 0.0f;

		for (int32 i = 0; i < ShotgunPellets; ++i)
		{
			const float AngleOffset = -HalfSpread + AngleStep * i;
			FTransform ProjectileTransform = GetActorTransform();

			// rotate the transform by the spread offset
			FRotator SpreadRot = ProjectileTransform.GetRotation().Rotator();
			SpreadRot.Yaw += AngleOffset;
			ProjectileTransform.SetRotation(SpreadRot.Quaternion());

			// apply the projectile spawn offset
			FVector ProjectileLocation = ProjectileTransform.GetLocation() + ProjectileTransform.GetRotation().RotateVector(FVector::ForwardVector * ProjectileOffset);
			ProjectileTransform.SetLocation(ProjectileLocation);

			if (ATwinStickProjectile* Projectile = GetWorld()->SpawnActor<ATwinStickProjectile>(ProjectileClass, ProjectileTransform))
			{
				Projectile->DamageMultiplier = DamageMultiplier;
			}
		}

		ConsumeAmmo();
		return;
	}

	case EWeaponType::RapidFire:
	case EWeaponType::Default:
	default:
	{
		// single projectile (default behavior)
		FTransform ProjectileTransform = GetActorTransform();

		FVector ProjectileLocation = ProjectileTransform.GetLocation() + ProjectileTransform.GetRotation().RotateVector(FVector::ForwardVector * ProjectileOffset);
		ProjectileTransform.SetLocation(ProjectileLocation);

		if (ATwinStickProjectile* Projectile = GetWorld()->SpawnActor<ATwinStickProjectile>(ProjectileClass, ProjectileTransform))
		{
			Projectile->DamageMultiplier = DamageMultiplier;
		}

		if (CurrentWeapon == EWeaponType::RapidFire)
		{
			ConsumeAmmo();
		}
		return;
	}
	}
}

void ATwinStickCharacter::DoAoEAttack()
{
	// do we have enough items to do an AoE attack?
	if (Items > 0)
	{
		// get the game time
		const float GameTime = GetWorld()->GetTimeSeconds();

		// are we off AoE cooldown?
		if (GameTime - LastAoETime > AoECooldownTime)
		{
			// save the new AoE time
			LastAoETime = GameTime;

			// spawn the AoE
			ATwinStickAoEAttack* AoE = GetWorld()->SpawnActor<ATwinStickAoEAttack>(AoEAttackClass, GetActorTransform());

			// decrease the number of items
			--Items;

			// update the items count
			UpdateItems();
		}
	}
}

void ATwinStickCharacter::HandleDamage(float Damage, const FVector& DamageDirection)
{
	// ignore damage if invulnerable
	if (bIsInvulnerable)
	{
		return;
	}

	// reduce health
	Health = FMath::Max(0.0f, Health - Damage);

	// calculate the knockback vector
	FVector LaunchVector = DamageDirection;
	LaunchVector.Z = 0.0f;

	// apply knockback to the character
	LaunchCharacter(LaunchVector * KnockbackStrength, true, true);

	// update health UI
	UpdateHealthUI();

	// pass control to BP
	BP_Damaged();

	// check for death
	if (Health <= 0.0f)
	{
		Die();
	}
}

void ATwinStickCharacter::Die()
{
	// disable input and collision immediately
	DisableInput(Cast<APlayerController>(GetController()));
	SetActorEnableCollision(false);

	// destroy the character (controller's OnPawnDestroyed handles respawn)
	Destroy();
}

void ATwinStickCharacter::OnRespawned()
{
	// reset health
	Health = MaxHealth;

	// reset weapon to default
	RevertToDefaultWeapon();

	// activate invulnerability
	bIsInvulnerable = true;

	// schedule end of invulnerability
	GetWorld()->GetTimerManager().SetTimer(InvulnerabilityTimer, this, &ATwinStickCharacter::EndInvulnerability, InvulnerabilityDuration, false);

	// update UI
	UpdateHealthUI();
	UpdateWeaponUI();
}

void ATwinStickCharacter::EndInvulnerability()
{
	bIsInvulnerable = false;
}

void ATwinStickCharacter::ApplyPowerUp(EPowerUpType Type, float InMultiplier, float Duration)
{
	switch (Type)
	{
	case EPowerUpType::SpeedBoost:
		// apply speed boost
		GetCharacterMovement()->MaxWalkSpeed = BaseMaxWalkSpeed * InMultiplier;

		// reset timer if already boosted (refreshes duration)
		GetWorld()->GetTimerManager().SetTimer(SpeedBoostTimer, this, &ATwinStickCharacter::RevertSpeedBoost, Duration, false);
		break;

	case EPowerUpType::DamageBoost:
		// apply damage multiplier
		DamageMultiplier = InMultiplier;

		// reset timer if already boosted
		GetWorld()->GetTimerManager().SetTimer(DamageBoostTimer, this, &ATwinStickCharacter::RevertDamageBoost, Duration, false);
		break;
	}
}

void ATwinStickCharacter::RevertSpeedBoost()
{
	GetCharacterMovement()->MaxWalkSpeed = BaseMaxWalkSpeed;
}

void ATwinStickCharacter::RevertDamageBoost()
{
	DamageMultiplier = 1.0f;
}

void ATwinStickCharacter::AddPickup()
{
	// increase the item count
	++Items;

	// update the items counter
	UpdateItems();
}

void ATwinStickCharacter::UpdateItems()
{
	// update the game mode
	if (ATwinStickGameMode* GM = Cast<ATwinStickGameMode>(GetWorld()->GetAuthGameMode()))
	{
		GM->ItemUsed(Items);
	}
}

void ATwinStickCharacter::ResetAutoFire()
{
	// reset the autofire flag
	bAutoFireActive = false;
}

void ATwinStickCharacter::EquipWeapon(EWeaponType Type, int32 InAmmo)
{
	CurrentWeapon = Type;
	WeaponAmmo = InAmmo;
	UpdateWeaponUI();
}

void ATwinStickCharacter::DoMeleeAttack()
{
	// calculate the center of the melee sphere in front of the character
	const FVector Center = GetActorLocation() + GetActorForwardVector() * MeleeForwardOffset;

	// perform a sphere overlap to find NPCs in range
	TArray<FOverlapResult> Overlaps;
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);

	if (GetWorld()->OverlapMultiByChannel(Overlaps, Center, FQuat::Identity, ECC_Pawn, FCollisionShape::MakeSphere(MeleeRange), QueryParams))
	{
		for (const FOverlapResult& Overlap : Overlaps)
		{
			if (ATwinStickNPC* NPC = Cast<ATwinStickNPC>(Overlap.GetActor()))
			{
				// damage the NPC using the same impact path as projectiles
				NPC->ProjectileImpact(GetActorForwardVector(), DamageMultiplier);
			}
		}
	}
}

bool ATwinStickCharacter::ConsumeAmmo()
{
	// infinite ammo weapons don't consume
	if (WeaponAmmo < 0)
	{
		return false;
	}

	--WeaponAmmo;

	if (WeaponAmmo <= 0)
	{
		RevertToDefaultWeapon();
		UpdateWeaponUI();
		return true;
	}

	UpdateWeaponUI();
	return false;
}

void ATwinStickCharacter::RevertToDefaultWeapon()
{
	CurrentWeapon = EWeaponType::Default;
	WeaponAmmo = -1;
}

void ATwinStickCharacter::UpdateHealthUI()
{
	if (ATwinStickGameMode* GM = Cast<ATwinStickGameMode>(GetWorld()->GetAuthGameMode()))
	{
		const float HealthPercent = (MaxHealth > 0.0f) ? Health / MaxHealth : 0.0f;
		GM->UpdatePlayerHealth(GetPlayerIndex(), HealthPercent);
	}
}

void ATwinStickCharacter::UpdateWeaponUI()
{
	if (ATwinStickGameMode* GM = Cast<ATwinStickGameMode>(GetWorld()->GetAuthGameMode()))
	{
		GM->UpdatePlayerWeapon(GetPlayerIndex(), CurrentWeapon, WeaponAmmo);
	}
}

int32 ATwinStickCharacter::GetPlayerIndex() const
{
	if (PlayerController)
	{
		return UGameplayStatics::GetPlayerControllerID(PlayerController);
	}
	return 0;
}

