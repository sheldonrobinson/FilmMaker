// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CinematicMovementComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCinematicMovementComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_UCinematicMovementComponent();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_UCinematicMovementComponent_NoRegister();
MOTIONTRAJECTORY_API UClass* Z_Construct_UClass_UCharacterTrajectoryComponent_NoRegister();
POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchDatabase_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveDirector();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCinematicMovementComponent Function ApplyIdlePose ***********************
struct Z_Construct_UFunction_UCinematicMovementComponent_ApplyIdlePose_Statics
{
	struct CinematicMovementComponent_eventApplyIdlePose_Parms
	{
		FString PoseStyle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/CinematicMovementComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyIdlePose constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PoseStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyIdlePose constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyIdlePose Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCinematicMovementComponent_ApplyIdlePose_Statics::NewProp_PoseStyle = { "PoseStyle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicMovementComponent_eventApplyIdlePose_Parms, PoseStyle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicMovementComponent_ApplyIdlePose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicMovementComponent_ApplyIdlePose_Statics::NewProp_PoseStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_ApplyIdlePose_Statics::PropPointers) < 2048);
// ********** End Function ApplyIdlePose Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicMovementComponent_ApplyIdlePose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCinematicMovementComponent, nullptr, "ApplyIdlePose", 	Z_Construct_UFunction_UCinematicMovementComponent_ApplyIdlePose_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_ApplyIdlePose_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCinematicMovementComponent_ApplyIdlePose_Statics::CinematicMovementComponent_eventApplyIdlePose_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_ApplyIdlePose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCinematicMovementComponent_ApplyIdlePose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCinematicMovementComponent_ApplyIdlePose_Statics::CinematicMovementComponent_eventApplyIdlePose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCinematicMovementComponent_ApplyIdlePose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCinematicMovementComponent_ApplyIdlePose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCinematicMovementComponent::execApplyIdlePose)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PoseStyle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyIdlePose(Z_Param_Out_PoseStyle);
	P_NATIVE_END;
}
// ********** End Class UCinematicMovementComponent Function ApplyIdlePose *************************

// ********** Begin Class UCinematicMovementComponent **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCinematicMovementComponent;
UClass* UCinematicMovementComponent::GetPrivateStaticClass()
{
	using TClass = UCinematicMovementComponent;
	if (!Z_Registration_Info_UClass_UCinematicMovementComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CinematicMovementComponent"),
			Z_Registration_Info_UClass_UCinematicMovementComponent.InnerSingleton,
			StaticRegisterNativesUCinematicMovementComponent,
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
	return Z_Registration_Info_UClass_UCinematicMovementComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCinematicMovementComponent_NoRegister()
{
	return UCinematicMovementComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCinematicMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Adds a patrol component with Sequencer integration for MoveTo, Talking, and Gestures.\n*/" },
#endif
		{ "IncludePath", "CinematicMovementComponent.h" },
		{ "ModuleRelativePath", "Public/CinematicMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a patrol component with Sequencer integration for MoveTo, Talking, and Gestures." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationsDB_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PoseSearch Databases\n" },
#endif
		{ "ModuleRelativePath", "Public/CinematicMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PoseSearch Databases" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrajectoryComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The trajectory component must be added to the actor alongside this component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CinematicMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The trajectory component must be added to the actor alongside this component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleThreshold_MetaData[] = {
		{ "Category", "Motion Matching|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Speed threshold to switch from Locomotion back to Idle */" },
#endif
		{ "ModuleRelativePath", "Public/CinematicMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed threshold to switch from Locomotion back to Idle" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UCinematicMovementComponent constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationsDB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrajectoryComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IdleThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCinematicMovementComponent constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplyIdlePose"), .Pointer = &UCinematicMovementComponent::execApplyIdlePose },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCinematicMovementComponent_ApplyIdlePose, "ApplyIdlePose" }, // 3919067125
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCinematicMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCinematicMovementComponent_Statics

// ********** Begin Class UCinematicMovementComponent Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCinematicMovementComponent_Statics::NewProp_AnimationsDB = { "AnimationsDB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCinematicMovementComponent, AnimationsDB), Z_Construct_UClass_UPoseSearchDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationsDB_MetaData), NewProp_AnimationsDB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCinematicMovementComponent_Statics::NewProp_TrajectoryComponent = { "TrajectoryComponent", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCinematicMovementComponent, TrajectoryComponent), Z_Construct_UClass_UCharacterTrajectoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrajectoryComponent_MetaData), NewProp_TrajectoryComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCinematicMovementComponent_Statics::NewProp_IdleThreshold = { "IdleThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCinematicMovementComponent, IdleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleThreshold_MetaData), NewProp_IdleThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCinematicMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinematicMovementComponent_Statics::NewProp_AnimationsDB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinematicMovementComponent_Statics::NewProp_TrajectoryComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinematicMovementComponent_Statics::NewProp_IdleThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicMovementComponent_Statics::PropPointers) < 2048);
// ********** End Class UCinematicMovementComponent Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UCinematicMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveDirector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCinematicMovementComponent_Statics::ClassParams = {
	&UCinematicMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCinematicMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCinematicMovementComponent_Statics::Class_MetaDataParams)
};
void UCinematicMovementComponent::StaticRegisterNativesUCinematicMovementComponent()
{
	UClass* Class = UCinematicMovementComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UCinematicMovementComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UCinematicMovementComponent()
{
	if (!Z_Registration_Info_UClass_UCinematicMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCinematicMovementComponent.OuterSingleton, Z_Construct_UClass_UCinematicMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCinematicMovementComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCinematicMovementComponent);
UCinematicMovementComponent::~UCinematicMovementComponent() {}
// ********** End Class UCinematicMovementComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_CinematicMovementComponent_h__Script_LiveDirector_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCinematicMovementComponent, UCinematicMovementComponent::StaticClass, TEXT("UCinematicMovementComponent"), &Z_Registration_Info_UClass_UCinematicMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCinematicMovementComponent), 4255262427U) },
	};
}; // Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_CinematicMovementComponent_h__Script_LiveDirector_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_CinematicMovementComponent_h__Script_LiveDirector_2105019846{
	TEXT("/Script/LiveDirector"),
	Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_CinematicMovementComponent_h__Script_LiveDirector_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_CinematicMovementComponent_h__Script_LiveDirector_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
