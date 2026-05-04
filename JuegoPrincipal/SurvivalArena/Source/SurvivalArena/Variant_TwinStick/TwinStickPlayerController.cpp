// Copyright Epic Games, Inc. All Rights Reserved.


#include "TwinStickPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerStart.h"
#include "TwinStickCharacter.h"
#include "TwinStickGameMode.h"
#include "TwinStickCameraActor.h"
#include "Engine/LocalPlayer.h"
#include "Engine/World.h"
#include "Blueprint/UserWidget.h"
#include "SurvivalArena.h"
#include "Widgets/Input/SVirtualJoystick.h"

void ATwinStickPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// only spawn touch controls on local player controllers
	if (SVirtualJoystick::ShouldDisplayTouchInterface() && IsLocalPlayerController())
	{
		// spawn the mobile controls widget
		MobileControlsWidget = CreateWidget<UUserWidget>(this, MobileControlsWidgetClass);

		if (MobileControlsWidget)
		{
			// add the controls to the player screen
			MobileControlsWidget->AddToPlayerScreen(0);

		} else {

			UE_LOG(LogSurvivalArena, Error, TEXT("Could not spawn mobile controls widget."));

		}

	}
}

void ATwinStickPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// only add IMCs for local player controllers
	if (IsLocalPlayerController())
	{
		// Add Input Mapping Contexts
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
		{
			for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
			{
				Subsystem->AddMappingContext(CurrentContext, 0);
			}
		}
	}
}

void ATwinStickPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// subscribe to the pawn's OnDestroyed delegate
	InPawn->OnDestroyed.AddDynamic(this, &ATwinStickPlayerController::OnPawnDestroyed);
}

void ATwinStickPlayerController::OnPawnDestroyed(AActor* DestroyedActor)
{
	// decrement lives
	--Lives;

	// get player index for UI
	const int32 PlayerIndex = UGameplayStatics::GetPlayerControllerID(this);

	// apply score penalty and update lives UI
	if (ATwinStickGameMode* GM = Cast<ATwinStickGameMode>(GetWorld()->GetAuthGameMode()))
	{
		GM->ScoreUpdate(-DeathScorePenalty);
		GM->UpdatePlayerLives(PlayerIndex, Lives, MaxLives);
	}

	// check if we have lives remaining
	if (Lives <= 0)
	{
		UE_LOG(LogSurvivalArena, Warning, TEXT("Player has no lives remaining."));

		// ask the game mode to check if all players are dead
		if (ATwinStickGameMode* GM2 = Cast<ATwinStickGameMode>(GetWorld()->GetAuthGameMode()))
		{
			GM2->CheckGameOver();
		}
		return;
	}

	// find all player starts
	TArray<AActor*> ActorList;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerStart::StaticClass(), ActorList);

	if (ActorList.Num() > 0)
	{
		// reuse player index from above
		const int32 StartIndex = PlayerIndex % ActorList.Num();
		const FTransform SpawnTransform = ActorList[StartIndex]->GetActorTransform();

		if (ATwinStickCharacter* RespawnedCharacter = GetWorld()->SpawnActor<ATwinStickCharacter>(CharacterClass, SpawnTransform))
		{
			// possess the character
			Possess(RespawnedCharacter);

			// activate respawn invulnerability
			RespawnedCharacter->OnRespawned();

			// if a shared camera exists, ensure view target stays on it
			if (ATwinStickGameMode* GM3 = Cast<ATwinStickGameMode>(GetWorld()->GetAuthGameMode()))
			{
				if (ATwinStickCameraActor* SharedCam = GM3->GetSharedCamera())
				{
					SetViewTargetWithBlend(SharedCam, 0.0f);
				}
			}
		}
	}
}

void ATwinStickPlayerController::ResetLives()
{
	Lives = MaxLives;

	// update lives UI
	if (ATwinStickGameMode* GM = Cast<ATwinStickGameMode>(GetWorld()->GetAuthGameMode()))
	{
		const int32 PlayerIndex = UGameplayStatics::GetPlayerControllerID(this);
		GM->UpdatePlayerLives(PlayerIndex, Lives, MaxLives);
	}
}
