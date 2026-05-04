// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TwinStickGameMode.h"
#include "TwinStickWeaponPickup.h"
#include "TwinStickUI.generated.h"

/**
 *  A simple Twin Stick Shooter UI widget
 *  Provides a blueprint interface to expose score values to the UI
 */
UCLASS(abstract)
class UTwinStickUI : public UUserWidget
{
	GENERATED_BODY()
	
public:

	/** Blueprint handler to update the items counter */
	UFUNCTION(BlueprintImplementableEvent, Category="Score")
	void UpdateItems(int32 Score);

	/** Blueprint handler to update the score sub-widgets */
	UFUNCTION(BlueprintImplementableEvent, Category="Score")
	void UpdateScore(int32 Score);

	/** Blueprint handler to update the combo sub-widgets */
	UFUNCTION(BlueprintImplementableEvent, Category="Score")
	void UpdateCombo(int32 Combo);

	/** Blueprint handler to update the round display */
	UFUNCTION(BlueprintImplementableEvent, Category="Rounds")
	void UpdateRound(int32 CurrentRound, int32 TotalRounds);

	/** Blueprint handler to update the countdown display */
	UFUNCTION(BlueprintImplementableEvent, Category="Rounds")
	void UpdateCountdown(int32 CountdownValue);

	/** Blueprint handler to update the round state display */
	UFUNCTION(BlueprintImplementableEvent, Category="Rounds")
	void UpdateRoundState(ERoundState NewState);

	// ── Per-Player HUD ──

	/** Blueprint handler to update a player's health bar (0.0 - 1.0 normalized) */
	UFUNCTION(BlueprintImplementableEvent, Category="Player")
	void UpdateHealth(int32 PlayerIndex, float HealthPercent);

	/** Blueprint handler to update a player's lives display */
	UFUNCTION(BlueprintImplementableEvent, Category="Player")
	void UpdateLives(int32 PlayerIndex, int32 CurrentLives, int32 MaxLives);

	/** Blueprint handler to update a player's weapon display */
	UFUNCTION(BlueprintImplementableEvent, Category="Player")
	void UpdateWeapon(int32 PlayerIndex, EWeaponType WeaponType, int32 Ammo);
};
