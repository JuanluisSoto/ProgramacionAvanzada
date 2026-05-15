// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalArenaGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSurvivalArenaGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SURVIVALARENA_API UClass* Z_Construct_UClass_ASurvivalArenaGameMode();
SURVIVALARENA_API UClass* Z_Construct_UClass_ASurvivalArenaGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SurvivalArena();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASurvivalArenaGameMode ***************************************************
void ASurvivalArenaGameMode::StaticRegisterNativesASurvivalArenaGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASurvivalArenaGameMode;
UClass* ASurvivalArenaGameMode::GetPrivateStaticClass()
{
	using TClass = ASurvivalArenaGameMode;
	if (!Z_Registration_Info_UClass_ASurvivalArenaGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SurvivalArenaGameMode"),
			Z_Registration_Info_UClass_ASurvivalArenaGameMode.InnerSingleton,
			StaticRegisterNativesASurvivalArenaGameMode,
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
	return Z_Registration_Info_UClass_ASurvivalArenaGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ASurvivalArenaGameMode_NoRegister()
{
	return ASurvivalArenaGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASurvivalArenaGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Game Mode for a top-down perspective game\n *  Sets the default gameplay framework classes\n *  Check the Blueprint derived class for the set values\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SurvivalArenaGameMode.h" },
		{ "ModuleRelativePath", "SurvivalArenaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Game Mode for a top-down perspective game\nSets the default gameplay framework classes\nCheck the Blueprint derived class for the set values" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalArenaGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASurvivalArenaGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SurvivalArena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalArenaGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalArenaGameMode_Statics::ClassParams = {
	&ASurvivalArenaGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalArenaGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASurvivalArenaGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASurvivalArenaGameMode()
{
	if (!Z_Registration_Info_UClass_ASurvivalArenaGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurvivalArenaGameMode.OuterSingleton, Z_Construct_UClass_ASurvivalArenaGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASurvivalArenaGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalArenaGameMode);
ASurvivalArenaGameMode::~ASurvivalArenaGameMode() {}
// ********** End Class ASurvivalArenaGameMode *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_SurvivalArenaGameMode_h__Script_SurvivalArena_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASurvivalArenaGameMode, ASurvivalArenaGameMode::StaticClass, TEXT("ASurvivalArenaGameMode"), &Z_Registration_Info_UClass_ASurvivalArenaGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvivalArenaGameMode), 1633184500U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_SurvivalArenaGameMode_h__Script_SurvivalArena_396288133(TEXT("/Script/SurvivalArena"),
	Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_SurvivalArenaGameMode_h__Script_SurvivalArena_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_SurvivalArenaGameMode_h__Script_SurvivalArena_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
