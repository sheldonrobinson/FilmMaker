// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeThirdPersonCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_AThirdPersonCharacter();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_AThirdPersonCharacter_NoRegister();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_UCinematicMovementComponent_NoRegister();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_UGameplayTagsComponent_NoRegister();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_USpeech2FaceComponent_NoRegister();
MOTIONTRAJECTORY_API UClass* Z_Construct_UClass_UCharacterTrajectoryComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveDirector();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AThirdPersonCharacter ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AThirdPersonCharacter;
UClass* AThirdPersonCharacter::GetPrivateStaticClass()
{
	using TClass = AThirdPersonCharacter;
	if (!Z_Registration_Info_UClass_AThirdPersonCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ThirdPersonCharacter"),
			Z_Registration_Info_UClass_AThirdPersonCharacter.InnerSingleton,
			StaticRegisterNativesAThirdPersonCharacter,
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
	return Z_Registration_Info_UClass_AThirdPersonCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AThirdPersonCharacter_NoRegister()
{
	return AThirdPersonCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AThirdPersonCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A simple player-controllable third person character\n *  Implements a controllable orbiting camera\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ThirdPersonCharacter.h" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple player-controllable third person character\nImplements a controllable orbiting camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CinematicMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speech2Face_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterTrajectory_MetaData[] = {
		{ "Category", "Motion Matching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The component that predicts movement (Essential for Motion Matching)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The component that predicts movement (Essential for Motion Matching)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AThirdPersonCharacter constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CinematicMovement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Speech2Face;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameplayTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterTrajectory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AThirdPersonCharacter constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AThirdPersonCharacter_Statics

// ********** Begin Class AThirdPersonCharacter Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CinematicMovement = { "CinematicMovement", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonCharacter, CinematicMovement), Z_Construct_UClass_UCinematicMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CinematicMovement_MetaData), NewProp_CinematicMovement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_Speech2Face = { "Speech2Face", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonCharacter, Speech2Face), Z_Construct_UClass_USpeech2FaceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speech2Face_MetaData), NewProp_Speech2Face_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonCharacter, GameplayTags), Z_Construct_UClass_UGameplayTagsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CharacterTrajectory = { "CharacterTrajectory", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonCharacter, CharacterTrajectory), Z_Construct_UClass_UCharacterTrajectoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterTrajectory_MetaData), NewProp_CharacterTrajectory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CinematicMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_Speech2Face,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CharacterTrajectory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers) < 2048);
// ********** End Class AThirdPersonCharacter Property Definitions *********************************
UObject* (*const Z_Construct_UClass_AThirdPersonCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveDirector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonCharacter_Statics::ClassParams = {
	&AThirdPersonCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams)
};
void AThirdPersonCharacter::StaticRegisterNativesAThirdPersonCharacter()
{
}
UClass* Z_Construct_UClass_AThirdPersonCharacter()
{
	if (!Z_Registration_Info_UClass_AThirdPersonCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThirdPersonCharacter.OuterSingleton, Z_Construct_UClass_AThirdPersonCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThirdPersonCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AThirdPersonCharacter);
AThirdPersonCharacter::~AThirdPersonCharacter() {}
// ********** End Class AThirdPersonCharacter ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_ThirdPersonCharacter_h__Script_LiveDirector_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThirdPersonCharacter, AThirdPersonCharacter::StaticClass, TEXT("AThirdPersonCharacter"), &Z_Registration_Info_UClass_AThirdPersonCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdPersonCharacter), 2330787037U) },
	};
}; // Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_ThirdPersonCharacter_h__Script_LiveDirector_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_ThirdPersonCharacter_h__Script_LiveDirector_1587285580{
	TEXT("/Script/LiveDirector"),
	Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_ThirdPersonCharacter_h__Script_LiveDirector_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_ThirdPersonCharacter_h__Script_LiveDirector_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
