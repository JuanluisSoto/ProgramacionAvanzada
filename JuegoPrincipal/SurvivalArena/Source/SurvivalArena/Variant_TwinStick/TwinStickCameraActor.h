// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TwinStickCameraActor.generated.h"

class USpringArmComponent;
class UCameraComponent;

/**
 *  A shared camera that tracks all living players.
 *  Positions itself at the midpoint and adjusts zoom
 *  dynamically based on distance between players.
 */
UCLASS(abstract)
class ATwinStickCameraActor : public AActor
{
	GENERATED_BODY()

	/** Camera boom */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* SpringArm;

	/** Camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* Camera;

protected:

	/** Arm length when players are close together or single player */
	UPROPERTY(EditAnywhere, Category="Camera", meta = (ClampMin = 500, ClampMax = 5000, Units = "cm"))
	float MinArmLength = 1800.0f;

	/** Arm length when players are at maximum distance */
	UPROPERTY(EditAnywhere, Category="Camera", meta = (ClampMin = 1000, ClampMax = 8000, Units = "cm"))
	float MaxArmLength = 4000.0f;

	/** Distance between players at which max zoom is reached (cm) */
	UPROPERTY(EditAnywhere, Category="Camera", meta = (ClampMin = 500, ClampMax = 5000, Units = "cm"))
	float MaxPlayerDistance = 2500.0f;

	/** Speed at which the camera interpolates to the target position */
	UPROPERTY(EditAnywhere, Category="Camera", meta = (ClampMin = 0.5, ClampMax = 20))
	float FollowSpeed = 8.0f;

	/** Speed at which the zoom interpolates */
	UPROPERTY(EditAnywhere, Category="Camera", meta = (ClampMin = 0.5, ClampMax = 20))
	float ZoomSpeed = 5.0f;

	/** Camera pitch angle (negative = looking down) */
	UPROPERTY(EditAnywhere, Category="Camera", meta = (ClampMin = -90, ClampMax = 0, Units = "deg"))
	float CameraPitch = -50.0f;

	/** Field of view */
	UPROPERTY(EditAnywhere, Category="Camera", meta = (ClampMin = 50, ClampMax = 120, Units = "deg"))
	float FieldOfView = 75.0f;

public:

	/** Constructor */
	ATwinStickCameraActor();

	/** Update camera position and zoom each frame */
	virtual void Tick(float DeltaTime) override;

protected:

	/** Gathers locations of all living player characters */
	TArray<FVector> GetPlayerLocations() const;
};
