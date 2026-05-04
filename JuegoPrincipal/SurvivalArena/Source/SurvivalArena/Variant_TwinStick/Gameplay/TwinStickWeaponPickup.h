// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TwinStickWeaponPickup.generated.h"

class USphereComponent;
class UStaticMeshComponent;

/** Available weapon types */
UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	Default,    // Single projectile, infinite ammo
	Shotgun,    // Spread of projectiles, limited shots
	RapidFire,  // Fast single projectile, limited ammo
	Sword       // Melee area attack, limited uses
};

/**
 *  A self-respawning weapon pickup for the survival arena.
 *  Place in the level. Grants a weapon with limited ammo on pickup.
 *  Respawns after a cooldown with a random weapon type.
 */
UCLASS(abstract)
class ATwinStickWeaponPickup : public AActor
{
	GENERATED_BODY()

	/** Pickup collision sphere */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USphereComponent* CollisionSphere;

	/** Visual representation */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Mesh;

protected:

	/** Current weapon type this pickup grants */
	UPROPERTY(EditAnywhere, Category="Weapon")
	EWeaponType WeaponType = EWeaponType::Shotgun;

	/** Whether to randomize weapon type on each respawn */
	UPROPERTY(EditAnywhere, Category="Weapon")
	bool bRandomizeOnRespawn = true;

	/** Ammo granted with the weapon */
	UPROPERTY(EditAnywhere, Category="Weapon", meta = (ClampMin = 1, ClampMax = 100))
	int32 Ammo = 10;

	/** Time before the pickup respawns (seconds) */
	UPROPERTY(EditAnywhere, Category="Weapon", meta = (ClampMin = 1, ClampMax = 60, Units = "s"))
	float RespawnCooldown = 15.0f;

	/** Timer for respawning */
	FTimerHandle RespawnTimer;

public:

	/** Constructor */
	ATwinStickWeaponPickup();

	/** Collision handling */
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

protected:

	/** Cleanup */
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;

	/** Hides the pickup and starts respawn timer */
	void Deactivate();

	/** Shows the pickup again, optionally with a new random weapon */
	void Respawn();

	/** Returns the default ammo count for a weapon type */
	int32 GetDefaultAmmoForType(EWeaponType Type) const;

	/** Returns a random weapon type (excluding Default) */
	EWeaponType GetRandomWeaponType() const;
};
