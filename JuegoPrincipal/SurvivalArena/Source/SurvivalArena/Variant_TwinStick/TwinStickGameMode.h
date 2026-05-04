// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TwinStickWeaponPickup.h"
#include "TwinStickGameMode.generated.h"

class UTwinStickUI;
class ATwinStickPlayerController;
class ATwinStickCameraActor;

/** Possible states of the round system */
UENUM(BlueprintType)
enum class ERoundState : uint8
{
	Countdown,      // 3,2,1 before round starts
	Active,         // enemies spawning and fighting
	RoundComplete,  // all enemies defeated, short break
	GameOver,       // all players dead
	Victory         // all 5 rounds completed
};

/**
 *  Simple Game Mode for a Twin Stick Shooter game.
 *  Manages the score and UI
 */
UCLASS(abstract)
class ATwinStickGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
protected:

	/** Type of UI Widget to spawn */
	UPROPERTY(EditAnywhere, Category="Twin Stick")
	TSubclassOf<UTwinStickUI> UIWidgetClass;

	/** Pointer to the spawned UI Widget */
	TObjectPtr<UTwinStickUI> UIWidget;

	/** Current game score */
	int32 Score = 0;

	/** Current combo multiplier */
	int32 Combo = 1;

	/** Current combo increment value */
	int32 ComboIncrement = 0;

	/** Number of combo hits to process before incrementing the combo multiplier */
	UPROPERTY(EditAnywhere, Category="Twin Stick", meta=(ClampMin = 0, ClampMax = 10))
	int32 ComboIncrementMax = 5;

	/** Maximum allowed combo multiplier value */
	UPROPERTY(EditAnywhere, Category="Twin Stick", meta=(ClampMin = 0, ClampMax = 10))
	int32 ComboCap = 4;

	/** Max time between kills before the combo multiplier resets */
	UPROPERTY(EditAnywhere, Category="Twin Stick", meta=(ClampMin = 0, ClampMax = 10, Units = "s"))
	float ComboCooldown = 3.0f;

	/** Game time of the last combo kill */
	float LastComboTime = 0.0f;

	FTimerHandle ComboTimer;

	/** Max number of NPCs to allow in the level at once */
	UPROPERTY(EditAnywhere, Category="Twin Stick", meta=(ClampMin = 0, ClampMax = 100))
	int32 NPCCap = 20;

	/** Current number of NPCs in the level */
	int32 NPCCount = 0;

	// ---- Round System ----

	/** Current round state */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Rounds")
	ERoundState RoundState = ERoundState::Countdown;

	/** Current round number (1-based) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Rounds")
	int32 CurrentRound = 0;

	/** Total number of rounds */
	UPROPERTY(EditAnywhere, Category="Rounds", meta=(ClampMin = 1, ClampMax = 20))
	int32 TotalRounds = 5;

	/** Base number of enemies in round 1 */
	UPROPERTY(EditAnywhere, Category="Rounds", meta=(ClampMin = 1, ClampMax = 100))
	int32 BaseEnemiesPerRound = 10;

	/** Extra enemies added per round */
	UPROPERTY(EditAnywhere, Category="Rounds", meta=(ClampMin = 0, ClampMax = 50))
	int32 EnemiesPerRoundIncrease = 5;

	/** Enemies still left to spawn this round */
	int32 EnemiesLeftToSpawn = 0;

	/** Countdown duration in seconds */
	UPROPERTY(EditAnywhere, Category="Rounds", meta=(ClampMin = 1, ClampMax = 10))
	int32 CountdownSeconds = 3;

	/** Current countdown value */
	int32 CountdownValue = 0;

	/** Break duration between rounds (seconds) */
	UPROPERTY(EditAnywhere, Category="Rounds", meta=(ClampMin = 1, ClampMax = 15, Units = "s"))
	float BreakDuration = 5.0f;

	/** Timer for round state transitions */
	FTimerHandle RoundTimer;

	// ---- Multiplayer & Camera ----

	/** Enable local multiplayer (2 players) */
	UPROPERTY(EditAnywhere, Category="Multiplayer")
	bool bEnableMultiplayer = false;

	/** Shared camera class to spawn */
	UPROPERTY(EditAnywhere, Category="Multiplayer")
	TSubclassOf<ATwinStickCameraActor> SharedCameraClass;

	/** Pointer to the spawned shared camera */
	TObjectPtr<ATwinStickCameraActor> SharedCamera;

public:

	/** Gameplay initialization */
	virtual void BeginPlay() override;

	/** Cleanup */
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;

public:

	/** Called when an item has been used */
	void ItemUsed(int32 Value);

	/** Increments the score by the given value */
	void ScoreUpdate(int32 Value);

protected:

	/** Updates the combo multiplier */
	void ComboUpdate();

	/** Resets the combo cooldown timer */
	void ResetComboCooldown();

	/** Resets the combo multiplier after the cooldown time expires */
	void ResetCombo();

public:

	/** Returns true if the number of NPCs is under the cap */
	bool CanSpawnNPCs();

	/** Increases the NPC count */
	void IncreaseNPCs();

	/** Decreases the NPC count. Checks for round completion. */
	void DecreaseNPCs();

	// ---- Round System Methods ----

	/** Starts the next round countdown */
	void StartNextRound();

	/** Called each countdown tick (3, 2, 1) */
	void CountdownTick();

	/** Activates the round — enemies start spawning */
	void ActivateRound();

	/** Called when all enemies in the round are defeated */
	void OnRoundComplete();

	/** Called after break timer — starts next round or victory */
	void OnBreakEnd();

	/** Checks if all players have lost all lives */
	void CheckGameOver();

	/** Called when the game is over */
	void OnGameOver();

	/** Called when all rounds are completed */
	void OnVictory();

	/** Returns the total enemies for a given round number */
	int32 GetEnemiesForRound(int32 Round) const;

	/** Returns current round state */
	ERoundState GetRoundState() const { return RoundState; }

	/** Returns current round number */
	int32 GetCurrentRound() const { return CurrentRound; }

	/** Sets up multiplayer (creates Player 2) and shared camera */
	void SetupMultiplayerAndCamera();

	/** Forwards a player's health to the UI */
	void UpdatePlayerHealth(int32 PlayerIndex, float HealthPercent);

	/** Forwards a player's lives to the UI */
	void UpdatePlayerLives(int32 PlayerIndex, int32 CurrentLives, int32 InMaxLives);

	/** Forwards a player's weapon state to the UI */
	void UpdatePlayerWeapon(int32 PlayerIndex, EWeaponType WeaponType, int32 Ammo);

	/** Returns the shared camera actor (if any) */
	ATwinStickCameraActor* GetSharedCamera() const { return SharedCamera; }
};
