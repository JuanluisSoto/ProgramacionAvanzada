// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalArenaCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSurvivalArenaCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
SURVIVALARENA_API UClass* Z_Construct_UClass_ASurvivalArenaCharacter();
SURVIVALARENA_API UClass* Z_Construct_UClass_ASurvivalArenaCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_SurvivalArena();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASurvivalArenaCharacter **************************************************
void ASurvivalArenaCharacter::StaticRegisterNativesASurvivalArenaCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASurvivalArenaCharacter;
UClass* ASurvivalArenaCharacter::GetPrivateStaticClass()
{
	using TClass = ASurvivalArenaCharacter;
	if (!Z_Registration_Info_UClass_ASurvivalArenaCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SurvivalArenaCharacter"),
			Z_Registration_Info_UClass_ASurvivalArenaCharacter.InnerSingleton,
			StaticRegisterNativesASurvivalArenaCharacter,
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
	return Z_Registration_Info_UClass_ASurvivalArenaCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ASurvivalArenaCharacter_NoRegister()
{
	return ASurvivalArenaCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASurvivalArenaCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A controllable top-down perspective character\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SurvivalArenaCharacter.h" },
		{ "ModuleRelativePath", "SurvivalArenaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A controllable top-down perspective character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SurvivalArenaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SurvivalArenaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalArenaCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalArenaCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivalArenaCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalArenaCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivalArenaCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASurvivalArenaCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalArenaCharacter_Statics::NewProp_TopDownCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalArenaCharacter_Statics::NewProp_CameraBoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalArenaCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASurvivalArenaCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SurvivalArena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalArenaCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalArenaCharacter_Statics::ClassParams = {
	&ASurvivalArenaCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASurvivalArenaCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalArenaCharacter_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalArenaCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASurvivalArenaCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASurvivalArenaCharacter()
{
	if (!Z_Registration_Info_UClass_ASurvivalArenaCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurvivalArenaCharacter.OuterSingleton, Z_Construct_UClass_ASurvivalArenaCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASurvivalArenaCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalArenaCharacter);
ASurvivalArenaCharacter::~ASurvivalArenaCharacter() {}
// ********** End Class ASurvivalArenaCharacter ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_SurvivalArenaCharacter_h__Script_SurvivalArena_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASurvivalArenaCharacter, ASurvivalArenaCharacter::StaticClass, TEXT("ASurvivalArenaCharacter"), &Z_Registration_Info_UClass_ASurvivalArenaCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvivalArenaCharacter), 118906536U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_SurvivalArenaCharacter_h__Script_SurvivalArena_805326207(TEXT("/Script/SurvivalArena"),
	Z_CompiledInDeferFile_FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_SurvivalArenaCharacter_h__Script_SurvivalArena_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_SurvivalArenaCharacter_h__Script_SurvivalArena_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
