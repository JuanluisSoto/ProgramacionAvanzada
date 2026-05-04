// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TwinStickPowerUp.generated.h"

class USphereComponent;
class UStaticMeshComponent;

/** Types of power-ups available */
UENUM(BlueprintType)
enum class EPowerUpType : uint8
{
	SpeedBoost,
	DamageBoost
};

/**
 *  A self-respawning power-up for the survival arena.
 *  Place in the level. When picked up, hides and respawns after a cooldown.
 */
UCLASS(abstract)
class ATwinStickPowerUp : public AActor
{
	GENERATED_BODY()

	/** Pickup collision sphere */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USphereComponent* CollisionSphere;

	/** Visual representation */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Mesh;

protected:

	/** Type of power-up effect */
	UPROPERTY(EditAnywhere, Category="PowerUp")
	EPowerUpType PowerUpType = EPowerUpType::SpeedBoost;

	/** Duration of the effect on the player (seconds) */
	UPROPERTY(EditAnywhere, Category="PowerUp", meta = (ClampMin = 1, ClampMax = 30, Units = "s"))
	float EffectDuration = 5.0f;

	/** Multiplier applied by this power-up (e.g., 1.5 = 50% boost) */
	UPROPERTY(EditAnywhere, Category="PowerUp", meta = (ClampMin = 1.0, ClampMax = 5.0))
	float Multiplier = 1.5f;

	/** Time before the power-up respawns after being picked up (seconds) */
	UPROPERTY(EditAnywhere, Category="PowerUp", meta = (ClampMin = 1, ClampMax = 60, Units = "s"))
	float RespawnCooldown = 10.0f;

	/** Timer for respawning */
	FTimerHandle RespawnTimer;

public:

	/** Constructor */
	ATwinStickPowerUp();

	/** Collision handling */
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

protected:

	/** Cleanup */
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;

	/** Hides the power-up and starts respawn timer */
	void Deactivate();

	/** Shows the power-up again */
	void Respawn();
};
