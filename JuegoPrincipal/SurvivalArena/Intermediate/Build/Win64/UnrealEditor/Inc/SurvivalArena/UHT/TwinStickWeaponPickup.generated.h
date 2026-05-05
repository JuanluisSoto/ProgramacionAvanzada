// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_TwinStick/Gameplay/TwinStickWeaponPickup.h"

#ifdef SURVIVALARENA_TwinStickWeaponPickup_generated_h
#error "TwinStickWeaponPickup.generated.h already included, missing '#pragma once' in TwinStickWeaponPickup.h"
#endif
#define SURVIVALARENA_TwinStickWeaponPickup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATwinStickWeaponPickup ***************************************************
SURVIVALARENA_API UClass* Z_Construct_UClass_ATwinStickWeaponPickup_NoRegister();

#define FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickWeaponPickup_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATwinStickWeaponPickup(); \
	friend struct Z_Construct_UClass_ATwinStickWeaponPickup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SURVIVALARENA_API UClass* Z_Construct_UClass_ATwinStickWeaponPickup_NoRegister(); \
public: \
	DECLARE_CLASS2(ATwinStickWeaponPickup, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalArena"), Z_Construct_UClass_ATwinStickWeaponPickup_NoRegister) \
	DECLARE_SERIALIZER(ATwinStickWeaponPickup)


#define FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickWeaponPickup_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATwinStickWeaponPickup(ATwinStickWeaponPickup&&) = delete; \
	ATwinStickWeaponPickup(const ATwinStickWeaponPickup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATwinStickWeaponPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATwinStickWeaponPickup); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ATwinStickWeaponPickup) \
	NO_API virtual ~ATwinStickWeaponPickup();


#define FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickWeaponPickup_h_27_PROLOG
#define FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickWeaponPickup_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickWeaponPickup_h_30_INCLASS_NO_PURE_DECLS \
	FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickWeaponPickup_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATwinStickWeaponPickup;

// ********** End Class ATwinStickWeaponPickup *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Juan_Luis_Desktop_ProgramacionAvanzada_JuegoPrincipal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickWeaponPickup_h

// ********** Begin Enum EWeaponType ***************************************************************
#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::Default) \
	op(EWeaponType::Shotgun) \
	op(EWeaponType::RapidFire) \
	op(EWeaponType::Sword) 

enum class EWeaponType : uint8;
template<> struct TIsUEnumClass<EWeaponType> { enum { Value = true }; };
template<> SURVIVALARENA_API UEnum* StaticEnum<EWeaponType>();
// ********** End Enum EWeaponType *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
