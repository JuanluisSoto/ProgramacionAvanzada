// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwinStickWeaponPickup.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTwinStickWeaponPickup() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SURVIVALARENA_API UClass* Z_Construct_UClass_ATwinStickWeaponPickup();
SURVIVALARENA_API UClass* Z_Construct_UClass_ATwinStickWeaponPickup_NoRegister();
SURVIVALARENA_API UEnum* Z_Construct_UEnum_SurvivalArena_EWeaponType();
UPackage* Z_Construct_UPackage__Script_SurvivalArena();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EWeaponType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponType;
static UEnum* EWeaponType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SurvivalArena_EWeaponType, (UObject*)Z_Construct_UPackage__Script_SurvivalArena(), TEXT("EWeaponType"));
	}
	return Z_Registration_Info_UEnum_EWeaponType.OuterSingleton;
}
template<> SURVIVALARENA_API UEnum* StaticEnum<EWeaponType>()
{
	return EWeaponType_StaticEnum();
}
struct Z_Construct_UEnum_SurvivalArena_EWeaponType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Available weapon types */" },
#endif
		{ "Default.Name", "EWeaponType::Default" },
		{ "ModuleRelativePath", "Variant_TwinStick/Gameplay/TwinStickWeaponPickup.h" },
		{ "RapidFire.Comment", "// Spread of projectiles, limited shots\n" },
		{ "RapidFire.Name", "EWeaponType::RapidFire" },
		{ "RapidFire.ToolTip", "Spread of projectiles, limited shots" },
		{ "Shotgun.Comment", "// Single projectile, infinite ammo\n" },
		{ "Shotgun.Name", "EWeaponType::Shotgun" },
		{ "Shotgun.ToolTip", "Single projectile, infinite ammo" },
		{ "Sword.Comment", "// Fast single projectile, limited ammo\n" },
		{ "Sword.Name", "EWeaponType::Sword" },
		{ "Sword.ToolTip", "Fast single projectile, limited ammo" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Available weapon types" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponType::Default", (int64)EWeaponType::Default },
		{ "EWeaponType::Shotgun", (int64)EWeaponType::Shotgun },
		{ "EWeaponType::RapidFire", (int64)EWeaponType::RapidFire },
		{ "EWeaponType::Sword", (int64)EWeaponType::Sword },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SurvivalArena_EWeaponType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SurvivalArena,
	nullptr,
	"EWeaponType",
	"EWeaponType",
	Z_Construct_UEnum_SurvivalArena_EWeaponType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SurvivalArena_EWeaponType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SurvivalArena_EWeaponType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SurvivalArena_EWeaponType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SurvivalArena_EWeaponType()
{
	if (!Z_Registration_Info_UEnum_EWeaponType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponType.InnerSingleton, Z_Construct_UEnum_SurvivalArena_EWeaponType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponType.InnerSingleton;
}
// ********** End Enum EWeaponType *****************************************************************

// ********** Begin Class ATwinStickWeaponPickup ***************************************************
void ATwinStickWeaponPickup::StaticRegisterNativesATwinStickWeaponPickup()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATwinStickWeaponPickup;
UClass* ATwinStickWeaponPickup::GetPrivateStaticClass()
{
	using TClass = ATwinStickWeaponPickup;
	if (!Z_Registration_Info_UClass_ATwinStickWeaponPickup.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TwinStickWeaponPickup"),
			Z_Registration_Info_UClass_ATwinStickWeaponPickup.InnerSingleton,
			StaticRegisterNativesATwinStickWeaponPickup,
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
	return Z_Registration_Info_UClass_ATwinStickWeaponPickup.InnerSingleton;
}
UClass* Z_Construct_UClass_ATwinStickWeaponPickup_NoRegister()
{
	return ATwinStickWeaponPickup::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATwinStickWeaponPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A self-respawning weapon pickup for the survival arena.\n *  Place in the level. Grants a weapon with limited ammo on pickup.\n *  Respawns after a cooldown with a random weapon type.\n */" },
#endif
		{ "IncludePath", "Variant_TwinStick/Gameplay/TwinStickWeaponPickup.h" },
		{ "ModuleRelativePath", "Variant_TwinStick/Gameplay/TwinStickWeaponPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A self-respawning weapon pickup for the survival arena.\nPlace in the level. Grants a weapon with limited ammo on pickup.\nRespawns after a cooldown with a random weapon type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pickup collision sphere */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_TwinStick/Gameplay/TwinStickWeaponPickup.h" },
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
		{ "ModuleRelativePath", "Variant_TwinStick/Gameplay/TwinStickWeaponPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visual representation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current weapon type this pickup grants */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/Gameplay/TwinStickWeaponPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current weapon type this pickup grants" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizeOnRespawn_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to randomize weapon type on each respawn */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/Gameplay/TwinStickWeaponPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to randomize weapon type on each respawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ammo granted with the weapon */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/Gameplay/TwinStickWeaponPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ammo granted with the weapon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnCooldown_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMax", "60" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time before the pickup respawns (seconds) */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/Gameplay/TwinStickWeaponPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time before the pickup respawns (seconds)" },
#endif
		{ "Units", "s" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
	static void NewProp_bRandomizeOnRespawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizeOnRespawn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ammo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnCooldown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATwinStickWeaponPickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATwinStickWeaponPickup_Statics::NewProp_CollisionSphere = { "CollisionSphere", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickWeaponPickup, CollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSphere_MetaData), NewProp_CollisionSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATwinStickWeaponPickup_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickWeaponPickup, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATwinStickWeaponPickup_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATwinStickWeaponPickup_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickWeaponPickup, WeaponType), Z_Construct_UEnum_SurvivalArena_EWeaponType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponType_MetaData), NewProp_WeaponType_MetaData) }; // 356361224
void Z_Construct_UClass_ATwinStickWeaponPickup_Statics::NewProp_bRandomizeOnRespawn_SetBit(void* Obj)
{
	((ATwinStickWeaponPickup*)Obj)->bRandomizeOnRespawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATwinStickWeaponPickup_Statics::NewProp_bRandomizeOnRespawn = { "bRandomizeOnRespawn", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATwinStickWeaponPickup), &Z_Construct_UClass_ATwinStickWeaponPickup_Statics::NewProp_bRandomizeOnRespawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomizeOnRespawn_MetaData), NewProp_bRandomizeOnRespawn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATwinStickWeaponPickup_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickWeaponPickup, Ammo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ammo_MetaData), NewProp_Ammo_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickWeaponPickup_Statics::NewProp_RespawnCooldown = { "RespawnCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickWeaponPickup, RespawnCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnCooldown_MetaData), NewProp_RespawnCooldown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATwinStickWeaponPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickWeaponPickup_Statics::NewProp_CollisionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickWeaponPickup_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickWeaponPickup_Statics::NewProp_WeaponType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickWeaponPickup_Statics::NewProp_WeaponType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickWeaponPickup_Statics::NewProp_bRandomizeOnRespawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickWeaponPickup_Statics::NewProp_Ammo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickWeaponPickup_Statics::NewProp_RespawnCooldown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATwinStickWeaponPickup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATwinStickWeaponPickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SurvivalArena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATwinStickWeaponPickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATwinStickWeaponPickup_Statics::ClassParams = {
	&ATwinStickWeaponPickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATwinStickWeaponPickup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATwinStickWeaponPickup_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATwinStickWeaponPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_ATwinStickWeaponPickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATwinStickWeaponPickup()
{
	if (!Z_Registration_Info_UClass_ATwinStickWeaponPickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATwinStickWeaponPickup.OuterSingleton, Z_Construct_UClass_ATwinStickWeaponPickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATwinStickWeaponPickup.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATwinStickWeaponPickup);
ATwinStickWeaponPickup::~ATwinStickWeaponPickup() {}
// ********** End Class ATwinStickWeaponPickup *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickWeaponPickup_h__Script_SurvivalArena_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeaponType_StaticEnum, TEXT("EWeaponType"), &Z_Registration_Info_UEnum_EWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 356361224U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATwinStickWeaponPickup, ATwinStickWeaponPickup::StaticClass, TEXT("ATwinStickWeaponPickup"), &Z_Registration_Info_UClass_ATwinStickWeaponPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATwinStickWeaponPickup), 1017875796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickWeaponPickup_h__Script_SurvivalArena_3432174814(TEXT("/Script/SurvivalArena"),
	Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickWeaponPickup_h__Script_SurvivalArena_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickWeaponPickup_h__Script_SurvivalArena_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickWeaponPickup_h__Script_SurvivalArena_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickWeaponPickup_h__Script_SurvivalArena_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
