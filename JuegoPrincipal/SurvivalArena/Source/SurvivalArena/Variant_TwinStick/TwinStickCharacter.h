// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "TwinStickPowerUp.h"
#include "TwinStickWeaponPickup.h"
#include "TwinStickCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
struct FInputActionValue;
class APlayerController;
class UInputAction;
class ATwinStickAoEAttack;
class ATwinStickProjectile;

/**
 *  A player-controlled character for a Twin Stick Shooter game
 *  Automatically rotates to face the aim direction.
 *  Fires projectiles and spawns AoE attacks.
 */
UCLASS(abstract)
class ATwinStickCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom spring arm */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* SpringArm;

	/** Player Camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* Camera;

protected:

	/** Movement input action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MoveAction;

	/** Gamepad aim input action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* StickAimAction;

	/** Mouse aim input action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MouseAimAction;

	/** Dash input action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* DashAction;

	/** Shooting input action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* ShootAction;

	/** AoE attack input action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* AoEAction;

	/** Trace channel to use for mouse aim */
	UPROPERTY(EditAnywhere, Category="Input")
	TEnumAsByte<ETraceTypeQuery> MouseAimTraceChannel;

	/** Impulse to apply to the character when dashing */
	UPROPERTY(EditAnywhere, Category="Dash", meta = (ClampMin = 0, ClampMax = 10000, Units = "cm/s"))
	float DashImpulse = 2500.0f;

	/** Type of projectile to spawn when shooting */
	UPROPERTY(EditAnywhere, Category="Projectile")
	TSubclassOf<ATwinStickProjectile> ProjectileClass;

	/** Distance ahead of the character that the projectile will be spawned at */
	UPROPERTY(EditAnywhere, Category="Projectile", meta = (ClampMin = 0, ClampMax = 1000, Units = "cm"))
	float ProjectileOffset = 100.0f;

	/** Type of AoE attack actor to spawn */
	UPROPERTY(EditAnywhere, Category="AoE")
	TSubclassOf<ATwinStickAoEAttack> AoEAttackClass;

	/** Number of starting AoE attack items */
	UPROPERTY(EditAnywhere, Category="AoE")
	int32 Items = 1;

	/** Knockback impulse to apply to the character when they're damaged */
	UPROPERTY(EditAnywhere, Category="Damage", meta = (ClampMin = 0, ClampMax = 1000, Units = "cm"))
	float KnockbackStrength = 2500.0f;

	/** Maximum health */
	UPROPERTY(EditAnywhere, Category="Health", meta = (ClampMin = 1, ClampMax = 1000))
	float MaxHealth = 100.0f;

	/** Current health */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Health")
	float Health = 100.0f;

	/** Duration of invulnerability after respawn (seconds) */
	UPROPERTY(EditAnywhere, Category="Health", meta = (ClampMin = 0, ClampMax = 10, Units = "s"))
	float InvulnerabilityDuration = 2.0f;

	/** Whether the character is currently invulnerable */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Health")
	bool bIsInvulnerable = false;

	/** Timer handle for invulnerability */
	FTimerHandle InvulnerabilityTimer;

	/** Base walk speed (cached from CharacterMovement on BeginPlay) */
	float BaseMaxWalkSpeed = 0.0f;

	/** Current damage multiplier (1.0 = normal) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="PowerUp")
	float DamageMultiplier = 1.0f;

	/** Timer for speed boost expiration */
	FTimerHandle SpeedBoostTimer;

	/** Timer for damage boost expiration */
	FTimerHandle DamageBoostTimer;

	/** Time to disallow AoE attacks after one is performed */
	UPROPERTY(EditAnywhere, Category="AoE", meta = (ClampMin = 0, ClampMax = 10, Units = "s"))
	float AoECooldownTime = 1.0f;

	/** Speed to blend between our current rotation and the target aim rotation when stick aiming */
	UPROPERTY(EditAnywhere, Category="Aim", meta = (ClampMin = 0, ClampMax = 100, Units = "s"))
	float AimRotationInterpSpeed = 10.0f;

	/** Game time of the last AoE attack */
	float LastAoETime = 0.0f;

	/** Aim Yaw Angle in degrees */
	float AimAngle = 0.0f;

	/** Pointer to the player controller assigned to this character */
	TObjectPtr<APlayerController> PlayerController;

	/** If true, the player is using mouse aim */
	bool bUsingMouse = false;

	/** Last held move input */
	FVector2D LastMoveInput;

	/** If true, the player is auto firing while stick aiming */
	bool bAutoFireActive = false;

	/** Time to wait between autofire attempts */
	UPROPERTY(EditAnywhere, Category="Aim", meta = (ClampMin = 0, ClampMax = 5, Units = "s"))
	float AutoFireDelay = 0.2f;

	/** Timer to handle stick autofire */
	FTimerHandle AutoFireTimer;

	// ── Weapon System ──

	/** Currently equipped weapon type */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Weapon")
	EWeaponType CurrentWeapon = EWeaponType::Default;

	/** Remaining ammo for current weapon (-1 = infinite) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Weapon")
	int32 WeaponAmmo = -1;

	/** Number of projectiles for shotgun spread */
	UPROPERTY(EditAnywhere, Category="Weapon|Shotgun", meta = (ClampMin = 3, ClampMax = 9))
	int32 ShotgunPellets = 5;

	/** Total spread angle for shotgun (degrees) */
	UPROPERTY(EditAnywhere, Category="Weapon|Shotgun", meta = (ClampMin = 10, ClampMax = 90, Units = "deg"))
	float ShotgunSpreadAngle = 30.0f;

	/** Fire rate multiplier for rapid fire (smaller = faster) */
	UPROPERTY(EditAnywhere, Category="Weapon|RapidFire", meta = (ClampMin = 0.1, ClampMax = 1.0))
	float RapidFireRateMultiplier = 0.5f;

	/** Radius of the melee sphere overlap (cm) */
	UPROPERTY(EditAnywhere, Category="Weapon|Sword", meta = (ClampMin = 50, ClampMax = 500, Units = "cm"))
	float MeleeRange = 200.0f;

	/** Distance in front of the character for melee center (cm) */
	UPROPERTY(EditAnywhere, Category="Weapon|Sword", meta = (ClampMin = 50, ClampMax = 300, Units = "cm"))
	float MeleeForwardOffset = 150.0f;

public:
	
	/** Constructor */
	ATwinStickCharacter();

protected:

	/** Gameplay Initialization */
	virtual void BeginPlay() override;

	/** Gameplay cleanup */
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;

	/** Possessed by controller initialization */
	virtual void NotifyControllerChanged() override;

public:	
	
	/** Updates the character's rotation to face the aim direction */
	virtual void Tick(float DeltaTime) override;

	/** Adds input bindings */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

	/** Handles movement inputs */
	void Move(const FInputActionValue& Value);

	/** Handles joypad aim */
	void StickAim(const FInputActionValue& Value);

	/** Handles mouse aim */
	void MouseAim(const FInputActionValue& Value);

	/** Performs a dash */
	void Dash(const FInputActionValue& Value);

	/** Shoots projectiles */
	void Shoot(const FInputActionValue& Value);

	/** Performs an AoE Attack */
	void AoEAttack(const FInputActionValue& Value);

public:

	/** Handles move inputs from both input actions and touch interface */
	UFUNCTION(BlueprintCallable, Category="Input")
	void DoMove(float AxisX, float AxisY);

	/** Handles aim inputs from both input actions and touch interface */
	UFUNCTION(BlueprintCallable, Category="Input")
	void DoAim(float AxisX, float AxisY);

	/** Handles dash inputs from both input actions and touch interface */
	UFUNCTION(BlueprintCallable, Category="Input")
	void DoDash();

	/** Handles shoot inputs from both input actions and touch interface */
	UFUNCTION(BlueprintCallable, Category="Input")
	void DoShoot();

	/** Handles aoe attack inputs from both input actions and touch interface */
	UFUNCTION(BlueprintCallable, Category="Input")
	void DoAoEAttack();

public:

	/** Applies collision impact to the player and reduces health */
	void HandleDamage(float Damage, const FVector& DamageDirection);

	/** Called when health reaches zero. Notifies controller and destroys character */
	void Die();

	/** Called after respawn to reset health and activate invulnerability */
	void OnRespawned();

	/** Returns current health */
	float GetHealth() const { return Health; }

	/** Returns max health */
	float GetMaxHealth() const { return MaxHealth; }

	/** Returns true if the character is alive */
	bool IsAlive() const { return Health > 0.0f; }

	/** Applies a power-up effect to the character */
	void ApplyPowerUp(EPowerUpType Type, float Multiplier, float Duration);

	/** Equips a new weapon, replacing the current one */
	void EquipWeapon(EWeaponType Type, int32 Ammo);

	/** Returns current damage multiplier */
	float GetDamageMultiplier() const { return DamageMultiplier; }

protected:

	/** Allows Blueprint code to react to damage */
	UFUNCTION(BlueprintImplementableEvent, Category="Damage", meta = (DisplayName = "Damaged"))
	void BP_Damaged();

public:

	/** Gives the player a pickup item */
	void AddPickup();

protected:

	/** Updates the items counter on the Game Mode */
	void UpdateItems();

	/** Resets stick the aim autofire flag after the autofire timer has expired */
	void ResetAutoFire();

	/** Ends invulnerability period */
	void EndInvulnerability();

	/** Reverts speed boost to base speed */
	void RevertSpeedBoost();

	/** Reverts damage multiplier to normal */
	void RevertDamageBoost();

	/** Performs a melee sphere overlap and damages NPCs in range */
	void DoMeleeAttack();

	/** Consumes one ammo. Returns true if the weapon is now depleted (reverts to Default) */
	bool ConsumeAmmo();

	/** Reverts weapon to Default with infinite ammo */
	void RevertToDefaultWeapon();

	/** Pushes current health to the UI widget */
	void UpdateHealthUI();

	/** Pushes current weapon state to the UI widget */
	void UpdateWeaponUI();

	/** Returns the player index (0 or 1) for this character */
	int32 GetPlayerIndex() const;
};
