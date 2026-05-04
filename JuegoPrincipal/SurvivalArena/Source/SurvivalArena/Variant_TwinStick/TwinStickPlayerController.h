// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TwinStickPlayerController.generated.h"

class UInputMappingContext;
class ATwinStickCharacter;

/**
 *  Simple Player Controller for a Twin Stick Shooter game
 *  Manages input mapping contexts
 *  Respawns the pawn if it is destroyed
 */
UCLASS(abstract)
class ATwinStickPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:

	/** Input Mapping Contexts */
	UPROPERTY(EditAnywhere, Category ="Input|Input Mappings")
	TArray<UInputMappingContext*> DefaultMappingContexts;

	/** Mobile controls widget to spawn */
	UPROPERTY(EditAnywhere, Category="Input|Touch Controls")
	TSubclassOf<UUserWidget> MobileControlsWidgetClass;

	/** Pointer to the mobile controls widget */
	TObjectPtr<UUserWidget> MobileControlsWidget;

	/** Character class to respawn when the possessed pawn is destroyed */
	UPROPERTY(EditAnywhere, Category="Respawn")
	TSubclassOf<ATwinStickCharacter> CharacterClass;

	/** Maximum lives per round */
	UPROPERTY(EditAnywhere, Category="Lives", meta=(ClampMin = 1, ClampMax = 10))
	int32 MaxLives = 3;

	/** Current remaining lives */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Lives")
	int32 Lives = 3;

	/** Score penalty applied on each death */
	UPROPERTY(EditAnywhere, Category="Lives", meta=(ClampMin = 0, ClampMax = 1000))
	int32 DeathScorePenalty = 50;

protected:

	/** Gameplay initialization */
	virtual void BeginPlay() override;

	/** Initialize input bindings */
	virtual void SetupInputComponent() override;

	/** Pawn initialization */
	virtual void OnPossess(APawn* InPawn) override;

	/** Called if the possessed pawn is destroyed */
	UFUNCTION()
	void OnPawnDestroyed(AActor* DestroyedActor);

public:

	/** Returns current remaining lives */
	int32 GetLives() const { return Lives; }

	/** Returns true if the player has lives remaining */
	bool HasLivesRemaining() const { return Lives > 0; }

	/** Resets lives to max (called at start of each round) */
	void ResetLives();
};
