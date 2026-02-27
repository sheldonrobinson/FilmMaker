// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTagsComponent.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGameplayTagsComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_UGameplayTagsComponent();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_UGameplayTagsComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveDirector();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGameplayTagsComponent Function AddGameplayTag ***************************
struct Z_Construct_UFunction_UGameplayTagsComponent_AddGameplayTag_Statics
{
	struct GameplayTagsComponent_eventAddGameplayTag_Parms
	{
		FGameplayTag Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds a tag (replicated if ASC exists) */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayTagsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a tag (replicated if ASC exists)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddGameplayTag constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddGameplayTag constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddGameplayTag Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayTagsComponent_AddGameplayTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagsComponent_eventAddGameplayTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTagsComponent_AddGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsComponent_AddGameplayTag_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsComponent_AddGameplayTag_Statics::PropPointers) < 2048);
// ********** End Function AddGameplayTag Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTagsComponent_AddGameplayTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameplayTagsComponent, nullptr, "AddGameplayTag", 	Z_Construct_UFunction_UGameplayTagsComponent_AddGameplayTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsComponent_AddGameplayTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGameplayTagsComponent_AddGameplayTag_Statics::GameplayTagsComponent_eventAddGameplayTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsComponent_AddGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayTagsComponent_AddGameplayTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameplayTagsComponent_AddGameplayTag_Statics::GameplayTagsComponent_eventAddGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayTagsComponent_AddGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTagsComponent_AddGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayTagsComponent::execAddGameplayTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddGameplayTag(Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class UGameplayTagsComponent Function AddGameplayTag *****************************

// ********** Begin Class UGameplayTagsComponent Function HasGameplayTag ***************************
struct Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics
{
	struct GameplayTagsComponent_eventHasGameplayTag_Parms
	{
		FGameplayTag Tag;
		bool bExactMatch;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks if the actor has a tag */" },
#endif
		{ "CPP_Default_bExactMatch", "true" },
		{ "ModuleRelativePath", "Public/GameplayTagsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the actor has a tag" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function HasGameplayTag constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_bExactMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasGameplayTag constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasGameplayTag Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagsComponent_eventHasGameplayTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics::NewProp_bExactMatch_SetBit(void* Obj)
{
	((GameplayTagsComponent_eventHasGameplayTag_Parms*)Obj)->bExactMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameplayTagsComponent_eventHasGameplayTag_Parms), &Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameplayTagsComponent_eventHasGameplayTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameplayTagsComponent_eventHasGameplayTag_Parms), &Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics::NewProp_bExactMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics::PropPointers) < 2048);
// ********** End Function HasGameplayTag Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameplayTagsComponent, nullptr, "HasGameplayTag", 	Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics::GameplayTagsComponent_eventHasGameplayTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics::GameplayTagsComponent_eventHasGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayTagsComponent::execHasGameplayTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_UBOOL(Z_Param_bExactMatch);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasGameplayTag(Z_Param_Tag,Z_Param_bExactMatch);
	P_NATIVE_END;
}
// ********** End Class UGameplayTagsComponent Function HasGameplayTag *****************************

// ********** Begin Class UGameplayTagsComponent Function RemoveGameplayTag ************************
struct Z_Construct_UFunction_UGameplayTagsComponent_RemoveGameplayTag_Statics
{
	struct GameplayTagsComponent_eventRemoveGameplayTag_Parms
	{
		FGameplayTag Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes a tag (replicated if ASC exists) */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayTagsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a tag (replicated if ASC exists)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveGameplayTag constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveGameplayTag constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveGameplayTag Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayTagsComponent_RemoveGameplayTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagsComponent_eventRemoveGameplayTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTagsComponent_RemoveGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagsComponent_RemoveGameplayTag_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsComponent_RemoveGameplayTag_Statics::PropPointers) < 2048);
// ********** End Function RemoveGameplayTag Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTagsComponent_RemoveGameplayTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameplayTagsComponent, nullptr, "RemoveGameplayTag", 	Z_Construct_UFunction_UGameplayTagsComponent_RemoveGameplayTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsComponent_RemoveGameplayTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGameplayTagsComponent_RemoveGameplayTag_Statics::GameplayTagsComponent_eventRemoveGameplayTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagsComponent_RemoveGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayTagsComponent_RemoveGameplayTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameplayTagsComponent_RemoveGameplayTag_Statics::GameplayTagsComponent_eventRemoveGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayTagsComponent_RemoveGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTagsComponent_RemoveGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayTagsComponent::execRemoveGameplayTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGameplayTag(Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class UGameplayTagsComponent Function RemoveGameplayTag **************************

// ********** Begin Class UGameplayTagsComponent ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGameplayTagsComponent;
UClass* UGameplayTagsComponent::GetPrivateStaticClass()
{
	using TClass = UGameplayTagsComponent;
	if (!Z_Registration_Info_UClass_UGameplayTagsComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GameplayTagsComponent"),
			Z_Registration_Info_UClass_UGameplayTagsComponent.InnerSingleton,
			StaticRegisterNativesUGameplayTagsComponent,
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
	return Z_Registration_Info_UClass_UGameplayTagsComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameplayTagsComponent_NoRegister()
{
	return UGameplayTagsComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameplayTagsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Actor Component that manages Gameplay Tags and integrates with GAS.\n */" },
#endif
		{ "IncludePath", "GameplayTagsComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayTagsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor Component that manages Gameplay Tags and integrates with GAS." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnedTags_MetaData[] = {
		{ "Category", "Gameplay Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Local tag container (used if no ASC is present) */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayTagsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local tag container (used if no ASC is present)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UGameplayTagsComponent constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwnedTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UGameplayTagsComponent constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddGameplayTag"), .Pointer = &UGameplayTagsComponent::execAddGameplayTag },
		{ .NameUTF8 = UTF8TEXT("HasGameplayTag"), .Pointer = &UGameplayTagsComponent::execHasGameplayTag },
		{ .NameUTF8 = UTF8TEXT("RemoveGameplayTag"), .Pointer = &UGameplayTagsComponent::execRemoveGameplayTag },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayTagsComponent_AddGameplayTag, "AddGameplayTag" }, // 637982468
		{ &Z_Construct_UFunction_UGameplayTagsComponent_HasGameplayTag, "HasGameplayTag" }, // 1495701143
		{ &Z_Construct_UFunction_UGameplayTagsComponent_RemoveGameplayTag, "RemoveGameplayTag" }, // 131979007
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGameplayTagsComponent_Statics

// ********** Begin Class UGameplayTagsComponent Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsComponent_Statics::NewProp_OwnedTags = { "OwnedTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagsComponent, OwnedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnedTags_MetaData), NewProp_OwnedTags_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTagsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsComponent_Statics::NewProp_OwnedTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsComponent_Statics::PropPointers) < 2048);
// ********** End Class UGameplayTagsComponent Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UGameplayTagsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveDirector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGameplayTagsComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UGameplayTagsComponent, IGameplayTagAssetInterface), false },  // 4215201248
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagsComponent_Statics::ClassParams = {
	&UGameplayTagsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameplayTagsComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayTagsComponent_Statics::Class_MetaDataParams)
};
void UGameplayTagsComponent::StaticRegisterNativesUGameplayTagsComponent()
{
	UClass* Class = UGameplayTagsComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UGameplayTagsComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UGameplayTagsComponent()
{
	if (!Z_Registration_Info_UClass_UGameplayTagsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTagsComponent.OuterSingleton, Z_Construct_UClass_UGameplayTagsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayTagsComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGameplayTagsComponent);
UGameplayTagsComponent::~UGameplayTagsComponent() {}
// ********** End Class UGameplayTagsComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsComponent_h__Script_LiveDirector_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTagsComponent, UGameplayTagsComponent::StaticClass, TEXT("UGameplayTagsComponent"), &Z_Registration_Info_UClass_UGameplayTagsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTagsComponent), 912067041U) },
	};
}; // Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsComponent_h__Script_LiveDirector_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsComponent_h__Script_LiveDirector_3003890870{
	TEXT("/Script/LiveDirector"),
	Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsComponent_h__Script_LiveDirector_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsComponent_h__Script_LiveDirector_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
