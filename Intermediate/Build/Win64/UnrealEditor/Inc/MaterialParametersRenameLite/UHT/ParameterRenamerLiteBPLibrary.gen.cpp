// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialParametersRenameLite/Public/ParameterRenamerLiteBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParameterRenamerLiteBPLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression_NoRegister();
MATERIALPARAMETERSRENAMELITE_API UClass* Z_Construct_UClass_UParameterRenamerLiteBPLibrary();
MATERIALPARAMETERSRENAMELITE_API UClass* Z_Construct_UClass_UParameterRenamerLiteBPLibrary_NoRegister();
MATERIALPARAMETERSRENAMELITE_API UScriptStruct* Z_Construct_UScriptStruct_FParameterExpressionInfo();
MATERIALPARAMETERSRENAMELITE_API UScriptStruct* Z_Construct_UScriptStruct_FParameterRenamePreview();
UPackage* Z_Construct_UPackage__Script_MaterialParametersRenameLite();
// End Cross Module References

// Begin ScriptStruct FParameterExpressionInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParameterExpressionInfo;
class UScriptStruct* FParameterExpressionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParameterExpressionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParameterExpressionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameterExpressionInfo, (UObject*)Z_Construct_UPackage__Script_MaterialParametersRenameLite(), TEXT("ParameterExpressionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ParameterExpressionInfo.OuterSingleton;
}
template<> MATERIALPARAMETERSRENAMELITE_API UScriptStruct* StaticStruct<FParameterExpressionInfo>()
{
	return FParameterExpressionInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FParameterExpressionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n// Data Structures\n///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/ParameterRenamerLiteBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n Data Structures\n/" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[] = {
		{ "Category", "ParameterRenamerLite" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pointer to the parameter expression\n" },
#endif
		{ "ModuleRelativePath", "Public/ParameterRenamerLiteBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the parameter expression" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "Category", "ParameterRenamerLite" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Parameter name\n" },
#endif
		{ "ModuleRelativePath", "Public/ParameterRenamerLiteBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parameter name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Expression;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameterExpressionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FParameterExpressionInfo_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameterExpressionInfo, Expression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expression_MetaData), NewProp_Expression_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FParameterExpressionInfo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameterExpressionInfo, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParameterExpressionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterExpressionInfo_Statics::NewProp_Expression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterExpressionInfo_Statics::NewProp_ParameterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterExpressionInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameterExpressionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MaterialParametersRenameLite,
	nullptr,
	&NewStructOps,
	"ParameterExpressionInfo",
	Z_Construct_UScriptStruct_FParameterExpressionInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterExpressionInfo_Statics::PropPointers),
	sizeof(FParameterExpressionInfo),
	alignof(FParameterExpressionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterExpressionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParameterExpressionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FParameterExpressionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ParameterExpressionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParameterExpressionInfo.InnerSingleton, Z_Construct_UScriptStruct_FParameterExpressionInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ParameterExpressionInfo.InnerSingleton;
}
// End ScriptStruct FParameterExpressionInfo

// Begin ScriptStruct FParameterRenamePreview
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParameterRenamePreview;
class UScriptStruct* FParameterRenamePreview::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParameterRenamePreview.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParameterRenamePreview.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameterRenamePreview, (UObject*)Z_Construct_UPackage__Script_MaterialParametersRenameLite(), TEXT("ParameterRenamePreview"));
	}
	return Z_Registration_Info_UScriptStruct_ParameterRenamePreview.OuterSingleton;
}
template<> MATERIALPARAMETERSRENAMELITE_API UScriptStruct* StaticStruct<FParameterRenamePreview>()
{
	return FParameterRenamePreview::StaticStruct();
}
struct Z_Construct_UScriptStruct_FParameterRenamePreview_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ParameterRenamerLiteBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalName_MetaData[] = {
		{ "Category", "ParameterRenamerLite" },
		{ "ModuleRelativePath", "Public/ParameterRenamerLiteBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[] = {
		{ "Category", "ParameterRenamerLite" },
		{ "ModuleRelativePath", "Public/ParameterRenamerLiteBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OriginalName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameterRenamePreview>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FParameterRenamePreview_Statics::NewProp_OriginalName = { "OriginalName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameterRenamePreview, OriginalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalName_MetaData), NewProp_OriginalName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FParameterRenamePreview_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameterRenamePreview, NewName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewName_MetaData), NewProp_NewName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParameterRenamePreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterRenamePreview_Statics::NewProp_OriginalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterRenamePreview_Statics::NewProp_NewName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterRenamePreview_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameterRenamePreview_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MaterialParametersRenameLite,
	nullptr,
	&NewStructOps,
	"ParameterRenamePreview",
	Z_Construct_UScriptStruct_FParameterRenamePreview_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterRenamePreview_Statics::PropPointers),
	sizeof(FParameterRenamePreview),
	alignof(FParameterRenamePreview),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterRenamePreview_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParameterRenamePreview_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FParameterRenamePreview()
{
	if (!Z_Registration_Info_UScriptStruct_ParameterRenamePreview.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParameterRenamePreview.InnerSingleton, Z_Construct_UScriptStruct_FParameterRenamePreview_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ParameterRenamePreview.InnerSingleton;
}
// End ScriptStruct FParameterRenamePreview

// Begin Class UParameterRenamerLiteBPLibrary Function AddFindAndReplaceModifier
struct Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddFindAndReplaceModifier_Statics
{
	struct ParameterRenamerLiteBPLibrary_eventAddFindAndReplaceModifier_Parms
	{
		FString FindStr;
		FString ReplaceStr;
		UObject* MaterialOrFunction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ParameterRenamerLite|Param" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a find-and-replace modifier to parameter names.\n" },
#endif
		{ "ModuleRelativePath", "Public/ParameterRenamerLiteBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a find-and-replace modifier to parameter names." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FindStr_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplaceStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FindStr;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplaceStr;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOrFunction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddFindAndReplaceModifier_Statics::NewProp_FindStr = { "FindStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventAddFindAndReplaceModifier_Parms, FindStr), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FindStr_MetaData), NewProp_FindStr_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddFindAndReplaceModifier_Statics::NewProp_ReplaceStr = { "ReplaceStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventAddFindAndReplaceModifier_Parms, ReplaceStr), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplaceStr_MetaData), NewProp_ReplaceStr_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddFindAndReplaceModifier_Statics::NewProp_MaterialOrFunction = { "MaterialOrFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventAddFindAndReplaceModifier_Parms, MaterialOrFunction), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddFindAndReplaceModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddFindAndReplaceModifier_Statics::NewProp_FindStr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddFindAndReplaceModifier_Statics::NewProp_ReplaceStr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddFindAndReplaceModifier_Statics::NewProp_MaterialOrFunction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddFindAndReplaceModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddFindAndReplaceModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParameterRenamerLiteBPLibrary, nullptr, "AddFindAndReplaceModifier", nullptr, nullptr, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddFindAndReplaceModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddFindAndReplaceModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddFindAndReplaceModifier_Statics::ParameterRenamerLiteBPLibrary_eventAddFindAndReplaceModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddFindAndReplaceModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddFindAndReplaceModifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddFindAndReplaceModifier_Statics::ParameterRenamerLiteBPLibrary_eventAddFindAndReplaceModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddFindAndReplaceModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddFindAndReplaceModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParameterRenamerLiteBPLibrary::execAddFindAndReplaceModifier)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FindStr);
	P_GET_PROPERTY(FStrProperty,Z_Param_ReplaceStr);
	P_GET_OBJECT(UObject,Z_Param_MaterialOrFunction);
	P_FINISH;
	P_NATIVE_BEGIN;
	UParameterRenamerLiteBPLibrary::AddFindAndReplaceModifier(Z_Param_FindStr,Z_Param_ReplaceStr,Z_Param_MaterialOrFunction);
	P_NATIVE_END;
}
// End Class UParameterRenamerLiteBPLibrary Function AddFindAndReplaceModifier

// Begin Class UParameterRenamerLiteBPLibrary Function AddGroupFindAndReplaceModifier
struct Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupFindAndReplaceModifier_Statics
{
	struct ParameterRenamerLiteBPLibrary_eventAddGroupFindAndReplaceModifier_Parms
	{
		FString FindStr;
		FString ReplaceStr;
		UObject* MaterialOrFunction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ParameterRenamerLite|Group" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a find-and-replace modifier to parameter groups.\n" },
#endif
		{ "ModuleRelativePath", "Public/ParameterRenamerLiteBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a find-and-replace modifier to parameter groups." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FindStr_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplaceStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FindStr;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplaceStr;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOrFunction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupFindAndReplaceModifier_Statics::NewProp_FindStr = { "FindStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventAddGroupFindAndReplaceModifier_Parms, FindStr), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FindStr_MetaData), NewProp_FindStr_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupFindAndReplaceModifier_Statics::NewProp_ReplaceStr = { "ReplaceStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventAddGroupFindAndReplaceModifier_Parms, ReplaceStr), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplaceStr_MetaData), NewProp_ReplaceStr_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupFindAndReplaceModifier_Statics::NewProp_MaterialOrFunction = { "MaterialOrFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventAddGroupFindAndReplaceModifier_Parms, MaterialOrFunction), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupFindAndReplaceModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupFindAndReplaceModifier_Statics::NewProp_FindStr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupFindAndReplaceModifier_Statics::NewProp_ReplaceStr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupFindAndReplaceModifier_Statics::NewProp_MaterialOrFunction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupFindAndReplaceModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupFindAndReplaceModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParameterRenamerLiteBPLibrary, nullptr, "AddGroupFindAndReplaceModifier", nullptr, nullptr, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupFindAndReplaceModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupFindAndReplaceModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupFindAndReplaceModifier_Statics::ParameterRenamerLiteBPLibrary_eventAddGroupFindAndReplaceModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupFindAndReplaceModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupFindAndReplaceModifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupFindAndReplaceModifier_Statics::ParameterRenamerLiteBPLibrary_eventAddGroupFindAndReplaceModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupFindAndReplaceModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupFindAndReplaceModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParameterRenamerLiteBPLibrary::execAddGroupFindAndReplaceModifier)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FindStr);
	P_GET_PROPERTY(FStrProperty,Z_Param_ReplaceStr);
	P_GET_OBJECT(UObject,Z_Param_MaterialOrFunction);
	P_FINISH;
	P_NATIVE_BEGIN;
	UParameterRenamerLiteBPLibrary::AddGroupFindAndReplaceModifier(Z_Param_FindStr,Z_Param_ReplaceStr,Z_Param_MaterialOrFunction);
	P_NATIVE_END;
}
// End Class UParameterRenamerLiteBPLibrary Function AddGroupFindAndReplaceModifier

// Begin Class UParameterRenamerLiteBPLibrary Function AddGroupPostfixModifier
struct Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPostfixModifier_Statics
{
	struct ParameterRenamerLiteBPLibrary_eventAddGroupPostfixModifier_Parms
	{
		FString Postfix;
		UObject* MaterialOrFunction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ParameterRenamerLite|Group" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a postfix modifier to parameter groups.\n" },
#endif
		{ "ModuleRelativePath", "Public/ParameterRenamerLiteBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a postfix modifier to parameter groups." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Postfix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Postfix;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOrFunction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPostfixModifier_Statics::NewProp_Postfix = { "Postfix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventAddGroupPostfixModifier_Parms, Postfix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Postfix_MetaData), NewProp_Postfix_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPostfixModifier_Statics::NewProp_MaterialOrFunction = { "MaterialOrFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventAddGroupPostfixModifier_Parms, MaterialOrFunction), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPostfixModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPostfixModifier_Statics::NewProp_Postfix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPostfixModifier_Statics::NewProp_MaterialOrFunction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPostfixModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPostfixModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParameterRenamerLiteBPLibrary, nullptr, "AddGroupPostfixModifier", nullptr, nullptr, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPostfixModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPostfixModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPostfixModifier_Statics::ParameterRenamerLiteBPLibrary_eventAddGroupPostfixModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPostfixModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPostfixModifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPostfixModifier_Statics::ParameterRenamerLiteBPLibrary_eventAddGroupPostfixModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPostfixModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPostfixModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParameterRenamerLiteBPLibrary::execAddGroupPostfixModifier)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Postfix);
	P_GET_OBJECT(UObject,Z_Param_MaterialOrFunction);
	P_FINISH;
	P_NATIVE_BEGIN;
	UParameterRenamerLiteBPLibrary::AddGroupPostfixModifier(Z_Param_Postfix,Z_Param_MaterialOrFunction);
	P_NATIVE_END;
}
// End Class UParameterRenamerLiteBPLibrary Function AddGroupPostfixModifier

// Begin Class UParameterRenamerLiteBPLibrary Function AddGroupPrefixModifier
struct Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPrefixModifier_Statics
{
	struct ParameterRenamerLiteBPLibrary_eventAddGroupPrefixModifier_Parms
	{
		FString Prefix;
		UObject* MaterialOrFunction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ParameterRenamerLite|Group" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a prefix modifier to parameter groups.\n" },
#endif
		{ "ModuleRelativePath", "Public/ParameterRenamerLiteBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a prefix modifier to parameter groups." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOrFunction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPrefixModifier_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventAddGroupPrefixModifier_Parms, Prefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prefix_MetaData), NewProp_Prefix_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPrefixModifier_Statics::NewProp_MaterialOrFunction = { "MaterialOrFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventAddGroupPrefixModifier_Parms, MaterialOrFunction), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPrefixModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPrefixModifier_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPrefixModifier_Statics::NewProp_MaterialOrFunction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPrefixModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPrefixModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParameterRenamerLiteBPLibrary, nullptr, "AddGroupPrefixModifier", nullptr, nullptr, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPrefixModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPrefixModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPrefixModifier_Statics::ParameterRenamerLiteBPLibrary_eventAddGroupPrefixModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPrefixModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPrefixModifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPrefixModifier_Statics::ParameterRenamerLiteBPLibrary_eventAddGroupPrefixModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPrefixModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPrefixModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParameterRenamerLiteBPLibrary::execAddGroupPrefixModifier)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_GET_OBJECT(UObject,Z_Param_MaterialOrFunction);
	P_FINISH;
	P_NATIVE_BEGIN;
	UParameterRenamerLiteBPLibrary::AddGroupPrefixModifier(Z_Param_Prefix,Z_Param_MaterialOrFunction);
	P_NATIVE_END;
}
// End Class UParameterRenamerLiteBPLibrary Function AddGroupPrefixModifier

// Begin Class UParameterRenamerLiteBPLibrary Function AddGroupReplaceAllModifier
struct Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupReplaceAllModifier_Statics
{
	struct ParameterRenamerLiteBPLibrary_eventAddGroupReplaceAllModifier_Parms
	{
		FString Replace;
		UObject* MaterialOrFunction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ParameterRenamerLite|Group" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a (replace all) modifier to parameter groups\n" },
#endif
		{ "ModuleRelativePath", "Public/ParameterRenamerLiteBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a (replace all) modifier to parameter groups" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Replace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Replace;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOrFunction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupReplaceAllModifier_Statics::NewProp_Replace = { "Replace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventAddGroupReplaceAllModifier_Parms, Replace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Replace_MetaData), NewProp_Replace_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupReplaceAllModifier_Statics::NewProp_MaterialOrFunction = { "MaterialOrFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventAddGroupReplaceAllModifier_Parms, MaterialOrFunction), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupReplaceAllModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupReplaceAllModifier_Statics::NewProp_Replace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupReplaceAllModifier_Statics::NewProp_MaterialOrFunction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupReplaceAllModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupReplaceAllModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParameterRenamerLiteBPLibrary, nullptr, "AddGroupReplaceAllModifier", nullptr, nullptr, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupReplaceAllModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupReplaceAllModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupReplaceAllModifier_Statics::ParameterRenamerLiteBPLibrary_eventAddGroupReplaceAllModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupReplaceAllModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupReplaceAllModifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupReplaceAllModifier_Statics::ParameterRenamerLiteBPLibrary_eventAddGroupReplaceAllModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupReplaceAllModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupReplaceAllModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParameterRenamerLiteBPLibrary::execAddGroupReplaceAllModifier)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Replace);
	P_GET_OBJECT(UObject,Z_Param_MaterialOrFunction);
	P_FINISH;
	P_NATIVE_BEGIN;
	UParameterRenamerLiteBPLibrary::AddGroupReplaceAllModifier(Z_Param_Replace,Z_Param_MaterialOrFunction);
	P_NATIVE_END;
}
// End Class UParameterRenamerLiteBPLibrary Function AddGroupReplaceAllModifier

// Begin Class UParameterRenamerLiteBPLibrary Function AddPostfixModifier
struct Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPostfixModifier_Statics
{
	struct ParameterRenamerLiteBPLibrary_eventAddPostfixModifier_Parms
	{
		FString Postfix;
		UObject* MaterialOrFunction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ParameterRenamerLite|Param" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a postfix modifier to parameter names.\n" },
#endif
		{ "ModuleRelativePath", "Public/ParameterRenamerLiteBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a postfix modifier to parameter names." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Postfix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Postfix;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOrFunction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPostfixModifier_Statics::NewProp_Postfix = { "Postfix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventAddPostfixModifier_Parms, Postfix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Postfix_MetaData), NewProp_Postfix_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPostfixModifier_Statics::NewProp_MaterialOrFunction = { "MaterialOrFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventAddPostfixModifier_Parms, MaterialOrFunction), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPostfixModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPostfixModifier_Statics::NewProp_Postfix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPostfixModifier_Statics::NewProp_MaterialOrFunction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPostfixModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPostfixModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParameterRenamerLiteBPLibrary, nullptr, "AddPostfixModifier", nullptr, nullptr, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPostfixModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPostfixModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPostfixModifier_Statics::ParameterRenamerLiteBPLibrary_eventAddPostfixModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPostfixModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPostfixModifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPostfixModifier_Statics::ParameterRenamerLiteBPLibrary_eventAddPostfixModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPostfixModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPostfixModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParameterRenamerLiteBPLibrary::execAddPostfixModifier)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Postfix);
	P_GET_OBJECT(UObject,Z_Param_MaterialOrFunction);
	P_FINISH;
	P_NATIVE_BEGIN;
	UParameterRenamerLiteBPLibrary::AddPostfixModifier(Z_Param_Postfix,Z_Param_MaterialOrFunction);
	P_NATIVE_END;
}
// End Class UParameterRenamerLiteBPLibrary Function AddPostfixModifier

// Begin Class UParameterRenamerLiteBPLibrary Function AddPrefixModifier
struct Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPrefixModifier_Statics
{
	struct ParameterRenamerLiteBPLibrary_eventAddPrefixModifier_Parms
	{
		FString Prefix;
		UObject* MaterialOrFunction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ParameterRenamerLite|Param" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a prefix modifier to parameter names.\n" },
#endif
		{ "ModuleRelativePath", "Public/ParameterRenamerLiteBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a prefix modifier to parameter names." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOrFunction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPrefixModifier_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventAddPrefixModifier_Parms, Prefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prefix_MetaData), NewProp_Prefix_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPrefixModifier_Statics::NewProp_MaterialOrFunction = { "MaterialOrFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventAddPrefixModifier_Parms, MaterialOrFunction), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPrefixModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPrefixModifier_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPrefixModifier_Statics::NewProp_MaterialOrFunction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPrefixModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPrefixModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParameterRenamerLiteBPLibrary, nullptr, "AddPrefixModifier", nullptr, nullptr, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPrefixModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPrefixModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPrefixModifier_Statics::ParameterRenamerLiteBPLibrary_eventAddPrefixModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPrefixModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPrefixModifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPrefixModifier_Statics::ParameterRenamerLiteBPLibrary_eventAddPrefixModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPrefixModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPrefixModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParameterRenamerLiteBPLibrary::execAddPrefixModifier)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_GET_OBJECT(UObject,Z_Param_MaterialOrFunction);
	P_FINISH;
	P_NATIVE_BEGIN;
	UParameterRenamerLiteBPLibrary::AddPrefixModifier(Z_Param_Prefix,Z_Param_MaterialOrFunction);
	P_NATIVE_END;
}
// End Class UParameterRenamerLiteBPLibrary Function AddPrefixModifier

// Begin Class UParameterRenamerLiteBPLibrary Function AddReplaceAllModifier
struct Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddReplaceAllModifier_Statics
{
	struct ParameterRenamerLiteBPLibrary_eventAddReplaceAllModifier_Parms
	{
		FString Replace;
		UObject* MaterialOrFunction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ParameterRenamerLite|Param" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a (replace all) modifier to parameter names\n" },
#endif
		{ "ModuleRelativePath", "Public/ParameterRenamerLiteBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a (replace all) modifier to parameter names" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Replace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Replace;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOrFunction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddReplaceAllModifier_Statics::NewProp_Replace = { "Replace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventAddReplaceAllModifier_Parms, Replace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Replace_MetaData), NewProp_Replace_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddReplaceAllModifier_Statics::NewProp_MaterialOrFunction = { "MaterialOrFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventAddReplaceAllModifier_Parms, MaterialOrFunction), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddReplaceAllModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddReplaceAllModifier_Statics::NewProp_Replace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddReplaceAllModifier_Statics::NewProp_MaterialOrFunction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddReplaceAllModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddReplaceAllModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParameterRenamerLiteBPLibrary, nullptr, "AddReplaceAllModifier", nullptr, nullptr, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddReplaceAllModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddReplaceAllModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddReplaceAllModifier_Statics::ParameterRenamerLiteBPLibrary_eventAddReplaceAllModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddReplaceAllModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddReplaceAllModifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddReplaceAllModifier_Statics::ParameterRenamerLiteBPLibrary_eventAddReplaceAllModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddReplaceAllModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddReplaceAllModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParameterRenamerLiteBPLibrary::execAddReplaceAllModifier)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Replace);
	P_GET_OBJECT(UObject,Z_Param_MaterialOrFunction);
	P_FINISH;
	P_NATIVE_BEGIN;
	UParameterRenamerLiteBPLibrary::AddReplaceAllModifier(Z_Param_Replace,Z_Param_MaterialOrFunction);
	P_NATIVE_END;
}
// End Class UParameterRenamerLiteBPLibrary Function AddReplaceAllModifier

// Begin Class UParameterRenamerLiteBPLibrary Function ClearAllCommands
struct Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_ClearAllCommands_Statics
{
	struct ParameterRenamerLiteBPLibrary_eventClearAllCommands_Parms
	{
		UObject* MaterialOrFunction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ParameterRenamerLite" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clears all renaming commands.\n" },
#endif
		{ "ModuleRelativePath", "Public/ParameterRenamerLiteBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears all renaming commands." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOrFunction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_ClearAllCommands_Statics::NewProp_MaterialOrFunction = { "MaterialOrFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventClearAllCommands_Parms, MaterialOrFunction), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_ClearAllCommands_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_ClearAllCommands_Statics::NewProp_MaterialOrFunction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_ClearAllCommands_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_ClearAllCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParameterRenamerLiteBPLibrary, nullptr, "ClearAllCommands", nullptr, nullptr, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_ClearAllCommands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_ClearAllCommands_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_ClearAllCommands_Statics::ParameterRenamerLiteBPLibrary_eventClearAllCommands_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_ClearAllCommands_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_ClearAllCommands_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_ClearAllCommands_Statics::ParameterRenamerLiteBPLibrary_eventClearAllCommands_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_ClearAllCommands()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_ClearAllCommands_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParameterRenamerLiteBPLibrary::execClearAllCommands)
{
	P_GET_OBJECT(UObject,Z_Param_MaterialOrFunction);
	P_FINISH;
	P_NATIVE_BEGIN;
	UParameterRenamerLiteBPLibrary::ClearAllCommands(Z_Param_MaterialOrFunction);
	P_NATIVE_END;
}
// End Class UParameterRenamerLiteBPLibrary Function ClearAllCommands

// Begin Class UParameterRenamerLiteBPLibrary Function CommitOnlySelectedExpressionsRenaming
struct Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitOnlySelectedExpressionsRenaming_Statics
{
	struct ParameterRenamerLiteBPLibrary_eventCommitOnlySelectedExpressionsRenaming_Parms
	{
		TArray<UMaterialExpression*> Expressions;
		UObject* MaterialOrFunction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ParameterRenamerLite|Commit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Commits the renaming changes only for the selected material expressions.\n\x09 * @param Expressions Modify only selected expressions\n\x09 * @param MaterialOrFunction If parameter is none it will use global Rename Manager (shared history)\n\x09 */" },
#endif
		{ "CPP_Default_MaterialOrFunction", "None" },
		{ "ModuleRelativePath", "Public/ParameterRenamerLiteBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Commits the renaming changes only for the selected material expressions.\n@param Expressions Modify only selected expressions\n@param MaterialOrFunction If parameter is none it will use global Rename Manager (shared history)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expressions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Expressions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Expressions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOrFunction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitOnlySelectedExpressionsRenaming_Statics::NewProp_Expressions_Inner = { "Expressions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitOnlySelectedExpressionsRenaming_Statics::NewProp_Expressions = { "Expressions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventCommitOnlySelectedExpressionsRenaming_Parms, Expressions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expressions_MetaData), NewProp_Expressions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitOnlySelectedExpressionsRenaming_Statics::NewProp_MaterialOrFunction = { "MaterialOrFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventCommitOnlySelectedExpressionsRenaming_Parms, MaterialOrFunction), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitOnlySelectedExpressionsRenaming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitOnlySelectedExpressionsRenaming_Statics::NewProp_Expressions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitOnlySelectedExpressionsRenaming_Statics::NewProp_Expressions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitOnlySelectedExpressionsRenaming_Statics::NewProp_MaterialOrFunction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitOnlySelectedExpressionsRenaming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitOnlySelectedExpressionsRenaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParameterRenamerLiteBPLibrary, nullptr, "CommitOnlySelectedExpressionsRenaming", nullptr, nullptr, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitOnlySelectedExpressionsRenaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitOnlySelectedExpressionsRenaming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitOnlySelectedExpressionsRenaming_Statics::ParameterRenamerLiteBPLibrary_eventCommitOnlySelectedExpressionsRenaming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitOnlySelectedExpressionsRenaming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitOnlySelectedExpressionsRenaming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitOnlySelectedExpressionsRenaming_Statics::ParameterRenamerLiteBPLibrary_eventCommitOnlySelectedExpressionsRenaming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitOnlySelectedExpressionsRenaming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitOnlySelectedExpressionsRenaming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParameterRenamerLiteBPLibrary::execCommitOnlySelectedExpressionsRenaming)
{
	P_GET_TARRAY_REF(UMaterialExpression*,Z_Param_Out_Expressions);
	P_GET_OBJECT(UObject,Z_Param_MaterialOrFunction);
	P_FINISH;
	P_NATIVE_BEGIN;
	UParameterRenamerLiteBPLibrary::CommitOnlySelectedExpressionsRenaming(Z_Param_Out_Expressions,Z_Param_MaterialOrFunction);
	P_NATIVE_END;
}
// End Class UParameterRenamerLiteBPLibrary Function CommitOnlySelectedExpressionsRenaming

// Begin Class UParameterRenamerLiteBPLibrary Function CommitRenaming
struct Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitRenaming_Statics
{
	struct ParameterRenamerLiteBPLibrary_eventCommitRenaming_Parms
	{
		UObject* MaterialOrFunction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ParameterRenamerLite|Commit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Commits the renaming changes to the material or material function.\n\x09 * @param MaterialOrFunction If parameter is none it will use global Rename Manager (shared history)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ParameterRenamerLiteBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Commits the renaming changes to the material or material function.\n@param MaterialOrFunction If parameter is none it will use global Rename Manager (shared history)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOrFunction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitRenaming_Statics::NewProp_MaterialOrFunction = { "MaterialOrFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventCommitRenaming_Parms, MaterialOrFunction), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitRenaming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitRenaming_Statics::NewProp_MaterialOrFunction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitRenaming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitRenaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParameterRenamerLiteBPLibrary, nullptr, "CommitRenaming", nullptr, nullptr, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitRenaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitRenaming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitRenaming_Statics::ParameterRenamerLiteBPLibrary_eventCommitRenaming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitRenaming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitRenaming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitRenaming_Statics::ParameterRenamerLiteBPLibrary_eventCommitRenaming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitRenaming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitRenaming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParameterRenamerLiteBPLibrary::execCommitRenaming)
{
	P_GET_OBJECT(UObject,Z_Param_MaterialOrFunction);
	P_FINISH;
	P_NATIVE_BEGIN;
	UParameterRenamerLiteBPLibrary::CommitRenaming(Z_Param_MaterialOrFunction);
	P_NATIVE_END;
}
// End Class UParameterRenamerLiteBPLibrary Function CommitRenaming

// Begin Class UParameterRenamerLiteBPLibrary Function GetMaterialParametersExpressions
struct Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_GetMaterialParametersExpressions_Statics
{
	struct ParameterRenamerLiteBPLibrary_eventGetMaterialParametersExpressions_Parms
	{
		UObject* MaterialOrFunction;
		TArray<FParameterExpressionInfo> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ParameterRenamerLite|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to get all parameter expressions with their names\n" },
#endif
		{ "ModuleRelativePath", "Public/ParameterRenamerLiteBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to get all parameter expressions with their names" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOrFunction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_GetMaterialParametersExpressions_Statics::NewProp_MaterialOrFunction = { "MaterialOrFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventGetMaterialParametersExpressions_Parms, MaterialOrFunction), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_GetMaterialParametersExpressions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FParameterExpressionInfo, METADATA_PARAMS(0, nullptr) }; // 544556203
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_GetMaterialParametersExpressions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventGetMaterialParametersExpressions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 544556203
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_GetMaterialParametersExpressions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_GetMaterialParametersExpressions_Statics::NewProp_MaterialOrFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_GetMaterialParametersExpressions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_GetMaterialParametersExpressions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_GetMaterialParametersExpressions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_GetMaterialParametersExpressions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParameterRenamerLiteBPLibrary, nullptr, "GetMaterialParametersExpressions", nullptr, nullptr, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_GetMaterialParametersExpressions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_GetMaterialParametersExpressions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_GetMaterialParametersExpressions_Statics::ParameterRenamerLiteBPLibrary_eventGetMaterialParametersExpressions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_GetMaterialParametersExpressions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_GetMaterialParametersExpressions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_GetMaterialParametersExpressions_Statics::ParameterRenamerLiteBPLibrary_eventGetMaterialParametersExpressions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_GetMaterialParametersExpressions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_GetMaterialParametersExpressions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParameterRenamerLiteBPLibrary::execGetMaterialParametersExpressions)
{
	P_GET_OBJECT(UObject,Z_Param_MaterialOrFunction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FParameterExpressionInfo>*)Z_Param__Result=UParameterRenamerLiteBPLibrary::GetMaterialParametersExpressions(Z_Param_MaterialOrFunction);
	P_NATIVE_END;
}
// End Class UParameterRenamerLiteBPLibrary Function GetMaterialParametersExpressions

// Begin Class UParameterRenamerLiteBPLibrary Function PreviewSelectedParameterRenames
struct Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics
{
	struct ParameterRenamerLiteBPLibrary_eventPreviewSelectedParameterRenames_Parms
	{
		TArray<UMaterialExpression*> Expressions;
		UObject* MaterialOrFunction;
		TArray<FParameterRenamePreview> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ParameterRenamerLite|Preview" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns an array of preview data for each parameter in the given array.\n\x09 * Each element contains the original name and the new name.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ParameterRenamerLiteBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns an array of preview data for each parameter in the given array.\nEach element contains the original name and the new name." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expressions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Expressions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Expressions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOrFunction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics::NewProp_Expressions_Inner = { "Expressions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics::NewProp_Expressions = { "Expressions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventPreviewSelectedParameterRenames_Parms, Expressions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expressions_MetaData), NewProp_Expressions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics::NewProp_MaterialOrFunction = { "MaterialOrFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventPreviewSelectedParameterRenames_Parms, MaterialOrFunction), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FParameterRenamePreview, METADATA_PARAMS(0, nullptr) }; // 705526024
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParameterRenamerLiteBPLibrary_eventPreviewSelectedParameterRenames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 705526024
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics::NewProp_Expressions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics::NewProp_Expressions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics::NewProp_MaterialOrFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParameterRenamerLiteBPLibrary, nullptr, "PreviewSelectedParameterRenames", nullptr, nullptr, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics::ParameterRenamerLiteBPLibrary_eventPreviewSelectedParameterRenames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics::ParameterRenamerLiteBPLibrary_eventPreviewSelectedParameterRenames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParameterRenamerLiteBPLibrary::execPreviewSelectedParameterRenames)
{
	P_GET_TARRAY_REF(UMaterialExpression*,Z_Param_Out_Expressions);
	P_GET_OBJECT(UObject,Z_Param_MaterialOrFunction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FParameterRenamePreview>*)Z_Param__Result=UParameterRenamerLiteBPLibrary::PreviewSelectedParameterRenames(Z_Param_Out_Expressions,Z_Param_MaterialOrFunction);
	P_NATIVE_END;
}
// End Class UParameterRenamerLiteBPLibrary Function PreviewSelectedParameterRenames

// Begin Class UParameterRenamerLiteBPLibrary
void UParameterRenamerLiteBPLibrary::StaticRegisterNativesUParameterRenamerLiteBPLibrary()
{
	UClass* Class = UParameterRenamerLiteBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddFindAndReplaceModifier", &UParameterRenamerLiteBPLibrary::execAddFindAndReplaceModifier },
		{ "AddGroupFindAndReplaceModifier", &UParameterRenamerLiteBPLibrary::execAddGroupFindAndReplaceModifier },
		{ "AddGroupPostfixModifier", &UParameterRenamerLiteBPLibrary::execAddGroupPostfixModifier },
		{ "AddGroupPrefixModifier", &UParameterRenamerLiteBPLibrary::execAddGroupPrefixModifier },
		{ "AddGroupReplaceAllModifier", &UParameterRenamerLiteBPLibrary::execAddGroupReplaceAllModifier },
		{ "AddPostfixModifier", &UParameterRenamerLiteBPLibrary::execAddPostfixModifier },
		{ "AddPrefixModifier", &UParameterRenamerLiteBPLibrary::execAddPrefixModifier },
		{ "AddReplaceAllModifier", &UParameterRenamerLiteBPLibrary::execAddReplaceAllModifier },
		{ "ClearAllCommands", &UParameterRenamerLiteBPLibrary::execClearAllCommands },
		{ "CommitOnlySelectedExpressionsRenaming", &UParameterRenamerLiteBPLibrary::execCommitOnlySelectedExpressionsRenaming },
		{ "CommitRenaming", &UParameterRenamerLiteBPLibrary::execCommitRenaming },
		{ "GetMaterialParametersExpressions", &UParameterRenamerLiteBPLibrary::execGetMaterialParametersExpressions },
		{ "PreviewSelectedParameterRenames", &UParameterRenamerLiteBPLibrary::execPreviewSelectedParameterRenames },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParameterRenamerLiteBPLibrary);
UClass* Z_Construct_UClass_UParameterRenamerLiteBPLibrary_NoRegister()
{
	return UParameterRenamerLiteBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UParameterRenamerLiteBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * UParameterRenamerLiteBPLibrary exposes functions to Blueprint\n * for adding rename modifiers and previewing/applying changes.\n */" },
#endif
		{ "IncludePath", "ParameterRenamerLiteBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ParameterRenamerLiteBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* UParameterRenamerLiteBPLibrary exposes functions to Blueprint\n* for adding rename modifiers and previewing/applying changes." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddFindAndReplaceModifier, "AddFindAndReplaceModifier" }, // 2424210158
		{ &Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupFindAndReplaceModifier, "AddGroupFindAndReplaceModifier" }, // 4223117307
		{ &Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPostfixModifier, "AddGroupPostfixModifier" }, // 2324681985
		{ &Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupPrefixModifier, "AddGroupPrefixModifier" }, // 3349873995
		{ &Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddGroupReplaceAllModifier, "AddGroupReplaceAllModifier" }, // 3941925374
		{ &Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPostfixModifier, "AddPostfixModifier" }, // 1119156034
		{ &Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddPrefixModifier, "AddPrefixModifier" }, // 3430068201
		{ &Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_AddReplaceAllModifier, "AddReplaceAllModifier" }, // 4182722839
		{ &Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_ClearAllCommands, "ClearAllCommands" }, // 3604246859
		{ &Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitOnlySelectedExpressionsRenaming, "CommitOnlySelectedExpressionsRenaming" }, // 2211582070
		{ &Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_CommitRenaming, "CommitRenaming" }, // 3472610045
		{ &Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_GetMaterialParametersExpressions, "GetMaterialParametersExpressions" }, // 4287697707
		{ &Z_Construct_UFunction_UParameterRenamerLiteBPLibrary_PreviewSelectedParameterRenames, "PreviewSelectedParameterRenames" }, // 3015871022
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParameterRenamerLiteBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParameterRenamerLiteBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MaterialParametersRenameLite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParameterRenamerLiteBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParameterRenamerLiteBPLibrary_Statics::ClassParams = {
	&UParameterRenamerLiteBPLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParameterRenamerLiteBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UParameterRenamerLiteBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParameterRenamerLiteBPLibrary()
{
	if (!Z_Registration_Info_UClass_UParameterRenamerLiteBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParameterRenamerLiteBPLibrary.OuterSingleton, Z_Construct_UClass_UParameterRenamerLiteBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParameterRenamerLiteBPLibrary.OuterSingleton;
}
template<> MATERIALPARAMETERSRENAMELITE_API UClass* StaticClass<UParameterRenamerLiteBPLibrary>()
{
	return UParameterRenamerLiteBPLibrary::StaticClass();
}
UParameterRenamerLiteBPLibrary::UParameterRenamerLiteBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParameterRenamerLiteBPLibrary);
UParameterRenamerLiteBPLibrary::~UParameterRenamerLiteBPLibrary() {}
// End Class UParameterRenamerLiteBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_DevelopingPlugins_Plugins_MaterialParametersRenameLite_Source_MaterialParametersRenameLite_Public_ParameterRenamerLiteBPLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FParameterExpressionInfo::StaticStruct, Z_Construct_UScriptStruct_FParameterExpressionInfo_Statics::NewStructOps, TEXT("ParameterExpressionInfo"), &Z_Registration_Info_UScriptStruct_ParameterExpressionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParameterExpressionInfo), 544556203U) },
		{ FParameterRenamePreview::StaticStruct, Z_Construct_UScriptStruct_FParameterRenamePreview_Statics::NewStructOps, TEXT("ParameterRenamePreview"), &Z_Registration_Info_UScriptStruct_ParameterRenamePreview, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParameterRenamePreview), 705526024U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParameterRenamerLiteBPLibrary, UParameterRenamerLiteBPLibrary::StaticClass, TEXT("UParameterRenamerLiteBPLibrary"), &Z_Registration_Info_UClass_UParameterRenamerLiteBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParameterRenamerLiteBPLibrary), 52692646U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_DevelopingPlugins_Plugins_MaterialParametersRenameLite_Source_MaterialParametersRenameLite_Public_ParameterRenamerLiteBPLibrary_h_2829093194(TEXT("/Script/MaterialParametersRenameLite"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_DevelopingPlugins_Plugins_MaterialParametersRenameLite_Source_MaterialParametersRenameLite_Public_ParameterRenamerLiteBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_DevelopingPlugins_Plugins_MaterialParametersRenameLite_Source_MaterialParametersRenameLite_Public_ParameterRenamerLiteBPLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_DevelopingPlugins_Plugins_MaterialParametersRenameLite_Source_MaterialParametersRenameLite_Public_ParameterRenamerLiteBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_DevelopingPlugins_Plugins_MaterialParametersRenameLite_Source_MaterialParametersRenameLite_Public_ParameterRenamerLiteBPLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
