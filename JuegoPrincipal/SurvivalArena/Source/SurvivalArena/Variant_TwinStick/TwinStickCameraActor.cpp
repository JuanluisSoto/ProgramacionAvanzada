// Copyright Epic Games, Inc. All Rights Reserved.

#include "TwinStickCameraActor.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"

ATwinStickCameraActor::ATwinStickCameraActor()
{
	PrimaryActorTick.bCanEverTick = true;

	// create root scene component
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	// create spring arm
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->SetRelativeRotation(FRotator(CameraPitch, 0.0f, 0.0f));
	SpringArm->TargetArmLength = MinArmLength;
	SpringArm->bDoCollisionTest = false;
	SpringArm->bInheritYaw = false;
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritRoll = false;
	SpringArm->bEnableCameraLag = false;

	// create camera
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
	Camera->SetFieldOfView(FieldOfView);
}

void ATwinStickCameraActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// gather player locations
	TArray<FVector> Locations = GetPlayerLocations();

	if (Locations.Num() == 0)
	{
		// no living players, keep current position
		return;
	}

	// compute midpoint
	FVector Midpoint = FVector::ZeroVector;
	for (const FVector& Loc : Locations)
	{
		Midpoint += Loc;
	}
	Midpoint /= Locations.Num();

	// smoothly move to the midpoint (XY only, keep current Z)
	FVector CurrentPos = GetActorLocation();
	FVector TargetPos = FVector(Midpoint.X, Midpoint.Y, CurrentPos.Z);
	SetActorLocation(FMath::VInterpTo(CurrentPos, TargetPos, DeltaTime, FollowSpeed));

	// compute zoom based on distance between players
	float TargetArmLength = MinArmLength;

	if (Locations.Num() > 1)
	{
		// find the maximum distance between any two players
		float MaxDist = 0.0f;
		for (int32 i = 0; i < Locations.Num(); ++i)
		{
			for (int32 j = i + 1; j < Locations.Num(); ++j)
			{
				MaxDist = FMath::Max(MaxDist, FVector::Dist2D(Locations[i], Locations[j]));
			}
		}

		// map distance to arm length
		const float Alpha = FMath::Clamp(MaxDist / MaxPlayerDistance, 0.0f, 1.0f);
		TargetArmLength = FMath::Lerp(MinArmLength, MaxArmLength, Alpha);
	}

	// smoothly interpolate the arm length
	SpringArm->TargetArmLength = FMath::FInterpTo(SpringArm->TargetArmLength, TargetArmLength, DeltaTime, ZoomSpeed);

	// update spring arm rotation (in case CameraPitch was changed at runtime)
	SpringArm->SetRelativeRotation(FRotator(CameraPitch, 0.0f, 0.0f));
}

TArray<FVector> ATwinStickCameraActor::GetPlayerLocations() const
{
	TArray<FVector> Locations;

	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		if (APlayerController* PC = It->Get())
		{
			if (APawn* Pawn = PC->GetPawn())
			{
				Locations.Add(Pawn->GetActorLocation());
			}
		}
	}

	return Locations;
}
