// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Speech2FaceComponent.h"

#ifdef LIVEDIRECTOR_Speech2FaceComponent_generated_h
#error "Speech2FaceComponent.generated.h already included, missing '#pragma once' in Speech2FaceComponent.h"
#endif
#define LIVEDIRECTOR_Speech2FaceComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;

// ********** Begin Class USpeech2FaceComponent ****************************************************
#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_Speech2FaceComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddAudioSpeech);


struct Z_Construct_UClass_USpeech2FaceComponent_Statics;
LIVEDIRECTOR_API UClass* Z_Construct_UClass_USpeech2FaceComponent_NoRegister();

#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_Speech2FaceComponent_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpeech2FaceComponent(); \
	friend struct ::Z_Construct_UClass_USpeech2FaceComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVEDIRECTOR_API UClass* ::Z_Construct_UClass_USpeech2FaceComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USpeech2FaceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveDirector"), Z_Construct_UClass_USpeech2FaceComponent_NoRegister) \
	DECLARE_SERIALIZER(USpeech2FaceComponent)


#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_Speech2FaceComponent_h_51_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpeech2FaceComponent(USpeech2FaceComponent&&) = delete; \
	USpeech2FaceComponent(const USpeech2FaceComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpeech2FaceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpeech2FaceComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpeech2FaceComponent)


#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_Speech2FaceComponent_h_48_PROLOG
#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_Speech2FaceComponent_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_Speech2FaceComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_Speech2FaceComponent_h_51_INCLASS_NO_PURE_DECLS \
	FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_Speech2FaceComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpeech2FaceComponent;

// ********** End Class USpeech2FaceComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_Speech2FaceComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
