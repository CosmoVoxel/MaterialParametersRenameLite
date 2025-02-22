// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ParameterRenamerLiteBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialExpression;
class UObject;
struct FParameterExpressionInfo;
struct FParameterRenamePreview;
#ifdef MATERIALPARAMETERSRENAMELITE_ParameterRenamerLiteBPLibrary_generated_h
#error "ParameterRenamerLiteBPLibrary.generated.h already included, missing '#pragma once' in ParameterRenamerLiteBPLibrary.h"
#endif
#define MATERIALPARAMETERSRENAMELITE_ParameterRenamerLiteBPLibrary_generated_h

#define FID_Unreal_Engine_5_Projects_DevelopingPlugins_Plugins_MaterialParametersRenameLite_Source_MaterialParametersRenameLite_Public_ParameterRenamerLiteBPLibrary_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParameterExpressionInfo_Statics; \
	MATERIALPARAMETERSRENAMELITE_API static class UScriptStruct* StaticStruct();


template<> MATERIALPARAMETERSRENAMELITE_API UScriptStruct* StaticStruct<struct FParameterExpressionInfo>();

#define FID_Unreal_Engine_5_Projects_DevelopingPlugins_Plugins_MaterialParametersRenameLite_Source_MaterialParametersRenameLite_Public_ParameterRenamerLiteBPLibrary_h_154_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParameterRenamePreview_Statics; \
	MATERIALPARAMETERSRENAMELITE_API static class UScriptStruct* StaticStruct();


template<> MATERIALPARAMETERSRENAMELITE_API UScriptStruct* StaticStruct<struct FParameterRenamePreview>();

#define FID_Unreal_Engine_5_Projects_DevelopingPlugins_Plugins_MaterialParametersRenameLite_Source_MaterialParametersRenameLite_Public_ParameterRenamerLiteBPLibrary_h_174_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearAllCommands); \
	DECLARE_FUNCTION(execCommitOnlySelectedExpressionsRenaming); \
	DECLARE_FUNCTION(execCommitRenaming); \
	DECLARE_FUNCTION(execPreviewSelectedParameterRenames); \
	DECLARE_FUNCTION(execGetMaterialParametersExpressions); \
	DECLARE_FUNCTION(execAddGroupReplaceAllModifier); \
	DECLARE_FUNCTION(execAddGroupFindAndReplaceModifier); \
	DECLARE_FUNCTION(execAddGroupPostfixModifier); \
	DECLARE_FUNCTION(execAddGroupPrefixModifier); \
	DECLARE_FUNCTION(execAddReplaceAllModifier); \
	DECLARE_FUNCTION(execAddFindAndReplaceModifier); \
	DECLARE_FUNCTION(execAddPostfixModifier); \
	DECLARE_FUNCTION(execAddPrefixModifier);


#define FID_Unreal_Engine_5_Projects_DevelopingPlugins_Plugins_MaterialParametersRenameLite_Source_MaterialParametersRenameLite_Public_ParameterRenamerLiteBPLibrary_h_174_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParameterRenamerLiteBPLibrary(); \
	friend struct Z_Construct_UClass_UParameterRenamerLiteBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UParameterRenamerLiteBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MaterialParametersRenameLite"), NO_API) \
	DECLARE_SERIALIZER(UParameterRenamerLiteBPLibrary)


#define FID_Unreal_Engine_5_Projects_DevelopingPlugins_Plugins_MaterialParametersRenameLite_Source_MaterialParametersRenameLite_Public_ParameterRenamerLiteBPLibrary_h_174_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParameterRenamerLiteBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParameterRenamerLiteBPLibrary(UParameterRenamerLiteBPLibrary&&); \
	UParameterRenamerLiteBPLibrary(const UParameterRenamerLiteBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParameterRenamerLiteBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParameterRenamerLiteBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParameterRenamerLiteBPLibrary) \
	NO_API virtual ~UParameterRenamerLiteBPLibrary();


#define FID_Unreal_Engine_5_Projects_DevelopingPlugins_Plugins_MaterialParametersRenameLite_Source_MaterialParametersRenameLite_Public_ParameterRenamerLiteBPLibrary_h_171_PROLOG
#define FID_Unreal_Engine_5_Projects_DevelopingPlugins_Plugins_MaterialParametersRenameLite_Source_MaterialParametersRenameLite_Public_ParameterRenamerLiteBPLibrary_h_174_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_5_Projects_DevelopingPlugins_Plugins_MaterialParametersRenameLite_Source_MaterialParametersRenameLite_Public_ParameterRenamerLiteBPLibrary_h_174_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_5_Projects_DevelopingPlugins_Plugins_MaterialParametersRenameLite_Source_MaterialParametersRenameLite_Public_ParameterRenamerLiteBPLibrary_h_174_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_5_Projects_DevelopingPlugins_Plugins_MaterialParametersRenameLite_Source_MaterialParametersRenameLite_Public_ParameterRenamerLiteBPLibrary_h_174_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MATERIALPARAMETERSRENAMELITE_API UClass* StaticClass<class UParameterRenamerLiteBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_5_Projects_DevelopingPlugins_Plugins_MaterialParametersRenameLite_Source_MaterialParametersRenameLite_Public_ParameterRenamerLiteBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
