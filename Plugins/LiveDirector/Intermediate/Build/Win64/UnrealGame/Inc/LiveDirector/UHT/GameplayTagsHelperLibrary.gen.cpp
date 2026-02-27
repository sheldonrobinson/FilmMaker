// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTagsHelperLibrary.h"
#include "GameplayTagContainer.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGameplayTagsHelperLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_UGameplayTagsHelperLibrary();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_UGameplayTagsHelperLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveDirector();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGameplayTagsHelperLibrary Function GetAllActorsMatchingTagQuery *********
struct Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery_Statics
{
	struct GameplayTagsHelperLibrary_eventGetAllActorsMatchingTagQuery_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTagQuery TagQuery;
		TArray<AActor*> OutActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Tags" },
		{ "ModuleRelativePath", "Public/GameplayTagsHelperLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllActorsMatchingTagQuery constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagQuery;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllActorsMatchingTagQuery constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllActorsMatchingTagQuery Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagsHelperLibrary_eventGetAllActorsMatchingTagQuery_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagsHelperLibrary_eventGetAllActorsMatchingTagQuery_Parms, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagQuery_MetaData), NewProp_TagQuery_MetaData) }; // 3075344437
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagsHelperLibrary_eventGetAllActorsMatchingTagQuery_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery_Statics::NewProp_TagQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery_Statics::NewProp_OutActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery_Statics::NewProp_OutActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery_Statics::PropPointers) < 2048);
// ********** End Function GetAllActorsMatchingTagQuery Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameplayTagsHelperLibrary, nullptr, "GetAllActorsMatchingTagQuery", 	Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery_Statics::GameplayTagsHelperLibrary_eventGetAllActorsMatchingTagQuery_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery_Statics::GameplayTagsHelperLibrary_eventGetAllActorsMatchingTagQuery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayTagsHelperLibrary::execGetAllActorsMatchingTagQuery)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FGameplayTagQuery,Z_Param_Out_TagQuery);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGameplayTagsHelperLibrary::GetAllActorsMatchingTagQuery(Z_Param_WorldContextObject,Z_Param_Out_TagQuery,Z_Param_Out_OutActors);
	P_NATIVE_END;
}
// ********** End Class UGameplayTagsHelperLibrary Function GetAllActorsMatchingTagQuery ***********

// ********** Begin Class UGameplayTagsHelperLibrary Function GetAllActorsOfClassMatchingTagQuery **
struct Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics
{
	struct GameplayTagsHelperLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms
	{
		const UObject* WorldContextObject;
		TSubclassOf<AActor> ActorClass;
		FGameplayTagQuery TagQuery;
		TArray<AActor*> OutActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Tags" },
		{ "ModuleRelativePath", "Public/GameplayTagsHelperLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllActorsOfClassMatchingTagQuery constinit property declarations ***
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagQuery;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllActorsOfClassMatchingTagQuery constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllActorsOfClassMatchingTagQuery Property Definitions **************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagsHelperLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagsHelperLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms, ActorClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagsHelperLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagQuery_MetaData), NewProp_TagQuery_MetaData) }; // 3075344437
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagsHelperLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_TagQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_OutActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_OutActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::PropPointers) < 2048);
// ********** End Function GetAllActorsOfClassMatchingTagQuery Property Definitions ****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameplayTagsHelperLibrary, nullptr, "GetAllActorsOfClassMatchingTagQuery", 	Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::GameplayTagsHelperLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::GameplayTagsHelperLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayTagsHelperLibrary::execGetAllActorsOfClassMatchingTagQuery)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_STRUCT_REF(FGameplayTagQuery,Z_Param_Out_TagQuery);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGameplayTagsHelperLibrary::GetAllActorsOfClassMatchingTagQuery(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Out_TagQuery,Z_Param_Out_OutActors);
	P_NATIVE_END;
}
// ********** End Class UGameplayTagsHelperLibrary Function GetAllActorsOfClassMatchingTagQuery ****

// ********** Begin Class UGameplayTagsHelperLibrary Function GetAllActorsOfClassWithGameplayTag ***
struct Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics
{
	struct GameplayTagsHelperLibrary_eventGetAllActorsOfClassWithGameplayTag_Parms
	{
		const UObject* WorldContextObject;
		TSubclassOf<AActor> ActorClass;
		FGameplayTag Tag;
		bool bExactMatch;
		TArray<AActor*> OutActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Tags" },
		{ "ModuleRelativePath", "Public/GameplayTagsHelperLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllActorsOfClassWithGameplayTag constinit property declarations ****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_bExactMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllActorsOfClassWithGameplayTag constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllActorsOfClassWithGameplayTag Property Definitions ***************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagsHelperLibrary_eventGetAllActorsOfClassWithGameplayTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagsHelperLibrary_eventGetAllActorsOfClassWithGameplayTag_Parms, ActorClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagsHelperLibrary_eventGetAllActorsOfClassWithGameplayTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::NewProp_bExactMatch_SetBit(void* Obj)
{
	((GameplayTagsHelperLibrary_eventGetAllActorsOfClassWithGameplayTag_Parms*)Obj)->bExactMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameplayTagsHelperLibrary_eventGetAllActorsOfClassWithGameplayTag_Parms), &Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagsHelperLibrary_eventGetAllActorsOfClassWithGameplayTag_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::NewProp_bExactMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::NewProp_OutActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::NewProp_OutActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::PropPointers) < 2048);
// ********** End Function GetAllActorsOfClassWithGameplayTag Property Definitions *****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameplayTagsHelperLibrary, nullptr, "GetAllActorsOfClassWithGameplayTag", 	Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::GameplayTagsHelperLibrary_eventGetAllActorsOfClassWithGameplayTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::GameplayTagsHelperLibrary_eventGetAllActorsOfClassWithGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayTagsHelperLibrary::execGetAllActorsOfClassWithGameplayTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_UBOOL(Z_Param_bExactMatch);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGameplayTagsHelperLibrary::GetAllActorsOfClassWithGameplayTag(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Tag,Z_Param_bExactMatch,Z_Param_Out_OutActors);
	P_NATIVE_END;
}
// ********** End Class UGameplayTagsHelperLibrary Function GetAllActorsOfClassWithGameplayTag *****

// ********** Begin Class UGameplayTagsHelperLibrary Function GetAllActorsWithGameplayTag **********
struct Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics
{
	struct GameplayTagsHelperLibrary_eventGetAllActorsWithGameplayTag_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag Tag;
		bool bExactMatch;
		TArray<AActor*> OutActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Tags" },
		{ "ModuleRelativePath", "Public/GameplayTagsHelperLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllActorsWithGameplayTag constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_bExactMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllActorsWithGameplayTag constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllActorsWithGameplayTag Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagsHelperLibrary_eventGetAllActorsWithGameplayTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagsHelperLibrary_eventGetAllActorsWithGameplayTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::NewProp_bExactMatch_SetBit(void* Obj)
{
	((GameplayTagsHelperLibrary_eventGetAllActorsWithGameplayTag_Parms*)Obj)->bExactMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameplayTagsHelperLibrary_eventGetAllActorsWithGameplayTag_Parms), &Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagsHelperLibrary_eventGetAllActorsWithGameplayTag_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::NewProp_bExactMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::NewProp_OutActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::NewProp_OutActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::PropPointers) < 2048);
// ********** End Function GetAllActorsWithGameplayTag Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameplayTagsHelperLibrary, nullptr, "GetAllActorsWithGameplayTag", 	Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::GameplayTagsHelperLibrary_eventGetAllActorsWithGameplayTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::GameplayTagsHelperLibrary_eventGetAllActorsWithGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayTagsHelperLibrary::execGetAllActorsWithGameplayTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_UBOOL(Z_Param_bExactMatch);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGameplayTagsHelperLibrary::GetAllActorsWithGameplayTag(Z_Param_WorldContextObject,Z_Param_Tag,Z_Param_bExactMatch,Z_Param_Out_OutActors);
	P_NATIVE_END;
}
// ********** End Class UGameplayTagsHelperLibrary Function GetAllActorsWithGameplayTag ************

// ********** Begin Class UGameplayTagsHelperLibrary ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGameplayTagsHelperLibrary;
UClass* UGameplayTagsHelperLibrary::GetPrivateStaticClass()
{
	using TClass = UGameplayTagsHelperLibrary;
	if (!Z_Registration_Info_UClass_UGameplayTagsHelperLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GameplayTagsHelperLibrary"),
			Z_Registration_Info_UClass_UGameplayTagsHelperLibrary.InnerSingleton,
			StaticRegisterNativesUGameplayTagsHelperLibrary,
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
	return Z_Registration_Info_UClass_UGameplayTagsHelperLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameplayTagsHelperLibrary_NoRegister()
{
	return UGameplayTagsHelperLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameplayTagsHelperLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayTagsHelperLibrary.h" },
		{ "ModuleRelativePath", "Public/GameplayTagsHelperLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UGameplayTagsHelperLibrary constinit property declarations ***************
// ********** End Class UGameplayTagsHelperLibrary constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAllActorsMatchingTagQuery"), .Pointer = &UGameplayTagsHelperLibrary::execGetAllActorsMatchingTagQuery },
		{ .NameUTF8 = UTF8TEXT("GetAllActorsOfClassMatchingTagQuery"), .Pointer = &UGameplayTagsHelperLibrary::execGetAllActorsOfClassMatchingTagQuery },
		{ .NameUTF8 = UTF8TEXT("GetAllActorsOfClassWithGameplayTag"), .Pointer = &UGameplayTagsHelperLibrary::execGetAllActorsOfClassWithGameplayTag },
		{ .NameUTF8 = UTF8TEXT("GetAllActorsWithGameplayTag"), .Pointer = &UGameplayTagsHelperLibrary::execGetAllActorsWithGameplayTag },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsMatchingTagQuery, "GetAllActorsMatchingTagQuery" }, // 1556467336
		{ &Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassMatchingTagQuery, "GetAllActorsOfClassMatchingTagQuery" }, // 1083280769
		{ &Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsOfClassWithGameplayTag, "GetAllActorsOfClassWithGameplayTag" }, // 2146368991
		{ &Z_Construct_UFunction_UGameplayTagsHelperLibrary_GetAllActorsWithGameplayTag, "GetAllActorsWithGameplayTag" }, // 2533200598
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagsHelperLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGameplayTagsHelperLibrary_Statics
UObject* (*const Z_Construct_UClass_UGameplayTagsHelperLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveDirector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsHelperLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagsHelperLibrary_Statics::ClassParams = {
	&UGameplayTagsHelperLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsHelperLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayTagsHelperLibrary_Statics::Class_MetaDataParams)
};
void UGameplayTagsHelperLibrary::StaticRegisterNativesUGameplayTagsHelperLibrary()
{
	UClass* Class = UGameplayTagsHelperLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UGameplayTagsHelperLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UGameplayTagsHelperLibrary()
{
	if (!Z_Registration_Info_UClass_UGameplayTagsHelperLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTagsHelperLibrary.OuterSingleton, Z_Construct_UClass_UGameplayTagsHelperLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayTagsHelperLibrary.OuterSingleton;
}
UGameplayTagsHelperLibrary::UGameplayTagsHelperLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGameplayTagsHelperLibrary);
UGameplayTagsHelperLibrary::~UGameplayTagsHelperLibrary() {}
// ********** End Class UGameplayTagsHelperLibrary *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsHelperLibrary_h__Script_LiveDirector_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTagsHelperLibrary, UGameplayTagsHelperLibrary::StaticClass, TEXT("UGameplayTagsHelperLibrary"), &Z_Registration_Info_UClass_UGameplayTagsHelperLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTagsHelperLibrary), 1069738491U) },
	};
}; // Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsHelperLibrary_h__Script_LiveDirector_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsHelperLibrary_h__Script_LiveDirector_4086790887{
	TEXT("/Script/LiveDirector"),
	Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsHelperLibrary_h__Script_LiveDirector_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsHelperLibrary_h__Script_LiveDirector_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
