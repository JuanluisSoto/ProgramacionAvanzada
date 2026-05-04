// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwinStickGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTwinStickGameMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SURVIVALARENA_API UClass* Z_Construct_UClass_ATwinStickCameraActor_NoRegister();
SURVIVALARENA_API UClass* Z_Construct_UClass_ATwinStickGameMode();
SURVIVALARENA_API UClass* Z_Construct_UClass_ATwinStickGameMode_NoRegister();
SURVIVALARENA_API UClass* Z_Construct_UClass_UTwinStickUI_NoRegister();
SURVIVALARENA_API UEnum* Z_Construct_UEnum_SurvivalArena_ERoundState();
UPackage* Z_Construct_UPackage__Script_SurvivalArena();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ERoundState ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERoundState;
static UEnum* ERoundState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERoundState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERoundState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SurvivalArena_ERoundState, (UObject*)Z_Construct_UPackage__Script_SurvivalArena(), TEXT("ERoundState"));
	}
	return Z_Registration_Info_UEnum_ERoundState.OuterSingleton;
}
template<> SURVIVALARENA_API UEnum* StaticEnum<ERoundState>()
{
	return ERoundState_StaticEnum();
}
struct Z_Construct_UEnum_SurvivalArena_ERoundState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Active.Comment", "// 3,2,1 before round starts\n" },
		{ "Active.Name", "ERoundState::Active" },
		{ "Active.ToolTip", "3,2,1 before round starts" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Possible states of the round system */" },
#endif
		{ "Countdown.Name", "ERoundState::Countdown" },
		{ "GameOver.Comment", "// all enemies defeated, short break\n" },
		{ "GameOver.Name", "ERoundState::GameOver" },
		{ "GameOver.ToolTip", "all enemies defeated, short break" },
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickGameMode.h" },
		{ "RoundComplete.Comment", "// enemies spawning and fighting\n" },
		{ "RoundComplete.Name", "ERoundState::RoundComplete" },
		{ "RoundComplete.ToolTip", "enemies spawning and fighting" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Possible states of the round system" },
#endif
		{ "Victory.Comment", "// all players dead\n" },
		{ "Victory.Name", "ERoundState::Victory" },
		{ "Victory.ToolTip", "all players dead" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERoundState::Countdown", (int64)ERoundState::Countdown },
		{ "ERoundState::Active", (int64)ERoundState::Active },
		{ "ERoundState::RoundComplete", (int64)ERoundState::RoundComplete },
		{ "ERoundState::GameOver", (int64)ERoundState::GameOver },
		{ "ERoundState::Victory", (int64)ERoundState::Victory },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SurvivalArena_ERoundState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SurvivalArena,
	nullptr,
	"ERoundState",
	"ERoundState",
	Z_Construct_UEnum_SurvivalArena_ERoundState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SurvivalArena_ERoundState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SurvivalArena_ERoundState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SurvivalArena_ERoundState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SurvivalArena_ERoundState()
{
	if (!Z_Registration_Info_UEnum_ERoundState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERoundState.InnerSingleton, Z_Construct_UEnum_SurvivalArena_ERoundState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERoundState.InnerSingleton;
}
// ********** End Enum ERoundState *****************************************************************

// ********** Begin Class ATwinStickGameMode *******************************************************
void ATwinStickGameMode::StaticRegisterNativesATwinStickGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATwinStickGameMode;
UClass* ATwinStickGameMode::GetPrivateStaticClass()
{
	using TClass = ATwinStickGameMode;
	if (!Z_Registration_Info_UClass_ATwinStickGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TwinStickGameMode"),
			Z_Registration_Info_UClass_ATwinStickGameMode.InnerSingleton,
			StaticRegisterNativesATwinStickGameMode,
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
	return Z_Registration_Info_UClass_ATwinStickGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ATwinStickGameMode_NoRegister()
{
	return ATwinStickGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATwinStickGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Game Mode for a Twin Stick Shooter game.\n *  Manages the score and UI\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Variant_TwinStick/TwinStickGameMode.h" },
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Game Mode for a Twin Stick Shooter game.\nManages the score and UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIWidgetClass_MetaData[] = {
		{ "Category", "Twin Stick" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of UI Widget to spawn */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of UI Widget to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboIncrementMax_MetaData[] = {
		{ "Category", "Twin Stick" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of combo hits to process before incrementing the combo multiplier */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of combo hits to process before incrementing the combo multiplier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboCap_MetaData[] = {
		{ "Category", "Twin Stick" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum allowed combo multiplier value */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum allowed combo multiplier value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboCooldown_MetaData[] = {
		{ "Category", "Twin Stick" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max time between kills before the combo multiplier resets */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max time between kills before the combo multiplier resets" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCCap_MetaData[] = {
		{ "Category", "Twin Stick" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max number of NPCs to allow in the level at once */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max number of NPCs to allow in the level at once" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundState_MetaData[] = {
		{ "Category", "Rounds" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current round state */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current round state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRound_MetaData[] = {
		{ "Category", "Rounds" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current round number (1-based) */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current round number (1-based)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalRounds_MetaData[] = {
		{ "Category", "Rounds" },
		{ "ClampMax", "20" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Total number of rounds */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total number of rounds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseEnemiesPerRound_MetaData[] = {
		{ "Category", "Rounds" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base number of enemies in round 1 */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base number of enemies in round 1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemiesPerRoundIncrease_MetaData[] = {
		{ "Category", "Rounds" },
		{ "ClampMax", "50" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Extra enemies added per round */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extra enemies added per round" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountdownSeconds_MetaData[] = {
		{ "Category", "Rounds" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Countdown duration in seconds */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Countdown duration in seconds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakDuration_MetaData[] = {
		{ "Category", "Rounds" },
		{ "ClampMax", "15" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Break duration between rounds (seconds) */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Break duration between rounds (seconds)" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMultiplayer_MetaData[] = {
		{ "Category", "Multiplayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable local multiplayer (2 players) */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable local multiplayer (2 players)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedCameraClass_MetaData[] = {
		{ "Category", "Multiplayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Shared camera class to spawn */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shared camera class to spawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_UIWidgetClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComboIncrementMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComboCap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ComboCooldown;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NPCCap;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RoundState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RoundState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentRound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalRounds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaseEnemiesPerRound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EnemiesPerRoundIncrease;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CountdownSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BreakDuration;
	static void NewProp_bEnableMultiplayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMultiplayer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SharedCameraClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATwinStickGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_UIWidgetClass = { "UIWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickGameMode, UIWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTwinStickUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIWidgetClass_MetaData), NewProp_UIWidgetClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_ComboIncrementMax = { "ComboIncrementMax", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickGameMode, ComboIncrementMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboIncrementMax_MetaData), NewProp_ComboIncrementMax_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_ComboCap = { "ComboCap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickGameMode, ComboCap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboCap_MetaData), NewProp_ComboCap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_ComboCooldown = { "ComboCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickGameMode, ComboCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboCooldown_MetaData), NewProp_ComboCooldown_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_NPCCap = { "NPCCap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickGameMode, NPCCap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCCap_MetaData), NewProp_NPCCap_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_RoundState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_RoundState = { "RoundState", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickGameMode, RoundState), Z_Construct_UEnum_SurvivalArena_ERoundState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundState_MetaData), NewProp_RoundState_MetaData) }; // 552900509
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_CurrentRound = { "CurrentRound", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickGameMode, CurrentRound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRound_MetaData), NewProp_CurrentRound_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_TotalRounds = { "TotalRounds", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickGameMode, TotalRounds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalRounds_MetaData), NewProp_TotalRounds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_BaseEnemiesPerRound = { "BaseEnemiesPerRound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickGameMode, BaseEnemiesPerRound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseEnemiesPerRound_MetaData), NewProp_BaseEnemiesPerRound_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_EnemiesPerRoundIncrease = { "EnemiesPerRoundIncrease", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickGameMode, EnemiesPerRoundIncrease), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemiesPerRoundIncrease_MetaData), NewProp_EnemiesPerRoundIncrease_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_CountdownSeconds = { "CountdownSeconds", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickGameMode, CountdownSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountdownSeconds_MetaData), NewProp_CountdownSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_BreakDuration = { "BreakDuration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickGameMode, BreakDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakDuration_MetaData), NewProp_BreakDuration_MetaData) };
void Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_bEnableMultiplayer_SetBit(void* Obj)
{
	((ATwinStickGameMode*)Obj)->bEnableMultiplayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_bEnableMultiplayer = { "bEnableMultiplayer", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATwinStickGameMode), &Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_bEnableMultiplayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMultiplayer_MetaData), NewProp_bEnableMultiplayer_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_SharedCameraClass = { "SharedCameraClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickGameMode, SharedCameraClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATwinStickCameraActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedCameraClass_MetaData), NewProp_SharedCameraClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATwinStickGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_UIWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_ComboIncrementMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_ComboCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_ComboCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_NPCCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_RoundState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_RoundState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_CurrentRound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_TotalRounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_BaseEnemiesPerRound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_EnemiesPerRoundIncrease,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_CountdownSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_BreakDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_bEnableMultiplayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickGameMode_Statics::NewProp_SharedCameraClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATwinStickGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATwinStickGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SurvivalArena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATwinStickGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATwinStickGameMode_Statics::ClassParams = {
	&ATwinStickGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATwinStickGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATwinStickGameMode_Statics::PropPointers),
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATwinStickGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATwinStickGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATwinStickGameMode()
{
	if (!Z_Registration_Info_UClass_ATwinStickGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATwinStickGameMode.OuterSingleton, Z_Construct_UClass_ATwinStickGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATwinStickGameMode.OuterSingleton;
}
ATwinStickGameMode::ATwinStickGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATwinStickGameMode);
ATwinStickGameMode::~ATwinStickGameMode() {}
// ********** End Class ATwinStickGameMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_TwinStickGameMode_h__Script_SurvivalArena_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERoundState_StaticEnum, TEXT("ERoundState"), &Z_Registration_Info_UEnum_ERoundState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 552900509U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATwinStickGameMode, ATwinStickGameMode::StaticClass, TEXT("ATwinStickGameMode"), &Z_Registration_Info_UClass_ATwinStickGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATwinStickGameMode), 2672971723U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_TwinStickGameMode_h__Script_SurvivalArena_1480251784(TEXT("/Script/SurvivalArena"),
	Z_CompiledInDeferFile_FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_TwinStickGameMode_h__Script_SurvivalArena_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_TwinStickGameMode_h__Script_SurvivalArena_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_TwinStickGameMode_h__Script_SurvivalArena_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_TwinStickGameMode_h__Script_SurvivalArena_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
