#pragma once

#include "CoreMinimal.h"
#include "Templates/SharedPointer.h"
#include "Containers/Array.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "Materials/Material.h"
#include "Materials/MaterialFunction.h"
#include "Materials/MaterialExpression.h"
#include "Materials/MaterialInstance.h"
#include "Materials/MaterialExpressionMaterialFunctionCall.h"

#include "ParameterRenamerLiteBPLibrary.generated.h"

///////////////////////////////////////////////////////////////////////////////
// Renaming Commands
///////////////////////////////////////////////////////////////////////////////

/*
 * Interface for renaming commands.
 * Each command takes an input FName and returns a new FName.
 */
class IMaterialParamRenameCommand
{
public:
	virtual ~IMaterialParamRenameCommand();
	virtual FName Execute(const FName& OriginalName) = 0;
	FString Name = "Not named modifier...";
};

/*
 * Command to add a prefix.
 */
class FMaterialParamPrefixCommand final : public IMaterialParamRenameCommand
{
public:
	explicit FMaterialParamPrefixCommand(const FString& InPrefix);

	virtual FName Execute(const FName& OriginalName) override;

private:
	FString Prefix;
};

/*
 * Command to add a postfix.
 */
class FMaterialParamPostfixCommand final : public IMaterialParamRenameCommand
{
public:
	explicit FMaterialParamPostfixCommand(const FString& InPostfix);

	virtual FName Execute(const FName& OriginalName) override;

private:
	FString Postfix;
};

/*
 * Command to perform a find-and-replace operation.
 * 
 */
class FMaterialParamFindReplaceCommand final : public IMaterialParamRenameCommand
{
public:
	FMaterialParamFindReplaceCommand(const FString& InFind, const FString& InReplace);

	virtual FName Execute(const FName& OriginalName) override;

private:
	FString FindStr;
	FString ReplaceStr;
};

/*
 * Command to replace full string
 * 
 */
class FMaterialParamReplaceAllCommand final : public IMaterialParamRenameCommand
{
public:
	explicit FMaterialParamReplaceAllCommand(const FString& InReplace);

	virtual FName Execute(const FName& OriginalName) override;

private:
	FString ReplaceStr;
};

///////////////////////////////////////////////////////////////////////////////
// Batch Renamer Manager
///////////////////////////////////////////////////////////////////////////////

/*
 * Core helper class that manages a list of renaming commands.
 * It is split into two groups: one for parameter names and one for parameter groups.
 *
 * This class is non-UObject so that it can be a lightweight helper used by the Blueprint library.
 */
class FMaterialParameterBatchRenamer
{
public:
	// Adds a command that modifies parameter names.
	void AddParamCommand(const TSharedPtr<IMaterialParamRenameCommand>& Command);

	// Adds a command that modifies parameter groups.
	void AddGroupCommand(const TSharedPtr<IMaterialParamRenameCommand>& Command);

	// Preview the transformation for a parameter name by applying all commands sequentially.
	FName PreviewParamRename(const FName& OriginalName) const;

	// Preview the transformation for a parameter group.
	FName PreviewGroupRename(const FName& OriginalGroup) const;

	// Apply the new parameter names to all expressions.
	void CommitRenameParams(TConstArrayView<TObjectPtr<UMaterialExpression>> Expressions) const;

	// Apply the new group names to all expressions.
	void CommitRenameGroups(TConstArrayView<TObjectPtr<UMaterialExpression>> Expressions) const;

	// Clears all the stored commands.
	void ClearCommands();

public:
	using FTArraySharedPtrRenameCommands = TArray<TSharedPtr<IMaterialParamRenameCommand>>;
	
	FTArraySharedPtrRenameCommands ParamCommands;
	FTArraySharedPtrRenameCommands GroupCommands;
};

///////////////////////////////////////////////////////////////////////////////
// Data Structures
///////////////////////////////////////////////////////////////////////////////

USTRUCT(BlueprintType)
struct FParameterExpressionInfo
{
	GENERATED_BODY()

	// Pointer to the parameter expression
	UPROPERTY(BlueprintReadOnly, Category = "ParameterRenamerLite")
	TObjectPtr<UMaterialExpression> Expression;

	// Parameter name
	UPROPERTY(BlueprintReadOnly, Category = "ParameterRenamerLite")
	FName ParameterName;
};

USTRUCT(BlueprintType)
struct FParameterRenamePreview
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "ParameterRenamerLite")
	FName OriginalName;

	UPROPERTY(BlueprintReadOnly, Category = "ParameterRenamerLite")
	FName NewName;
};

///////////////////////////////////////////////////////////////////////////////
// Blueprint Function Library
///////////////////////////////////////////////////////////////////////////////

/*
 * UParameterRenamerLiteBPLibrary exposes functions to Blueprint
 * for adding rename modifiers and previewing/applying changes.
 */
UCLASS()
class UParameterRenamerLiteBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Returns the shared instance of the batch renamer for the given target asset.
	 * Each target (UMaterial or UMaterialFunction) gets its own renamer instance,
	 * so that concurrent or separate operations can be managed independently.
	 *
	 * @param MaterialOrFunction	The target asset for which renaming is being performed.
	 *                             If null, a global instance is returned.
	 * @return A shared pointer to the renamer instance.
	 *
	 * Note: This function is internal and is not exposed to Blueprint.
	 */
	static TSharedPtr<FMaterialParameterBatchRenamer> GetRenamer(UObject* MaterialOrFunction);

	// --- Parameter Name Commands ---

	// Adds a prefix modifier to parameter names.
	UFUNCTION(BlueprintCallable, Category = "ParameterRenamerLite|Param")
	static void AddPrefixModifier(const FString& Prefix, UObject* MaterialOrFunction);

	// Adds a postfix modifier to parameter names.
	UFUNCTION(BlueprintCallable, Category = "ParameterRenamerLite|Param")
	static void AddPostfixModifier(const FString& Postfix, UObject* MaterialOrFunction);

	// Adds a find-and-replace modifier to parameter names.
	UFUNCTION(BlueprintCallable, Category = "ParameterRenamerLite|Param")
	static void AddFindAndReplaceModifier(const FString& FindStr, const FString& ReplaceStr, UObject* MaterialOrFunction);

	// Adds a (replace all) modifier to parameter names
	UFUNCTION(BlueprintCallable, Category="ParameterRenamerLite|Param")
	static void AddReplaceAllModifier(const FString& Replace, UObject* MaterialOrFunction);

	// --- Parameter Group Commands ---

	// Adds a prefix modifier to parameter groups.
	UFUNCTION(BlueprintCallable, Category = "ParameterRenamerLite|Group")
	static void AddGroupPrefixModifier(const FString& Prefix, UObject* MaterialOrFunction);

	// Adds a postfix modifier to parameter groups.
	UFUNCTION(BlueprintCallable, Category = "ParameterRenamerLite|Group")
	static void AddGroupPostfixModifier(const FString& Postfix, UObject* MaterialOrFunction);

	// Adds a find-and-replace modifier to parameter groups.
	UFUNCTION(BlueprintCallable, Category = "ParameterRenamerLite|Group")
	static void AddGroupFindAndReplaceModifier(const FString& FindStr, const FString& ReplaceStr, UObject* MaterialOrFunction);

	// Adds a (replace all) modifier to parameter groups
	UFUNCTION(BlueprintCallable, Category="ParameterRenamerLite|Group")
	static void AddGroupReplaceAllModifier(const FString& Replace, UObject* MaterialOrFunction);
	
	// --- Preview Functions ---

	// Function to get all parameter expressions with their names
	UFUNCTION(BlueprintCallable, Category = "ParameterRenamerLite|Info")
	static TArray<FParameterExpressionInfo> GetMaterialParametersExpressions(UObject* MaterialOrFunction);

	/**
	 * Returns an array of preview data for each parameter in the given array.
	 * Each element contains the original name and the new name.
	 */
	UFUNCTION(BlueprintCallable, Category = "ParameterRenamerLite|Preview")
	static TArray<FParameterRenamePreview> PreviewSelectedParameterRenames(const TArray<UMaterialExpression*>& Expressions, UObject* MaterialOrFunction);
	
	// --- Commit Functions ---

	/**
	 * Commits the renaming changes to the material or material function.
	 * @param MaterialOrFunction If parameter is none it will use global Rename Manager (shared history)
	 */
	UFUNCTION(BlueprintCallable, Category = "ParameterRenamerLite|Commit")
	static void CommitRenaming(UObject* MaterialOrFunction);

	/**
	 * Commits the renaming changes only for the selected material expressions.
	 * @param Expressions Modify only selected expressions
	 * @param MaterialOrFunction If parameter is none it will use global Rename Manager (shared history)
	 */
	UFUNCTION(BlueprintCallable, Category = "ParameterRenamerLite|Commit")
	static void CommitOnlySelectedExpressionsRenaming(const TArray<UMaterialExpression*>& Expressions, UObject* MaterialOrFunction = nullptr);

	// Clears all renaming commands.
	UFUNCTION(BlueprintCallable, Category = "ParameterRenamerLite")
	static void ClearAllCommands(UObject* MaterialOrFunction);

private:
	// Map to manage separate renamer instances per asset.
	static TMap<TWeakObjectPtr<UObject>, TSharedPtr<FMaterialParameterBatchRenamer>> RenamerInstances;
};