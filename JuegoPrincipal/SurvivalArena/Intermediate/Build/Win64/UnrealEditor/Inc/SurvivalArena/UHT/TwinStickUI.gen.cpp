// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwinStickUI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTwinStickUI() {}

// ********** Begin Cross Module References ********************************************************
SURVIVALARENA_API UClass* Z_Construct_UClass_UTwinStickUI();
SURVIVALARENA_API UClass* Z_Construct_UClass_UTwinStickUI_NoRegister();
SURVIVALARENA_API UEnum* Z_Construct_UEnum_SurvivalArena_ERoundState();
SURVIVALARENA_API UEnum* Z_Construct_UEnum_SurvivalArena_EWeaponType();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SurvivalArena();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTwinStickUI Function UpdateCombo ****************************************
struct TwinStickUI_eventUpdateCombo_Parms
{
	int32 Combo;
};
static FName NAME_UTwinStickUI_UpdateCombo = FName(TEXT("UpdateCombo"));
void UTwinStickUI::UpdateCombo(int32 Combo)
{
	TwinStickUI_eventUpdateCombo_Parms Parms;
	Parms.Combo=Combo;
	UFunction* Func = FindFunctionChecked(NAME_UTwinStickUI_UpdateCombo);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTwinStickUI_UpdateCombo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blueprint handler to update the combo sub-widgets */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/UI/TwinStickUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint handler to update the combo sub-widgets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Combo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTwinStickUI_UpdateCombo_Statics::NewProp_Combo = { "Combo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinStickUI_eventUpdateCombo_Parms, Combo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinStickUI_UpdateCombo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinStickUI_UpdateCombo_Statics::NewProp_Combo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateCombo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinStickUI_UpdateCombo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTwinStickUI, nullptr, "UpdateCombo", Z_Construct_UFunction_UTwinStickUI_UpdateCombo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateCombo_Statics::PropPointers), sizeof(TwinStickUI_eventUpdateCombo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateCombo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwinStickUI_UpdateCombo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TwinStickUI_eventUpdateCombo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinStickUI_UpdateCombo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwinStickUI_UpdateCombo_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UTwinStickUI Function UpdateCombo ******************************************

// ********** Begin Class UTwinStickUI Function UpdateCountdown ************************************
struct TwinStickUI_eventUpdateCountdown_Parms
{
	int32 CountdownValue;
};
static FName NAME_UTwinStickUI_UpdateCountdown = FName(TEXT("UpdateCountdown"));
void UTwinStickUI::UpdateCountdown(int32 CountdownValue)
{
	TwinStickUI_eventUpdateCountdown_Parms Parms;
	Parms.CountdownValue=CountdownValue;
	UFunction* Func = FindFunctionChecked(NAME_UTwinStickUI_UpdateCountdown);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTwinStickUI_UpdateCountdown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rounds" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blueprint handler to update the countdown display */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/UI/TwinStickUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint handler to update the countdown display" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CountdownValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTwinStickUI_UpdateCountdown_Statics::NewProp_CountdownValue = { "CountdownValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinStickUI_eventUpdateCountdown_Parms, CountdownValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinStickUI_UpdateCountdown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinStickUI_UpdateCountdown_Statics::NewProp_CountdownValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateCountdown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinStickUI_UpdateCountdown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTwinStickUI, nullptr, "UpdateCountdown", Z_Construct_UFunction_UTwinStickUI_UpdateCountdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateCountdown_Statics::PropPointers), sizeof(TwinStickUI_eventUpdateCountdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateCountdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwinStickUI_UpdateCountdown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TwinStickUI_eventUpdateCountdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinStickUI_UpdateCountdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwinStickUI_UpdateCountdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UTwinStickUI Function UpdateCountdown **************************************

// ********** Begin Class UTwinStickUI Function UpdateHealth ***************************************
struct TwinStickUI_eventUpdateHealth_Parms
{
	int32 PlayerIndex;
	float HealthPercent;
};
static FName NAME_UTwinStickUI_UpdateHealth = FName(TEXT("UpdateHealth"));
void UTwinStickUI::UpdateHealth(int32 PlayerIndex, float HealthPercent)
{
	TwinStickUI_eventUpdateHealth_Parms Parms;
	Parms.PlayerIndex=PlayerIndex;
	Parms.HealthPercent=HealthPercent;
	UFunction* Func = FindFunctionChecked(NAME_UTwinStickUI_UpdateHealth);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTwinStickUI_UpdateHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blueprint handler to update a player's health bar (0.0 - 1.0 normalized) */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/UI/TwinStickUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint handler to update a player's health bar (0.0 - 1.0 normalized)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTwinStickUI_UpdateHealth_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinStickUI_eventUpdateHealth_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTwinStickUI_UpdateHealth_Statics::NewProp_HealthPercent = { "HealthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinStickUI_eventUpdateHealth_Parms, HealthPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinStickUI_UpdateHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinStickUI_UpdateHealth_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinStickUI_UpdateHealth_Statics::NewProp_HealthPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinStickUI_UpdateHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTwinStickUI, nullptr, "UpdateHealth", Z_Construct_UFunction_UTwinStickUI_UpdateHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateHealth_Statics::PropPointers), sizeof(TwinStickUI_eventUpdateHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwinStickUI_UpdateHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TwinStickUI_eventUpdateHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinStickUI_UpdateHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwinStickUI_UpdateHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UTwinStickUI Function UpdateHealth *****************************************

// ********** Begin Class UTwinStickUI Function UpdateItems ****************************************
struct TwinStickUI_eventUpdateItems_Parms
{
	int32 Score;
};
static FName NAME_UTwinStickUI_UpdateItems = FName(TEXT("UpdateItems"));
void UTwinStickUI::UpdateItems(int32 Score)
{
	TwinStickUI_eventUpdateItems_Parms Parms;
	Parms.Score=Score;
	UFunction* Func = FindFunctionChecked(NAME_UTwinStickUI_UpdateItems);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTwinStickUI_UpdateItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blueprint handler to update the items counter */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/UI/TwinStickUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint handler to update the items counter" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTwinStickUI_UpdateItems_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinStickUI_eventUpdateItems_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinStickUI_UpdateItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinStickUI_UpdateItems_Statics::NewProp_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinStickUI_UpdateItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTwinStickUI, nullptr, "UpdateItems", Z_Construct_UFunction_UTwinStickUI_UpdateItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateItems_Statics::PropPointers), sizeof(TwinStickUI_eventUpdateItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwinStickUI_UpdateItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TwinStickUI_eventUpdateItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinStickUI_UpdateItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwinStickUI_UpdateItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UTwinStickUI Function UpdateItems ******************************************

// ********** Begin Class UTwinStickUI Function UpdateLives ****************************************
struct TwinStickUI_eventUpdateLives_Parms
{
	int32 PlayerIndex;
	int32 CurrentLives;
	int32 MaxLives;
};
static FName NAME_UTwinStickUI_UpdateLives = FName(TEXT("UpdateLives"));
void UTwinStickUI::UpdateLives(int32 PlayerIndex, int32 CurrentLives, int32 MaxLives)
{
	TwinStickUI_eventUpdateLives_Parms Parms;
	Parms.PlayerIndex=PlayerIndex;
	Parms.CurrentLives=CurrentLives;
	Parms.MaxLives=MaxLives;
	UFunction* Func = FindFunctionChecked(NAME_UTwinStickUI_UpdateLives);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTwinStickUI_UpdateLives_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blueprint handler to update a player's lives display */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/UI/TwinStickUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint handler to update a player's lives display" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLives;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLives;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTwinStickUI_UpdateLives_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinStickUI_eventUpdateLives_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTwinStickUI_UpdateLives_Statics::NewProp_CurrentLives = { "CurrentLives", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinStickUI_eventUpdateLives_Parms, CurrentLives), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTwinStickUI_UpdateLives_Statics::NewProp_MaxLives = { "MaxLives", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinStickUI_eventUpdateLives_Parms, MaxLives), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinStickUI_UpdateLives_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinStickUI_UpdateLives_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinStickUI_UpdateLives_Statics::NewProp_CurrentLives,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinStickUI_UpdateLives_Statics::NewProp_MaxLives,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateLives_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinStickUI_UpdateLives_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTwinStickUI, nullptr, "UpdateLives", Z_Construct_UFunction_UTwinStickUI_UpdateLives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateLives_Statics::PropPointers), sizeof(TwinStickUI_eventUpdateLives_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateLives_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwinStickUI_UpdateLives_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TwinStickUI_eventUpdateLives_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinStickUI_UpdateLives()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwinStickUI_UpdateLives_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UTwinStickUI Function UpdateLives ******************************************

// ********** Begin Class UTwinStickUI Function UpdateRound ****************************************
struct TwinStickUI_eventUpdateRound_Parms
{
	int32 CurrentRound;
	int32 TotalRounds;
};
static FName NAME_UTwinStickUI_UpdateRound = FName(TEXT("UpdateRound"));
void UTwinStickUI::UpdateRound(int32 CurrentRound, int32 TotalRounds)
{
	TwinStickUI_eventUpdateRound_Parms Parms;
	Parms.CurrentRound=CurrentRound;
	Parms.TotalRounds=TotalRounds;
	UFunction* Func = FindFunctionChecked(NAME_UTwinStickUI_UpdateRound);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTwinStickUI_UpdateRound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rounds" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blueprint handler to update the round display */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/UI/TwinStickUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint handler to update the round display" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentRound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalRounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTwinStickUI_UpdateRound_Statics::NewProp_CurrentRound = { "CurrentRound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinStickUI_eventUpdateRound_Parms, CurrentRound), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTwinStickUI_UpdateRound_Statics::NewProp_TotalRounds = { "TotalRounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinStickUI_eventUpdateRound_Parms, TotalRounds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinStickUI_UpdateRound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinStickUI_UpdateRound_Statics::NewProp_CurrentRound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinStickUI_UpdateRound_Statics::NewProp_TotalRounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateRound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinStickUI_UpdateRound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTwinStickUI, nullptr, "UpdateRound", Z_Construct_UFunction_UTwinStickUI_UpdateRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateRound_Statics::PropPointers), sizeof(TwinStickUI_eventUpdateRound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateRound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwinStickUI_UpdateRound_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TwinStickUI_eventUpdateRound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinStickUI_UpdateRound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwinStickUI_UpdateRound_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UTwinStickUI Function UpdateRound ******************************************

// ********** Begin Class UTwinStickUI Function UpdateRoundState ***********************************
struct TwinStickUI_eventUpdateRoundState_Parms
{
	ERoundState NewState;
};
static FName NAME_UTwinStickUI_UpdateRoundState = FName(TEXT("UpdateRoundState"));
void UTwinStickUI::UpdateRoundState(ERoundState NewState)
{
	TwinStickUI_eventUpdateRoundState_Parms Parms;
	Parms.NewState=NewState;
	UFunction* Func = FindFunctionChecked(NAME_UTwinStickUI_UpdateRoundState);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTwinStickUI_UpdateRoundState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rounds" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blueprint handler to update the round state display */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/UI/TwinStickUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint handler to update the round state display" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTwinStickUI_UpdateRoundState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTwinStickUI_UpdateRoundState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinStickUI_eventUpdateRoundState_Parms, NewState), Z_Construct_UEnum_SurvivalArena_ERoundState, METADATA_PARAMS(0, nullptr) }; // 552900509
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinStickUI_UpdateRoundState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinStickUI_UpdateRoundState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinStickUI_UpdateRoundState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateRoundState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinStickUI_UpdateRoundState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTwinStickUI, nullptr, "UpdateRoundState", Z_Construct_UFunction_UTwinStickUI_UpdateRoundState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateRoundState_Statics::PropPointers), sizeof(TwinStickUI_eventUpdateRoundState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateRoundState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwinStickUI_UpdateRoundState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TwinStickUI_eventUpdateRoundState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinStickUI_UpdateRoundState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwinStickUI_UpdateRoundState_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UTwinStickUI Function UpdateRoundState *************************************

// ********** Begin Class UTwinStickUI Function UpdateScore ****************************************
struct TwinStickUI_eventUpdateScore_Parms
{
	int32 Score;
};
static FName NAME_UTwinStickUI_UpdateScore = FName(TEXT("UpdateScore"));
void UTwinStickUI::UpdateScore(int32 Score)
{
	TwinStickUI_eventUpdateScore_Parms Parms;
	Parms.Score=Score;
	UFunction* Func = FindFunctionChecked(NAME_UTwinStickUI_UpdateScore);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTwinStickUI_UpdateScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blueprint handler to update the score sub-widgets */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/UI/TwinStickUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint handler to update the score sub-widgets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTwinStickUI_UpdateScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinStickUI_eventUpdateScore_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinStickUI_UpdateScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinStickUI_UpdateScore_Statics::NewProp_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinStickUI_UpdateScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTwinStickUI, nullptr, "UpdateScore", Z_Construct_UFunction_UTwinStickUI_UpdateScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateScore_Statics::PropPointers), sizeof(TwinStickUI_eventUpdateScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwinStickUI_UpdateScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TwinStickUI_eventUpdateScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinStickUI_UpdateScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwinStickUI_UpdateScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UTwinStickUI Function UpdateScore ******************************************

// ********** Begin Class UTwinStickUI Function UpdateWeapon ***************************************
struct TwinStickUI_eventUpdateWeapon_Parms
{
	int32 PlayerIndex;
	EWeaponType WeaponType;
	int32 Ammo;
};
static FName NAME_UTwinStickUI_UpdateWeapon = FName(TEXT("UpdateWeapon"));
void UTwinStickUI::UpdateWeapon(int32 PlayerIndex, EWeaponType WeaponType, int32 Ammo)
{
	TwinStickUI_eventUpdateWeapon_Parms Parms;
	Parms.PlayerIndex=PlayerIndex;
	Parms.WeaponType=WeaponType;
	Parms.Ammo=Ammo;
	UFunction* Func = FindFunctionChecked(NAME_UTwinStickUI_UpdateWeapon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTwinStickUI_UpdateWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blueprint handler to update a player's weapon display */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/UI/TwinStickUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint handler to update a player's weapon display" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ammo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTwinStickUI_UpdateWeapon_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinStickUI_eventUpdateWeapon_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTwinStickUI_UpdateWeapon_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTwinStickUI_UpdateWeapon_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinStickUI_eventUpdateWeapon_Parms, WeaponType), Z_Construct_UEnum_SurvivalArena_EWeaponType, METADATA_PARAMS(0, nullptr) }; // 356361224
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTwinStickUI_UpdateWeapon_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinStickUI_eventUpdateWeapon_Parms, Ammo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinStickUI_UpdateWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinStickUI_UpdateWeapon_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinStickUI_UpdateWeapon_Statics::NewProp_WeaponType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinStickUI_UpdateWeapon_Statics::NewProp_WeaponType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinStickUI_UpdateWeapon_Statics::NewProp_Ammo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinStickUI_UpdateWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTwinStickUI, nullptr, "UpdateWeapon", Z_Construct_UFunction_UTwinStickUI_UpdateWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateWeapon_Statics::PropPointers), sizeof(TwinStickUI_eventUpdateWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinStickUI_UpdateWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwinStickUI_UpdateWeapon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TwinStickUI_eventUpdateWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinStickUI_UpdateWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwinStickUI_UpdateWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UTwinStickUI Function UpdateWeapon *****************************************

// ********** Begin Class UTwinStickUI *************************************************************
void UTwinStickUI::StaticRegisterNativesUTwinStickUI()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTwinStickUI;
UClass* UTwinStickUI::GetPrivateStaticClass()
{
	using TClass = UTwinStickUI;
	if (!Z_Registration_Info_UClass_UTwinStickUI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TwinStickUI"),
			Z_Registration_Info_UClass_UTwinStickUI.InnerSingleton,
			StaticRegisterNativesUTwinStickUI,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UTwinStickUI.InnerSingleton;
}
UClass* Z_Construct_UClass_UTwinStickUI_NoRegister()
{
	return UTwinStickUI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTwinStickUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A simple Twin Stick Shooter UI widget\n *  Provides a blueprint interface to expose score values to the UI\n */" },
#endif
		{ "IncludePath", "Variant_TwinStick/UI/TwinStickUI.h" },
		{ "ModuleRelativePath", "Variant_TwinStick/UI/TwinStickUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple Twin Stick Shooter UI widget\nProvides a blueprint interface to expose score values to the UI" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwinStickUI_UpdateCombo, "UpdateCombo" }, // 792220846
		{ &Z_Construct_UFunction_UTwinStickUI_UpdateCountdown, "UpdateCountdown" }, // 2888741297
		{ &Z_Construct_UFunction_UTwinStickUI_UpdateHealth, "UpdateHealth" }, // 1823608464
		{ &Z_Construct_UFunction_UTwinStickUI_UpdateItems, "UpdateItems" }, // 3469314965
		{ &Z_Construct_UFunction_UTwinStickUI_UpdateLives, "UpdateLives" }, // 554523093
		{ &Z_Construct_UFunction_UTwinStickUI_UpdateRound, "UpdateRound" }, // 2643398582
		{ &Z_Construct_UFunction_UTwinStickUI_UpdateRoundState, "UpdateRoundState" }, // 677786146
		{ &Z_Construct_UFunction_UTwinStickUI_UpdateScore, "UpdateScore" }, // 3064702217
		{ &Z_Construct_UFunction_UTwinStickUI_UpdateWeapon, "UpdateWeapon" }, // 3340726886
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinStickUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTwinStickUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SurvivalArena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTwinStickUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTwinStickUI_Statics::ClassParams = {
	&UTwinStickUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00A010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwinStickUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UTwinStickUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTwinStickUI()
{
	if (!Z_Registration_Info_UClass_UTwinStickUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwinStickUI.OuterSingleton, Z_Construct_UClass_UTwinStickUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTwinStickUI.OuterSingleton;
}
UTwinStickUI::UTwinStickUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinStickUI);
UTwinStickUI::~UTwinStickUI() {}
// ********** End Class UTwinStickUI ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_UI_TwinStickUI_h__Script_SurvivalArena_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTwinStickUI, UTwinStickUI::StaticClass, TEXT("UTwinStickUI"), &Z_Registration_Info_UClass_UTwinStickUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwinStickUI), 3391556708U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_UI_TwinStickUI_h__Script_SurvivalArena_2363990447(TEXT("/Script/SurvivalArena"),
	Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_UI_TwinStickUI_h__Script_SurvivalArena_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_UI_TwinStickUI_h__Script_SurvivalArena_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
