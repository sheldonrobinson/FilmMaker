// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRQActionExecutor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMRQActionExecutor() {}

// ********** Begin Cross Module References ********************************************************
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorBase();
MRQACTIONBRIDGE_API UClass* Z_Construct_UClass_UMRQActionExecutor();
MRQACTIONBRIDGE_API UClass* Z_Construct_UClass_UMRQActionExecutor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MRQActionBridge();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMRQActionExecutor *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMRQActionExecutor;
UClass* UMRQActionExecutor::GetPrivateStaticClass()
{
	using TClass = UMRQActionExecutor;
	if (!Z_Registration_Info_UClass_UMRQActionExecutor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MRQActionExecutor"),
			Z_Registration_Info_UClass_UMRQActionExecutor.InnerSingleton,
			StaticRegisterNativesUMRQActionExecutor,
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
	return Z_Registration_Info_UClass_UMRQActionExecutor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMRQActionExecutor_NoRegister()
{
	return UMRQActionExecutor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMRQActionExecutor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MRQActionExecutor.h" },
		{ "ModuleRelativePath", "Public/MRQActionExecutor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMRQActionExecutor constinit property declarations ***********************
// ********** End Class UMRQActionExecutor constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRQActionExecutor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMRQActionExecutor_Statics
UObject* (*const Z_Construct_UClass_UMRQActionExecutor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMoviePipelineExecutorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MRQActionBridge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRQActionExecutor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRQActionExecutor_Statics::ClassParams = {
	&UMRQActionExecutor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRQActionExecutor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMRQActionExecutor_Statics::Class_MetaDataParams)
};
void UMRQActionExecutor::StaticRegisterNativesUMRQActionExecutor()
{
}
UClass* Z_Construct_UClass_UMRQActionExecutor()
{
	if (!Z_Registration_Info_UClass_UMRQActionExecutor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRQActionExecutor.OuterSingleton, Z_Construct_UClass_UMRQActionExecutor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRQActionExecutor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMRQActionExecutor);
// ********** End Class UMRQActionExecutor *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_MRQActionBridge_Public_MRQActionExecutor_h__Script_MRQActionBridge_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMRQActionExecutor, UMRQActionExecutor::StaticClass, TEXT("UMRQActionExecutor"), &Z_Registration_Info_UClass_UMRQActionExecutor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRQActionExecutor), 85760226U) },
	};
}; // Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_MRQActionBridge_Public_MRQActionExecutor_h__Script_MRQActionBridge_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_MRQActionBridge_Public_MRQActionExecutor_h__Script_MRQActionBridge_617189839{
	TEXT("/Script/MRQActionBridge"),
	Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_MRQActionBridge_Public_MRQActionExecutor_h__Script_MRQActionBridge_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_MRQActionBridge_Public_MRQActionExecutor_h__Script_MRQActionBridge_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
