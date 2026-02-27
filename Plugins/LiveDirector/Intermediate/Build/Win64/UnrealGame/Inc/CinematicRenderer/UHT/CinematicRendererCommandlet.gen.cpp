// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CinematicRendererCommandlet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCinematicRendererCommandlet() {}

// ********** Begin Cross Module References ********************************************************
CINEMATICRENDERER_API UClass* Z_Construct_UClass_UCinematicRendererCommandlet();
CINEMATICRENDERER_API UClass* Z_Construct_UClass_UCinematicRendererCommandlet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
UPackage* Z_Construct_UPackage__Script_CinematicRenderer();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCinematicRendererCommandlet Function ProcessJSON ************************
struct Z_Construct_UFunction_UCinematicRendererCommandlet_ProcessJSON_Statics
{
	struct CinematicRendererCommandlet_eventProcessJSON_Parms
	{
		FString Json;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicRendererCommandlet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ProcessJSON constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ProcessJSON constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ProcessJSON Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCinematicRendererCommandlet_ProcessJSON_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererCommandlet_eventProcessJSON_Parms, Json), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Json_MetaData), NewProp_Json_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCinematicRendererCommandlet_ProcessJSON_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererCommandlet_eventProcessJSON_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicRendererCommandlet_ProcessJSON_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererCommandlet_ProcessJSON_Statics::NewProp_Json,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererCommandlet_ProcessJSON_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicRendererCommandlet_ProcessJSON_Statics::PropPointers) < 2048);
// ********** End Function ProcessJSON Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicRendererCommandlet_ProcessJSON_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCinematicRendererCommandlet, nullptr, "ProcessJSON", 	Z_Construct_UFunction_UCinematicRendererCommandlet_ProcessJSON_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicRendererCommandlet_ProcessJSON_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCinematicRendererCommandlet_ProcessJSON_Statics::CinematicRendererCommandlet_eventProcessJSON_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicRendererCommandlet_ProcessJSON_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCinematicRendererCommandlet_ProcessJSON_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCinematicRendererCommandlet_ProcessJSON_Statics::CinematicRendererCommandlet_eventProcessJSON_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCinematicRendererCommandlet_ProcessJSON()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCinematicRendererCommandlet_ProcessJSON_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCinematicRendererCommandlet::execProcessJSON)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Json);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UCinematicRendererCommandlet::ProcessJSON(Z_Param_Json);
	P_NATIVE_END;
}
// ********** End Class UCinematicRendererCommandlet Function ProcessJSON **************************

// ********** Begin Class UCinematicRendererCommandlet *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCinematicRendererCommandlet;
UClass* UCinematicRendererCommandlet::GetPrivateStaticClass()
{
	using TClass = UCinematicRendererCommandlet;
	if (!Z_Registration_Info_UClass_UCinematicRendererCommandlet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CinematicRendererCommandlet"),
			Z_Registration_Info_UClass_UCinematicRendererCommandlet.InnerSingleton,
			StaticRegisterNativesUCinematicRendererCommandlet,
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
	return Z_Registration_Info_UClass_UCinematicRendererCommandlet.InnerSingleton;
}
UClass* Z_Construct_UClass_UCinematicRendererCommandlet_NoRegister()
{
	return UCinematicRendererCommandlet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCinematicRendererCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CinematicRendererCommandlet.h" },
		{ "ModuleRelativePath", "Public/CinematicRendererCommandlet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCinematicRendererCommandlet constinit property declarations *************
// ********** End Class UCinematicRendererCommandlet constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ProcessJSON"), .Pointer = &UCinematicRendererCommandlet::execProcessJSON },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCinematicRendererCommandlet_ProcessJSON, "ProcessJSON" }, // 2076998777
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCinematicRendererCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCinematicRendererCommandlet_Statics
UObject* (*const Z_Construct_UClass_UCinematicRendererCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_CinematicRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicRendererCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCinematicRendererCommandlet_Statics::ClassParams = {
	&UCinematicRendererCommandlet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicRendererCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UCinematicRendererCommandlet_Statics::Class_MetaDataParams)
};
void UCinematicRendererCommandlet::StaticRegisterNativesUCinematicRendererCommandlet()
{
	UClass* Class = UCinematicRendererCommandlet::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UCinematicRendererCommandlet_Statics::Funcs));
}
UClass* Z_Construct_UClass_UCinematicRendererCommandlet()
{
	if (!Z_Registration_Info_UClass_UCinematicRendererCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCinematicRendererCommandlet.OuterSingleton, Z_Construct_UClass_UCinematicRendererCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCinematicRendererCommandlet.OuterSingleton;
}
UCinematicRendererCommandlet::UCinematicRendererCommandlet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCinematicRendererCommandlet);
UCinematicRendererCommandlet::~UCinematicRendererCommandlet() {}
// ********** End Class UCinematicRendererCommandlet ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererCommandlet_h__Script_CinematicRenderer_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCinematicRendererCommandlet, UCinematicRendererCommandlet::StaticClass, TEXT("UCinematicRendererCommandlet"), &Z_Registration_Info_UClass_UCinematicRendererCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCinematicRendererCommandlet), 1538379038U) },
	};
}; // Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererCommandlet_h__Script_CinematicRenderer_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererCommandlet_h__Script_CinematicRenderer_3119446888{
	TEXT("/Script/CinematicRenderer"),
	Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererCommandlet_h__Script_CinematicRenderer_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererCommandlet_h__Script_CinematicRenderer_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
