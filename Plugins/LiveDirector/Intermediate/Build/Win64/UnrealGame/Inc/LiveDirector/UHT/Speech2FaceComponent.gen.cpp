// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Speech2FaceComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSpeech2FaceComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_USpeech2FaceComponent();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_USpeech2FaceComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveDirector();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USpeech2FaceComponent Function AddAudioSpeech ****************************
struct Z_Construct_UFunction_USpeech2FaceComponent_AddAudioSpeech_Statics
{
	struct Speech2FaceComponent_eventAddAudioSpeech_Parms
	{
		const USoundWave* InAudioSample;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Virtual Production|Live Director" },
		{ "ModuleRelativePath", "Public/Speech2FaceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAudioSample_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddAudioSpeech constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAudioSample;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddAudioSpeech constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddAudioSpeech Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpeech2FaceComponent_AddAudioSpeech_Statics::NewProp_InAudioSample = { "InAudioSample", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Speech2FaceComponent_eventAddAudioSpeech_Parms, InAudioSample), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAudioSample_MetaData), NewProp_InAudioSample_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeech2FaceComponent_AddAudioSpeech_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeech2FaceComponent_AddAudioSpeech_Statics::NewProp_InAudioSample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeech2FaceComponent_AddAudioSpeech_Statics::PropPointers) < 2048);
// ********** End Function AddAudioSpeech Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeech2FaceComponent_AddAudioSpeech_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpeech2FaceComponent, nullptr, "AddAudioSpeech", 	Z_Construct_UFunction_USpeech2FaceComponent_AddAudioSpeech_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USpeech2FaceComponent_AddAudioSpeech_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USpeech2FaceComponent_AddAudioSpeech_Statics::Speech2FaceComponent_eventAddAudioSpeech_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeech2FaceComponent_AddAudioSpeech_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeech2FaceComponent_AddAudioSpeech_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USpeech2FaceComponent_AddAudioSpeech_Statics::Speech2FaceComponent_eventAddAudioSpeech_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeech2FaceComponent_AddAudioSpeech()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeech2FaceComponent_AddAudioSpeech_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeech2FaceComponent::execAddAudioSpeech)
{
	P_GET_OBJECT(USoundWave,Z_Param_InAudioSample);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAudioSpeech(Z_Param_InAudioSample);
	P_NATIVE_END;
}
// ********** End Class USpeech2FaceComponent Function AddAudioSpeech ******************************

// ********** Begin Class USpeech2FaceComponent ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USpeech2FaceComponent;
UClass* USpeech2FaceComponent::GetPrivateStaticClass()
{
	using TClass = USpeech2FaceComponent;
	if (!Z_Registration_Info_UClass_USpeech2FaceComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Speech2FaceComponent"),
			Z_Registration_Info_UClass_USpeech2FaceComponent.InnerSingleton,
			StaticRegisterNativesUSpeech2FaceComponent,
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
	return Z_Registration_Info_UClass_USpeech2FaceComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USpeech2FaceComponent_NoRegister()
{
	return USpeech2FaceComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpeech2FaceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Speech2FaceComponent.h" },
		{ "ModuleRelativePath", "Public/Speech2FaceComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USpeech2FaceComponent constinit property declarations ********************
// ********** End Class USpeech2FaceComponent constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddAudioSpeech"), .Pointer = &USpeech2FaceComponent::execAddAudioSpeech },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpeech2FaceComponent_AddAudioSpeech, "AddAudioSpeech" }, // 2980909202
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeech2FaceComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USpeech2FaceComponent_Statics
UObject* (*const Z_Construct_UClass_USpeech2FaceComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveDirector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpeech2FaceComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpeech2FaceComponent_Statics::ClassParams = {
	&USpeech2FaceComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpeech2FaceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USpeech2FaceComponent_Statics::Class_MetaDataParams)
};
void USpeech2FaceComponent::StaticRegisterNativesUSpeech2FaceComponent()
{
	UClass* Class = USpeech2FaceComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USpeech2FaceComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_USpeech2FaceComponent()
{
	if (!Z_Registration_Info_UClass_USpeech2FaceComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpeech2FaceComponent.OuterSingleton, Z_Construct_UClass_USpeech2FaceComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpeech2FaceComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USpeech2FaceComponent);
// ********** End Class USpeech2FaceComponent ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_Speech2FaceComponent_h__Script_LiveDirector_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpeech2FaceComponent, USpeech2FaceComponent::StaticClass, TEXT("USpeech2FaceComponent"), &Z_Registration_Info_UClass_USpeech2FaceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpeech2FaceComponent), 2401959743U) },
	};
}; // Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_Speech2FaceComponent_h__Script_LiveDirector_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_Speech2FaceComponent_h__Script_LiveDirector_1617097597{
	TEXT("/Script/LiveDirector"),
	Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_Speech2FaceComponent_h__Script_LiveDirector_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_Speech2FaceComponent_h__Script_LiveDirector_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
