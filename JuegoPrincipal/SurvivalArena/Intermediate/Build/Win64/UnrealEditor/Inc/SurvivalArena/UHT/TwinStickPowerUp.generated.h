// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_TwinStick/Gameplay/TwinStickPowerUp.h"

#ifdef SURVIVALARENA_TwinStickPowerUp_generated_h
#error "TwinStickPowerUp.generated.h already included, missing '#pragma once' in TwinStickPowerUp.h"
#endif
#define SURVIVALARENA_TwinStickPowerUp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATwinStickPowerUp ********************************************************
SURVIVALARENA_API UClass* Z_Construct_UClass_ATwinStickPowerUp_NoRegister();

#define FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickPowerUp_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATwinStickPowerUp(); \
	friend struct Z_Construct_UClass_ATwinStickPowerUp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SURVIVALARENA_API UClass* Z_Construct_UClass_ATwinStickPowerUp_NoRegister(); \
public: \
	DECLARE_CLASS2(ATwinStickPowerUp, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalArena"), Z_Construct_UClass_ATwinStickPowerUp_NoRegister) \
	DECLARE_SERIALIZER(ATwinStickPowerUp)


#define FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickPowerUp_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATwinStickPowerUp(ATwinStickPowerUp&&) = delete; \
	ATwinStickPowerUp(const ATwinStickPowerUp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATwinStickPowerUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATwinStickPowerUp); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ATwinStickPowerUp) \
	NO_API virtual ~ATwinStickPowerUp();


#define FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickPowerUp_h_24_PROLOG
#define FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickPowerUp_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickPowerUp_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickPowerUp_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATwinStickPowerUp;

// ********** End Class ATwinStickPowerUp **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_marta_OneDrive_Escritorio_Juego_unreal_unreal_SurvivalArena_Source_SurvivalArena_Variant_TwinStick_Gameplay_TwinStickPowerUp_h

// ********** Begin Enum EPowerUpType **************************************************************
#define FOREACH_ENUM_EPOWERUPTYPE(op) \
	op(EPowerUpType::SpeedBoost) \
	op(EPowerUpType::DamageBoost) 

enum class EPowerUpType : uint8;
template<> struct TIsUEnumClass<EPowerUpType> { enum { Value = true }; };
template<> SURVIVALARENA_API UEnum* StaticEnum<EPowerUpType>();
// ********** End Enum EPowerUpType ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
