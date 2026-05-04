// Copyright Epic Games, Inc. All Rights Reserved.


#include "TwinStickGameMode.h"
#include "TwinStickUI.h"
#include "TwinStickPlayerController.h"
#include "TwinStickCameraActor.h"
#include "Engine/World.h"
#include "Engine/GameViewportClient.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "SurvivalArena.h"

void ATwinStickGameMode::BeginPlay()
{
	// create the UI widget and add it to the viewport
	UIWidget = CreateWidget<UTwinStickUI>(UGameplayStatics::GetPlayerController(GetWorld(), 0), UIWidgetClass);
	UIWidget->AddToViewport(0);

	// set up multiplayer and shared camera
	SetupMultiplayerAndCamera();

	// start the first round
	StartNextRound();
}

void ATwinStickGameMode::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	
	// clear timers
	GetWorld()->GetTimerManager().ClearTimer(ComboTimer);
	GetWorld()->GetTimerManager().ClearTimer(RoundTimer);
}

void ATwinStickGameMode::ItemUsed(int32 Value)
{
	// update the UI
	UIWidget->UpdateItems(Value);
}

void ATwinStickGameMode::ScoreUpdate(int32 Value)
{
	// positive scores get the combo multiplier, penalties are applied directly
	if (Value > 0)
	{
		Score += Value * Combo;

		// update the combo multiplier
		ComboUpdate();
	}
	else
	{
		Score = FMath::Max(0, Score + Value);
	}

	// update the UI
	UIWidget->UpdateScore(Score);
}

void ATwinStickGameMode::ComboUpdate()
{
	// return
	if (Combo > ComboCap)
	{
		return;
	}

	// update the combo increment
	++ComboIncrement;

	// is it time to increase the multiplier?
	if (ComboIncrement > ComboIncrementMax)
	{
		// reset the combo increment
		ComboIncrement = 0;

		// increase the combo multiplier
		++Combo;

		// update the UI
		UIWidget->UpdateCombo(Combo);

	}

	// reset the cooldown timer
	ResetComboCooldown();
}

void ATwinStickGameMode::ResetComboCooldown()
{
	// reset the combo cooldown timer
	GetWorld()->GetTimerManager().SetTimer(ComboTimer, this, &ATwinStickGameMode::ResetCombo, ComboCooldown, false);
}

void ATwinStickGameMode::ResetCombo()
{
	// is the combo multiplier above min?
	if (Combo > 1)
	{
		// reset the combo increment
		ComboIncrement = 0;

		// tick down the multiplier
		--Combo;

		// update the UI
		UIWidget->UpdateCombo(Combo);

		// reset the cooldown timer
		ResetComboCooldown();
	}
}

bool ATwinStickGameMode::CanSpawnNPCs()
{
	// only spawn during active rounds, under the NPC cap, and if we have enemies left to spawn
	return RoundState == ERoundState::Active && NPCCount < NPCCap && EnemiesLeftToSpawn > 0;
}

void ATwinStickGameMode::IncreaseNPCs()
{
	// increase the NPC counter
	++NPCCount;

	// decrement the spawn budget
	--EnemiesLeftToSpawn;
}

void ATwinStickGameMode::DecreaseNPCs()
{
	// decrease the NPC counter
	--NPCCount;

	// check if all enemies for this round are defeated
	if (RoundState == ERoundState::Active && NPCCount <= 0 && EnemiesLeftToSpawn <= 0)
	{
		OnRoundComplete();
	}
}

// ---- Round System Implementation ----

void ATwinStickGameMode::StartNextRound()
{
	// advance to next round
	++CurrentRound;

	// set up countdown
	RoundState = ERoundState::Countdown;
	CountdownValue = CountdownSeconds;

	// reset player lives for this round
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		if (ATwinStickPlayerController* PC = Cast<ATwinStickPlayerController>(It->Get()))
		{
			PC->ResetLives();
		}
	}

	UE_LOG(LogSurvivalArena, Log, TEXT("Round %d - Countdown starting..."), CurrentRound);

	// update UI
	if (UIWidget)
	{
		UIWidget->UpdateRound(CurrentRound, TotalRounds);
		UIWidget->UpdateCountdown(CountdownValue);
	}

	// start countdown timer (ticks every 1 second)
	GetWorld()->GetTimerManager().SetTimer(RoundTimer, this, &ATwinStickGameMode::CountdownTick, 1.0f, true);
}

void ATwinStickGameMode::CountdownTick()
{
	--CountdownValue;

	if (UIWidget)
	{
		UIWidget->UpdateCountdown(CountdownValue);
	}

	UE_LOG(LogSurvivalArena, Log, TEXT("Countdown: %d"), CountdownValue);

	if (CountdownValue <= 0)
	{
		// stop countdown timer
		GetWorld()->GetTimerManager().ClearTimer(RoundTimer);

		// activate the round
		ActivateRound();
	}
}

void ATwinStickGameMode::ActivateRound()
{
	RoundState = ERoundState::Active;

	// set the enemy spawn budget for this round
	EnemiesLeftToSpawn = GetEnemiesForRound(CurrentRound);
	NPCCount = 0;

	UE_LOG(LogSurvivalArena, Log, TEXT("Round %d ACTIVE! Enemies to spawn: %d"), CurrentRound, EnemiesLeftToSpawn);

	// update UI
	if (UIWidget)
	{
		UIWidget->UpdateRoundState(RoundState);
	}
}

void ATwinStickGameMode::OnRoundComplete()
{
	RoundState = ERoundState::RoundComplete;

	UE_LOG(LogSurvivalArena, Log, TEXT("Round %d COMPLETE!"), CurrentRound);

	// update UI
	if (UIWidget)
	{
		UIWidget->UpdateRoundState(RoundState);
	}

	// check if this was the last round
	if (CurrentRound >= TotalRounds)
	{
		OnVictory();
		return;
	}

	// start break timer before next round
	GetWorld()->GetTimerManager().SetTimer(RoundTimer, this, &ATwinStickGameMode::OnBreakEnd, BreakDuration, false);
}

void ATwinStickGameMode::OnBreakEnd()
{
	StartNextRound();
}

void ATwinStickGameMode::CheckGameOver()
{
	// check if any player still has lives
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		if (ATwinStickPlayerController* PC = Cast<ATwinStickPlayerController>(It->Get()))
		{
			if (PC->HasLivesRemaining())
			{
				return; // at least one player alive
			}
		}
	}

	// all players are out of lives
	OnGameOver();
}

void ATwinStickGameMode::OnGameOver()
{
	RoundState = ERoundState::GameOver;

	// stop all spawning timers
	GetWorld()->GetTimerManager().ClearTimer(RoundTimer);

	UE_LOG(LogSurvivalArena, Warning, TEXT("GAME OVER at Round %d! Final Score: %d"), CurrentRound, Score);

	// update UI
	if (UIWidget)
	{
		UIWidget->UpdateRoundState(RoundState);
	}
}

void ATwinStickGameMode::OnVictory()
{
	RoundState = ERoundState::Victory;

	// stop all timers
	GetWorld()->GetTimerManager().ClearTimer(RoundTimer);

	UE_LOG(LogSurvivalArena, Log, TEXT("VICTORY! All %d rounds completed! Final Score: %d"), TotalRounds, Score);

	// update UI
	if (UIWidget)
	{
		UIWidget->UpdateRoundState(RoundState);
	}
}

int32 ATwinStickGameMode::GetEnemiesForRound(int32 Round) const
{
	return BaseEnemiesPerRound + (Round - 1) * EnemiesPerRoundIncrease;
}

void ATwinStickGameMode::UpdatePlayerHealth(int32 PlayerIndex, float HealthPercent)
{
	if (UIWidget)
	{
		UIWidget->UpdateHealth(PlayerIndex, HealthPercent);
	}
}

void ATwinStickGameMode::UpdatePlayerLives(int32 PlayerIndex, int32 CurrentLives, int32 InMaxLives)
{
	if (UIWidget)
	{
		UIWidget->UpdateLives(PlayerIndex, CurrentLives, InMaxLives);
	}
}

void ATwinStickGameMode::UpdatePlayerWeapon(int32 PlayerIndex, EWeaponType WeaponType, int32 Ammo)
{
	if (UIWidget)
	{
		UIWidget->UpdateWeapon(PlayerIndex, WeaponType, Ammo);
	}
}

void ATwinStickGameMode::SetupMultiplayerAndCamera()
{
	// create Player 2 if multiplayer is enabled
	if (bEnableMultiplayer)
	{
		UGameplayStatics::CreatePlayer(GetWorld(), 1);

		// disable split screen so both players share one viewport
		if (UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport())
		{
			ViewportClient->SetForceDisableSplitscreen(true);
		}

		UE_LOG(LogSurvivalArena, Log, TEXT("Local multiplayer enabled — Player 2 created."));
	}

	// spawn the shared camera (works for both single and multiplayer)
	if (SharedCameraClass)
	{
		// spawn at world origin; it will move to track players on first tick
		SharedCamera = GetWorld()->SpawnActor<ATwinStickCameraActor>(SharedCameraClass, FTransform::Identity);

		if (SharedCamera)
		{
			// set the shared camera as view target for Player 0
			if (APlayerController* PC0 = UGameplayStatics::GetPlayerController(GetWorld(), 0))
			{
				PC0->SetViewTargetWithBlend(SharedCamera, 0.0f);
			}

			UE_LOG(LogSurvivalArena, Log, TEXT("Shared camera spawned and set as view target."));
		}
	}
}
