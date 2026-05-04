// Copyright Epic Games, Inc. All Rights Reserved.

#include "TwinStickPowerUp.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "TwinStickCharacter.h"
#include "Engine/World.h"
#include "TimerManager.h"

ATwinStickPowerUp::ATwinStickPowerUp()
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

void ATwinStickPowerUp::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	// only react to player characters
	if (ATwinStickCharacter* PlayerCharacter = Cast<ATwinStickCharacter>(OtherActor))
	{
		// apply the power-up effect
		PlayerCharacter->ApplyPowerUp(PowerUpType, Multiplier, EffectDuration);

		// hide and start respawn cooldown
		Deactivate();
	}
}

void ATwinStickPowerUp::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	GetWorld()->GetTimerManager().ClearTimer(RespawnTimer);
}

void ATwinStickPowerUp::Deactivate()
{
	// hide and disable collision
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);

	// schedule respawn
	GetWorld()->GetTimerManager().SetTimer(RespawnTimer, this, &ATwinStickPowerUp::Respawn, RespawnCooldown, false);
}

void ATwinStickPowerUp::Respawn()
{
	// show and re-enable collision
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
}
