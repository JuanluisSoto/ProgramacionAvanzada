// Copyright Epic Games, Inc. All Rights Reserved.

#include "TwinStickWeaponPickup.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "TwinStickCharacter.h"
#include "Engine/World.h"
#include "TimerManager.h"

ATwinStickWeaponPickup::ATwinStickWeaponPickup()
{
	PrimaryActorTick.bCanEverTick = false;

	// create root
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	// create collision sphere
	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Collision Sphere"));
	CollisionSphere->SetupAttachment(RootComponent);
	CollisionSphere->SetSphereRadius(100.0f);
	CollisionSphere->SetRelativeLocation(FVector(0.0f, 0.0f, 125.0f));
	CollisionSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionSphere->SetCollisionObjectType(ECC_WorldDynamic);
	CollisionSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	CollisionSphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	// create mesh
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(CollisionSphere);
	Mesh->SetCollisionProfileName(FName("NoCollision"));
}

void ATwinStickWeaponPickup::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (ATwinStickCharacter* PlayerCharacter = Cast<ATwinStickCharacter>(OtherActor))
	{
		// equip the weapon on the player
		PlayerCharacter->EquipWeapon(WeaponType, Ammo);

		// hide and start respawn cooldown
		Deactivate();
	}
}

void ATwinStickWeaponPickup::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	GetWorld()->GetTimerManager().ClearTimer(RespawnTimer);
}

void ATwinStickWeaponPickup::Deactivate()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);

	GetWorld()->GetTimerManager().SetTimer(RespawnTimer, this, &ATwinStickWeaponPickup::Respawn, RespawnCooldown, false);
}

void ATwinStickWeaponPickup::Respawn()
{
	// randomize weapon type if enabled
	if (bRandomizeOnRespawn)
	{
		WeaponType = GetRandomWeaponType();
		Ammo = GetDefaultAmmoForType(WeaponType);
	}

	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
}

int32 ATwinStickWeaponPickup::GetDefaultAmmoForType(EWeaponType Type) const
{
	switch (Type)
	{
	case EWeaponType::Shotgun:   return 5;
	case EWeaponType::RapidFire: return 20;
	case EWeaponType::Sword:     return 10;
	default:                     return -1; // infinite
	}
}

EWeaponType ATwinStickWeaponPickup::GetRandomWeaponType() const
{
	// pick a random weapon type excluding Default
	const int32 Random = FMath::RandRange(0, 2);
	switch (Random)
	{
	case 0:  return EWeaponType::Shotgun;
	case 1:  return EWeaponType::RapidFire;
	default: return EWeaponType::Sword;
	}
}
