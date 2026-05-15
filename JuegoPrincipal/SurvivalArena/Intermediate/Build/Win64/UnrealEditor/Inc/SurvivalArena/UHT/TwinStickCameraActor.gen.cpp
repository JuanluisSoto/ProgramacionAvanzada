// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwinStickCameraActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTwinStickCameraActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
SURVIVALARENA_API UClass* Z_Construct_UClass_ATwinStickCameraActor();
SURVIVALARENA_API UClass* Z_Construct_UClass_ATwinStickCameraActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_SurvivalArena();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATwinStickCameraActor ****************************************************
void ATwinStickCameraActor::StaticRegisterNativesATwinStickCameraActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATwinStickCameraActor;
UClass* ATwinStickCameraActor::GetPrivateStaticClass()
{
	using TClass = ATwinStickCameraActor;
	if (!Z_Registration_Info_UClass_ATwinStickCameraActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TwinStickCameraActor"),
			Z_Registration_Info_UClass_ATwinStickCameraActor.InnerSingleton,
			StaticRegisterNativesATwinStickCameraActor,
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
	return Z_Registration_Info_UClass_ATwinStickCameraActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ATwinStickCameraActor_NoRegister()
{
	return ATwinStickCameraActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATwinStickCameraActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A shared camera that tracks all living players.\n *  Positions itself at the midpoint and adjusts zoom\n *  dynamically based on distance between players.\n */" },
#endif
		{ "IncludePath", "Variant_TwinStick/TwinStickCameraActor.h" },
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A shared camera that tracks all living players.\nPositions itself at the midpoint and adjusts zoom\ndynamically based on distance between players." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinArmLength_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "500" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Arm length when players are close together or single player */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Arm length when players are close together or single player" },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxArmLength_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMax", "8000" },
		{ "ClampMin", "1000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Arm length when players are at maximum distance */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Arm length when players are at maximum distance" },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayerDistance_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "500" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance between players at which max zoom is reached (cm) */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance between players at which max zoom is reached (cm)" },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMax", "20" },
		{ "ClampMin", "0.500000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Speed at which the camera interpolates to the target position */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed at which the camera interpolates to the target position" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMax", "20" },
		{ "ClampMin", "0.500000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Speed at which the zoom interpolates */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed at which the zoom interpolates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPitch_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMax", "0" },
		{ "ClampMin", "-90" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera pitch angle (negative = looking down) */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera pitch angle (negative = looking down)" },
#endif
		{ "Units", "deg" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMax", "120" },
		{ "ClampMin", "50" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Field of view */" },
#endif
		{ "ModuleRelativePath", "Variant_TwinStick/TwinStickCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Field of view" },
#endif
		{ "Units", "deg" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinArmLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxArmLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPlayerDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FollowSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATwinStickCameraActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATwinStickCameraActor_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCameraActor, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATwinStickCameraActor_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCameraActor, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCameraActor_Statics::NewProp_MinArmLength = { "MinArmLength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCameraActor, MinArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinArmLength_MetaData), NewProp_MinArmLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCameraActor_Statics::NewProp_MaxArmLength = { "MaxArmLength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCameraActor, MaxArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxArmLength_MetaData), NewProp_MaxArmLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCameraActor_Statics::NewProp_MaxPlayerDistance = { "MaxPlayerDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCameraActor, MaxPlayerDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlayerDistance_MetaData), NewProp_MaxPlayerDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCameraActor_Statics::NewProp_FollowSpeed = { "FollowSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCameraActor, FollowSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowSpeed_MetaData), NewProp_FollowSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCameraActor_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCameraActor, ZoomSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomSpeed_MetaData), NewProp_ZoomSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCameraActor_Statics::NewProp_CameraPitch = { "CameraPitch", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCameraActor, CameraPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPitch_MetaData), NewProp_CameraPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwinStickCameraActor_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinStickCameraActor, FieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATwinStickCameraActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCameraActor_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCameraActor_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCameraActor_Statics::NewProp_MinArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCameraActor_Statics::NewProp_MaxArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCameraActor_Statics::NewProp_MaxPlayerDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCameraActor_Statics::NewProp_FollowSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCameraActor_Statics::NewProp_ZoomSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCameraActor_Statics::NewProp_CameraPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwinStickCameraActor_Statics::NewProp_FieldOfView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATwinStickCameraActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATwinStickCameraActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SurvivalArena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATwinStickCameraActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATwinStickCameraActor_Statics::ClassParams = {
	&ATwinStickCameraActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATwinStickCameraActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATwinStickCameraActor_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATwinStickCameraActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATwinStickCameraActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATwinStickCameraActor()
{
	if (!Z_Registration_Info_UClass_ATwinStickCameraActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATwinStickCameraActor.OuterSingleton, Z_Construct_UClass_ATwinStickCameraActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATwinStickCameraActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATwinStickCameraActor);
ATwinStickCameraActor::~ATwinStickCameraActor() {}
// ********** End Class ATwinStickCameraActor ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_TwinStickCameraActor_h__Script_SurvivalArena_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATwinStickCameraActor, ATwinStickCameraActor::StaticClass, TEXT("ATwinStickCameraActor"), &Z_Registration_Info_UClass_ATwinStickCameraActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATwinStickCameraActor), 2689029693U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_TwinStickCameraActor_h__Script_SurvivalArena_2363547221(TEXT("/Script/SurvivalArena"),
	Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_TwinStickCameraActor_h__Script_SurvivalArena_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_TwinStickCameraActor_h__Script_SurvivalArena_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
