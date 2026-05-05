// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwinStickCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTwinStickCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
SURVIVALARENA_API UClass* Z_Construct_UClass_ATwinStickAoEAttack_NoRegister();
SURVIVALARENA_API UClass* Z_Construct_UClass_ATwinStickCharacter();
SURVIVALARENA_API UClass* Z_Construct_UClass_ATwinStickCharacter_NoRegister();
SURVIVALARENA_API UClass* Z_Construct_UClass_ATwinStickProjectile_NoRegister();
SURVIVALARENA_API UEnum* Z_Construct_UEnum_SurvivalArena_EWeaponType();
UPackage* Z_Construct_UPackage__Script_SurvivalArena();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATwinStickCharacter Function BP_Damaged **********************************
static FName NAME_ATwinStickCharacter_BP_Damaged = FName(TEXT("BP_Damaged"));
void ATwinStickCharacter::BP_Damaged()
{
	UFunction* Func = FindFunctionChecked(NAME_ATwinStickCharacter_BP_Damaged);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ATwinStickCharacter_BP_Damaged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allows Blueprint code to react to damage */" },
#endif
		{ "DisplayName", "Damaged" },
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows Blueprint code to react to damage" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATwinStickCharacter_BP_Damaged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATwinStickCharacter, nullptr, "BP_Damaged", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATwinStickCharacter_BP_Damaged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATwinStickCharacter_BP_Damaged_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATwinStickCharacter_BP_Damaged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATwinStickCharacter_BP_Damaged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ATwinStickCharacter Function BP_Damaged ************************************

// ********** Begin Class ATwinStickCharacter Function DoAim ***************************************
struct Z_Construct_UFunction_ATwinStickCharacter_DoAim_Statics
{
	struct TwinStickCharacter_eventDoAim_Parms
	{
		float AxisX;
		float AxisY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles aim inputs from both input actions and touch interface */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles aim inputs from both input actions and touch interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATwinStickCharacter_DoAim_Statics::NewProp_AxisX = { "AxisX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinStickCharacter_eventDoAim_Parms, AxisX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATwinStickCharacter_DoAim_Statics::NewProp_AxisY = { "AxisY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinStickCharacter_eventDoAim_Parms, AxisY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATwinStickCharacter_DoAim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATwinStickCharacter_DoAim_Statics::NewProp_AxisX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATwinStickCharacter_DoAim_Statics::NewProp_AxisY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATwinStickCharacter_DoAim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATwinStickCharacter_DoAim_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATwinStickCharacter, nullptr, "DoAim", Z_Construct_UFunction_ATwinStickCharacter_DoAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATwinStickCharacter_DoAim_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATwinStickCharacter_DoAim_Statics::TwinStickCharacter_eventDoAim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATwinStickCharacter_DoAim_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATwinStickCharacter_DoAim_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATwinStickCharacter_DoAim_Statics::TwinStickCharacter_eventDoAim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATwinStickCharacter_DoAim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATwinStickCharacter_DoAim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATwinStickCharacter::execDoAim)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AxisX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AxisY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoAim(Z_Param_AxisX,Z_Param_AxisY);
	P_NATIVE_END;
}
// ********** End Class ATwinStickCharacter Function DoAim *****************************************

// ********** Begin Class ATwinStickCharacter Function DoAoEAttack *********************************
struct Z_Construct_UFunction_ATwinStickCharacter_DoAoEAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles aoe attack inputs from both input actions and touch interface */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles aoe attack inputs from both input actions and touch interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATwinStickCharacter_DoAoEAttack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATwinStickCharacter, nullptr, "DoAoEAttack", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATwinStickCharacter_DoAoEAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATwinStickCharacter_DoAoEAttack_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATwinStickCharacter_DoAoEAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATwinStickCharacter_DoAoEAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATwinStickCharacter::execDoAoEAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoAoEAttack();
	P_NATIVE_END;
}
// ********** End Class ATwinStickCharacter Function DoAoEAttack ***********************************

// ********** Begin Class ATwinStickCharacter Function DoDash **************************************
struct Z_Construct_UFunction_ATwinStickCharacter_DoDash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles dash inputs from both input actions and touch interface */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles dash inputs from both input actions and touch interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATwinStickCharacter_DoDash_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATwinStickCharacter, nullptr, "DoDash", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATwinStickCharacter_DoDash_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATwinStickCharacter_DoDash_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATwinStickCharacter_DoDash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATwinStickCharacter_DoDash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATwinStickCharacter::execDoDash)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoDash();
	P_NATIVE_END;
}
// ********** End Class ATwinStickCharacter Function DoDash ****************************************

// ********** Begin Class ATwinStickCharacter Function DoMove **************************************
struct Z_Construct_UFunction_ATwinStickCharacter_DoMove_Statics
{
	struct TwinStickCharacter_eventDoMove_Parms
	{
		float AxisX;
		float AxisY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles move inputs from both input actions and touch interface */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles move inputs from both input actions and touch interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATwinStickCharacter_DoMove_Statics::NewProp_AxisX = { "AxisX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinStickCharacter_eventDoMove_Parms, AxisX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATwinStickCharacter_DoMove_Statics::NewProp_AxisY = { "AxisY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinStickCharacter_eventDoMove_Parms, AxisY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATwinStickCharacter_DoMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATwinStickCharacter_DoMove_Statics::NewProp_AxisX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATwinStickCharacter_DoMove_Statics::NewProp_AxisY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATwinStickCharacter_DoMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATwinStickCharacter_DoMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATwinStickCharacter, nullptr, "DoMove", Z_Construct_UFunction_ATwinStickCharacter_DoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATwinStickCharacter_DoMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATwinStickCharacter_DoMove_Statics::TwinStickCharacter_eventDoMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATwinStickCharacter_DoMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATwinStickCharacter_DoMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATwinStickCharacter_DoMove_Statics::TwinStickCharacter_eventDoMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATwinStickCharacter_DoMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATwinStickCharacter_DoMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATwinStickCharacter::execDoMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AxisX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AxisY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoMove(Z_Param_AxisX,Z_Param_AxisY);
	P_NATIVE_END;
}
// ********** End Class ATwinStickCharacter Function DoMove ****************************************

// ********** Begin Class ATwinStickCharacter Function DoShoot *************************************
struct Z_Construct_UFunction_ATwinStickCharacter_DoShoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles shoot inputs from both input actions and touch interface */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles shoot inputs from both input actions and touch interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATwinStickCharacter_DoShoot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATwinStickCharacter, nullptr, "DoShoot", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATwinStickCharacter_DoShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATwinStickCharacter_DoShoot_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATwinStickCharacter_DoShoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATwinStickCharacter_DoShoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATwinStickCharacter::execDoShoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoShoot();
	P_NATIVE_END;
}
// ********** End Class ATwinStickCharacter Function DoShoot ***************************************

// ********** Begin Class ATwinStickCharacter ******************************************************
void ATwinStickCharacter::StaticRegisterNativesATwinStickCharacter()
{
	UClass* Class = ATwinStickCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoAim", &ATwinStickCharacter::execDoAim },
		{ "DoAoEAttack", &ATwinStickCharacter::execDoAoEAttack },
		{ "DoDash", &ATwinStickCharacter::execDoDash },
		{ "DoMove", &ATwinStickCharacter::execDoMove },
		{ "DoShoot", &ATwinStickCharacter::execDoShoot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATwinStickCharacter;
UClass* ATwinStickCharacter::GetPrivateStaticClass()
{
	using TClass = ATwinStickCharacter;
	if (!Z_Registration_Info_UClass_ATwinStickCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TwinStickCharacter"),
			Z_Registration_Info_UClass_ATwinStickCharacter.InnerSingleton,
			StaticRegisterNativesATwinStickCharacter,
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
	return Z_Registration_Info_UClass_ATwinStickCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ATwinStickCharacter_NoRegister()
{
	return ATwinStickCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATwinStickCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A player-controlled character for a Twin Stick Shooter game\n *  Automatically rotates to face the aim direction.\n *  Fires projectiles and spawns AoE attacks.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Variant_TwinStick/TwinStickCharacter.h" },
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A player-controlled character for a Twin Stick Shooter game\nAutomatically rotates to face the aim direction.\nFires projectiles and spawns AoE attacks." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom spring arm */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom spring arm" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Player Camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player Camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Movement input action */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement input action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StickAimAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gamepad aim input action */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gamepad aim input action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseAimAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mouse aim input action */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mouse aim input action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dash input action */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dash input action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Shooting input action */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shooting input action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AoEAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AoE attack input action */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AoE attack input action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseAimTraceChannel_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Trace channel to use for mouse aim */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trace channel to use for mouse aim" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashImpulse_MetaData[] = {
		{ "Category", "Dash" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Impulse to apply to the character when dashing */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Impulse to apply to the character when dashing" },
#endif
		{ "Units", "cm/s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of projectile to spawn when shooting */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of projectile to spawn when shooting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileOffset_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance ahead of the character that the projectile will be spawned at */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance ahead of the character that the projectile will be spawned at" },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AoEAttackClass_MetaData[] = {
		{ "Category", "AoE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of AoE attack actor to spawn */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of AoE attack actor to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "AoE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of starting AoE attack items */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of starting AoE attack items" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackStrength_MetaData[] = {
		{ "Category", "Damage" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Knockback impulse to apply to the character when they're damaged */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Knockback impulse to apply to the character when they're damaged" },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum health */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current health */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvulnerabilityDuration_MetaData[] = {
		{ "Category", "Health" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Duration of invulnerability after respawn (seconds) */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Duration of invulnerability after respawn (seconds)" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInvulnerable_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the character is currently invulnerable */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the character is currently invulnerable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplier_MetaData[] = {
		{ "Category", "PowerUp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current damage multiplier (1.0 = normal) */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current damage multiplier (1.0 = normal)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AoECooldownTime_MetaData[] = {
		{ "Category", "AoE" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time to disallow AoE attacks after one is performed */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time to disallow AoE attacks after one is performed" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimRotationInterpSpeed_MetaData[] = {
		{ "Category", "Aim" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Speed to blend between our current rotation and the target aim rotation when stick aiming */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed to blend between our current rotation and the target aim rotation when stick aiming" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoFireDelay_MetaData[] = {
		{ "Category", "Aim" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time to wait between autofire attempts */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time to wait between autofire attempts" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Currently equipped weapon type */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Currently equipped weapon type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAmmo_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remaining ammo for current weapon (-1 = infinite) */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remaining ammo for current weapon (-1 = infinite)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunPellets_MetaData[] = {
		{ "Category", "Weapon|Shotgun" },
		{ "ClampMax", "9" },
		{ "ClampMin", "3" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of projectiles for shotgun spread */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of projectiles for shotgun spread" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunSpreadAngle_MetaData[] = {
		{ "Category", "Weapon|Shotgun" },
		{ "ClampMax", "90" },
		{ "ClampMin", "10" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Total spread angle for shotgun (degrees) */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total spread angle for shotgun (degrees)" },
#endif
		{ "Units", "deg" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RapidFireRateMultiplier_MetaData[] = {
		{ "Category", "Weapon|RapidFire" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.100000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fire rate multiplier for rapid fire (smaller = faster) */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fire rate multiplier for rapid fire (smaller = faster)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeRange_MetaData[] = {
		{ "Category", "Weapon|Sword" },
		{ "ClampMax", "500" },
		{ "ClampMin", "50" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Radius of the melee sphere overlap (cm) */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius of the melee sphere overlap (cm)" },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeForwardOffset_MetaData[] = {
		{ "Category", "Weapon|Sword" },
		{ "ClampMax", "300" },
		{ "ClampMin", "50" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance in front of the character for melee center (cm) */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance in front of the character for melee center (cm)" },
#endif
		{ "Units", "cm" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StickAimAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseAimAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DashAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AoEAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MouseAimTraceChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashImpulse;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileOffset;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AoEAttackClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Items;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InvulnerabilityDuration;
	static void NewProp_bIsInvulnerable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInvulnerable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AoECooldownTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimRotationInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoFireDelay;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentWeapon_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentWeapon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShotgunPellets;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotgunSpreadAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RapidFireRateMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeleeRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeleeForwardOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATwinStickCharacter_BP_Damaged, "BP_Damaged" }, // 2406979096
		{ &Z_Construct_UFunction_ATwinStickCharacter_DoAim, "DoAim" }, // 2255550407
		{ &Z_Construct_UFunction_ATwinStickCharacter_DoAoEAttack, "DoAoEAttack" }, // 3541758501
		{ &Z_Construct_UFunction_ATwinStickCharacter_DoDash, "DoDash" }, // 2186972799
		{ &Z_Construct_UFunction_ATwinStickCharacter_DoMove, "DoMove" }, // 1482276527
		{ &Z_Construct_UFunction_ATwinStickCharacter_DoShoot, "DoShoot" }, // 1640102484
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATwinStickCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_StickAimAction = { "StickAimAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, StickAimAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StickAimAction_MetaData), NewProp_StickAimAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_MouseAimAction = { "MouseAimAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, MouseAimAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseAimAction_MetaData), NewProp_MouseAimAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_DashAction = { "DashAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, DashAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashAction_MetaData), NewProp_DashAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_ShootAction = { "ShootAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, ShootAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootAction_MetaData), NewProp_ShootAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_AoEAction = { "AoEAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, AoEAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AoEAction_MetaData), NewProp_AoEAction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_MouseAimTraceChannel = { "MouseAimTraceChannel", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, MouseAimTraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseAimTraceChannel_MetaData), NewProp_MouseAimTraceChannel_MetaData) }; // 1673313466
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_DashImpulse = { "DashImpulse", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, DashImpulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashImpulse_MetaData), NewProp_DashImpulse_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATwinStickProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_ProjectileOffset = { "ProjectileOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, ProjectileOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileOffset_MetaData), NewProp_ProjectileOffset_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_AoEAttackClass = { "AoEAttackClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, AoEAttackClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATwinStickAoEAttack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AoEAttackClass_MetaData), NewProp_AoEAttackClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, Items), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_KnockbackStrength = { "KnockbackStrength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, KnockbackStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackStrength_MetaData), NewProp_KnockbackStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_InvulnerabilityDuration = { "InvulnerabilityDuration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, InvulnerabilityDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvulnerabilityDuration_MetaData), NewProp_InvulnerabilityDuration_MetaData) };
void Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_bIsInvulnerable_SetBit(void* Obj)
{
	((ATwinStickCharacter*)Obj)->bIsInvulnerable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_bIsInvulnerable = { "bIsInvulnerable", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATwinStickCharacter), &Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_bIsInvulnerable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInvulnerable_MetaData), NewProp_bIsInvulnerable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_DamageMultiplier = { "DamageMultiplier", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, DamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMultiplier_MetaData), NewProp_DamageMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_AoECooldownTime = { "AoECooldownTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, AoECooldownTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AoECooldownTime_MetaData), NewProp_AoECooldownTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_AimRotationInterpSpeed = { "AimRotationInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, AimRotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimRotationInterpSpeed_MetaData), NewProp_AimRotationInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_AutoFireDelay = { "AutoFireDelay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, AutoFireDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoFireDelay_MetaData), NewProp_AutoFireDelay_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_CurrentWeapon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, CurrentWeapon), Z_Construct_UEnum_SurvivalArena_EWeaponType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeapon_MetaData), NewProp_CurrentWeapon_MetaData) }; // 356361224
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_WeaponAmmo = { "WeaponAmmo", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, WeaponAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAmmo_MetaData), NewProp_WeaponAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_ShotgunPellets = { "ShotgunPellets", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, ShotgunPellets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotgunPellets_MetaData), NewProp_ShotgunPellets_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_ShotgunSpreadAngle = { "ShotgunSpreadAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, ShotgunSpreadAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotgunSpreadAngle_MetaData), NewProp_ShotgunSpreadAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_RapidFireRateMultiplier = { "RapidFireRateMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, RapidFireRateMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RapidFireRateMultiplier_MetaData), NewProp_RapidFireRateMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_MeleeRange = { "MeleeRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, MeleeRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeRange_MetaData), NewProp_MeleeRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_MeleeForwardOffset = { "MeleeForwardOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCharacter, MeleeForwardOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeForwardOffset_MetaData), NewProp_MeleeForwardOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATwinStickCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_StickAimAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_MouseAimAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_DashAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_ShootAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_AoEAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_MouseAimTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_DashImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_ProjectileOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_AoEAttackClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_KnockbackStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_InvulnerabilityDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_bIsInvulnerable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_DamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_AoECooldownTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_AimRotationInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_AutoFireDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_CurrentWeapon_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_CurrentWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_WeaponAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_ShotgunPellets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_ShotgunSpreadAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_RapidFireRateMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_MeleeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCharacter_Statics::NewProp_MeleeForwardOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATwinStickCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATwinStickCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SurvivalArena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATwinStickCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATwinStickCharacter_Statics::ClassParams = {
	&ATwinStickCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATwinStickCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATwinStickCharacter_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATwinStickCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATwinStickCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATwinStickCharacter()
{
	if (!Z_Registration_Info_UClass_ATwinStickCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATwinStickCharacter.OuterSingleton, Z_Construct_UClass_ATwinStickCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATwinStickCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATwinStickCharacter);
ATwinStickCharacter::~ATwinStickCharacter() {}
// ********** End Class ATwinStickCharacter ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_TwinStickCharacter_h__Script_SurvivalArena_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATwinStickCharacter, ATwinStickCharacter::StaticClass, TEXT("ATwinStickCharacter"), &Z_Registration_Info_UClass_ATwinStickCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATwinStickCharacter), 3892349986U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_TwinStickCharacter_h__Script_SurvivalArena_2595763006(TEXT("/Script/SurvivalArena"),
	Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_TwinStickCharacter_h__Script_SurvivalArena_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_TwinStickCharacter_h__Script_SurvivalArena_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
