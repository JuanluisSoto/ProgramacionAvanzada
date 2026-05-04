// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwinStickPowerUp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTwinStickPowerUp() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SURVIVALARENA_API UClass* Z_Construct_UClass_ATwinStickPowerUp();
SURVIVALARENA_API UClass* Z_Construct_UClass_ATwinStickPowerUp_NoRegister();
SURVIVALARENA_API UEnum* Z_Construct_UEnum_SurvivalArena_EPowerUpType();
UPackage* Z_Construct_UPackage__Script_SurvivalArena();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPowerUpType **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPowerUpType;
static UEnum* EPowerUpType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPowerUpType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPowerUpType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SurvivalArena_EPowerUpType, (UObject*)Z_Construct_UPackage__Script_SurvivalArena(), TEXT("EPowerUpType"));
	}
	return Z_Registration_Info_UEnum_EPowerUpType.OuterSingleton;
}
template<> SURVIVALARENA_API UEnum* StaticEnum<EPowerUpType>()
{
	return EPowerUpType_StaticEnum();
}
struct Z_Construct_UEnum_SurvivalArena_EPowerUpType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Types of power-ups available */" },
#endif
		{ "DamageBoost.Name", "EPowerUpType::DamageBoost" },
		{ "ModuleRelativePath", "Variant_TwinStick/Gameplay/TwinStickPowerUp.h" },
		{ "SpeedBoost.Name", "EPowerUpType::SpeedBoost" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Types of power-ups available" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPowerUpType::SpeedBoost", (int64)EPowerUpType::SpeedBoost },
		{ "EPowerUpType::DamageBoost", (int64)EPowerUpType::DamageBoost },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SurvivalArena_EPowerUpType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SurvivalArena,
	nullptr,
	"EPowerUpType",
	"EPowerUpType",
	Z_Construct_UEnum_SurvivalArena_EPowerUpType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SurvivalArena_EPowerUpType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SurvivalArena_EPowerUpType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SurvivalArena_EPowerUpType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SurvivalArena_EPowerUpType()
{
	if (!Z_Registration_Info_UEnum_EPowerUpType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPowerUpType.InnerSingleton, Z_Construct_UEnum_SurvivalArena_EPowerUpType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPowerUpType.InnerSingleton;
}
// ********** End Enum EPowerUpType ****************************************************************

// ********** Begin Class ATwinStickPowerUp ********************************************************
void ATwinStickPowerUp::StaticRegisterNativesATwinStickPowerUp()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATwinStickPowerUp;
UClass* ATwinStickPowerUp::GetPrivateStaticClass()
{
	using TClass = ATwinStickPowerUp;
	if (!Z_Registration_Info_UClass_ATwinStickPowerUp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TwinStickPowerUp"),
			Z_Registration_Info_UClass_ATwinStickPowerUp.InnerSingleton,
			StaticRegisterNativesATwinStickPowerUp,
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
	return Z_Registration_Info_UClass_ATwinStickPowerUp.InnerSingleton;
}
UClass* Z_Construct_UClass_ATwinStickPowerUp_NoRegister()
{
	return ATwinStickPowerUp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATwinStickPowerUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A self-respawning power-up for the survival arena.\n *  Place in the level. When picked up, hides and respawns after a cooldown.\n */" },
#endif
		{ "IncludePath", "Variant_TwinStick/Gameplay/TwinStickPowerUp.h" },
		{ "ModuleRelativePath", "Variant_TwinStick/Gameplay/TwinStickPowerUp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A self-respawning power-up for the survival arena.\nPlace in the level. When picked up, hides and respawns after a cooldown." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pickup collision sphere */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_TwinStick/Gameplay/TwinStickPowerUp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pickup collision sphere" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Visual representation */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_TwinStick/Gameplay/TwinStickPowerUp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visual representation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PowerUpType_MetaData[] = {
		{ "Category", "PowerUp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of power-up effect */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/Gameplay/TwinStickPowerUp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of power-up effect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectDuration_MetaData[] = {
		{ "Category", "PowerUp" },
		{ "ClampMax", "30" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Duration of the effect on the player (seconds) */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/Gameplay/TwinStickPowerUp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Duration of the effect on the player (seconds)" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[] = {
		{ "Category", "PowerUp" },
		{ "ClampMax", "5.000000" },
		{ "ClampMin", "1.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Multiplier applied by this power-up (e.g., 1.5 = 50% boost) */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/Gameplay/TwinStickPowerUp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplier applied by this power-up (e.g., 1.5 = 50% boost)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnCooldown_MetaData[] = {
		{ "Category", "PowerUp" },
		{ "ClampMax", "60" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time before the power-up respawns after being picked up (seconds) */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/Gameplay/TwinStickPowerUp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time before the power-up respawns after being picked up (seconds)" },
#endif
		{ "Units", "s" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PowerUpType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PowerUpType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnCooldown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATwinStickPowerUp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATwinStickPowerUp_Statics::NewProp_CollisionSphere = { "CollisionSphere", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickPowerUp, CollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSphere_MetaData), NewProp_CollisionSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATwinStickPowerUp_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickPowerUp, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATwinStickPowerUp_Statics::NewProp_PowerUpType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATwinStickPowerUp_Statics::NewProp_PowerUpType = { "PowerUpType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickPowerUp, PowerUpType), Z_Construct_UEnum_SurvivalArena_EPowerUpType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PowerUpType_MetaData), NewProp_PowerUpType_MetaData) }; // 4290542437
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickPowerUp_Statics::NewProp_EffectDuration = { "EffectDuration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickPowerUp, EffectDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectDuration_MetaData), NewProp_EffectDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickPowerUp_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickPowerUp, Multiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Multiplier_MetaData), NewProp_Multiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickPowerUp_Statics::NewProp_RespawnCooldown = { "RespawnCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickPowerUp, RespawnCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnCooldown_MetaData), NewProp_RespawnCooldown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATwinStickPowerUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickPowerUp_Statics::NewProp_CollisionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickPowerUp_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickPowerUp_Statics::NewProp_PowerUpType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickPowerUp_Statics::NewProp_PowerUpType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickPowerUp_Statics::NewProp_EffectDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickPowerUp_Statics::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickPowerUp_Statics::NewProp_RespawnCooldown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATwinStickPowerUp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATwinStickPowerUp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SurvivalArena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATwinStickPowerUp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATwinStickPowerUp_Statics::ClassParams = {
	&ATwinStickPowerUp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATwinStickPowerUp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATwinStickPowerUp_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATwinStickPowerUp_Statics::Class_MetaDataParams), Z_Construct_UClass_ATwinStickPowerUp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATwinStickPowerUp()
{
	if (!Z_Registration_Info_UClass_ATwinStickPowerUp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATwinStickPowerUp.OuterSingleton, Z_Construct_UClass_ATwinStickPowerUp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATwinStickPowerUp.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATwinStickPowerUp);
ATwinStickPowerUp::~ATwinStickPowerUp() {}
// ********** End Class ATwinStickPowerUp **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickPowerUp_h__Script_SurvivalArena_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPowerUpType_StaticEnum, TEXT("EPowerUpType"), &Z_Registration_Info_UEnum_EPowerUpType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4290542437U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATwinStickPowerUp, ATwinStickPowerUp::StaticClass, TEXT("ATwinStickPowerUp"), &Z_Registration_Info_UClass_ATwinStickPowerUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATwinStickPowerUp), 1017611157U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickPowerUp_h__Script_SurvivalArena_623284340(TEXT("/Script/SurvivalArena"),
	Z_CompiledInDeferFile_FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickPowerUp_h__Script_SurvivalArena_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickPowerUp_h__Script_SurvivalArena_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickPowerUp_h__Script_SurvivalArena_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickPowerUp_h__Script_SurvivalArena_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
