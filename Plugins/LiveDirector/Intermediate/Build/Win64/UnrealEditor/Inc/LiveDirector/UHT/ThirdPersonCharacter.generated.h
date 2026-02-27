// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThirdPersonCharacter.h"

#ifdef LIVEDIRECTOR_ThirdPersonCharacter_generated_h
#error "ThirdPersonCharacter.generated.h already included, missing '#pragma once' in ThirdPersonCharacter.h"
#endif
#define LIVEDIRECTOR_ThirdPersonCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AThirdPersonCharacter ****************************************************
struct Z_Construct_UClass_AThirdPersonCharacter_Statics;
LIVEDIRECTOR_API UClass* Z_Construct_UClass_AThirdPersonCharacter_NoRegister();

#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_ThirdPersonCharacter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThirdPersonCharacter(); \
	friend struct ::Z_Construct_UClass_AThirdPersonCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVEDIRECTOR_API UClass* ::Z_Construct_UClass_AThirdPersonCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AThirdPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveDirector"), Z_Construct_UClass_AThirdPersonCharacter_NoRegister) \
	DECLARE_SERIALIZER(AThirdPersonCharacter)


#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_ThirdPersonCharacter_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AThirdPersonCharacter(AThirdPersonCharacter&&) = delete; \
	AThirdPersonCharacter(const AThirdPersonCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThirdPersonCharacter) \
	NO_API virtual ~AThirdPersonCharacter();


#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_ThirdPersonCharacter_h_22_PROLOG
#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_ThirdPersonCharacter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_ThirdPersonCharacter_h_25_INCLASS_NO_PURE_DECLS \
	FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_ThirdPersonCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AThirdPersonCharacter;

// ********** End Class AThirdPersonCharacter ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_ThirdPersonCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
