#include "ParameterRenamerLiteBPLibrary.h"

#include "Materials/MaterialInstanceConstant.h"
#include "Materials/MaterialExpressionParameter.h"
#include "Materials/MaterialExpressionTextureSampleParameter.h"




IMaterialParamRenameCommand::~IMaterialParamRenameCommand() = default;

///////////////////////////////////////////////////////////////////////////////
// Renaming Commands
///////////////////////////////////////////////////////////////////////////////

FMaterialParamPrefixCommand::FMaterialParamPrefixCommand(const FString& InPrefix): Prefix(InPrefix)
{
	Name = "Add Prefix To Param";
}

FName FMaterialParamPrefixCommand::Execute(const FName& OriginalName)
{
	return FName(Prefix + OriginalName.ToString());
}

FMaterialParamPostfixCommand::FMaterialParamPostfixCommand(const FString& InPostfix): Postfix(InPostfix)
{
	Name = "Add Postfix To Param";
}

FName FMaterialParamPostfixCommand::Execute(const FName& OriginalName)
{
	return FName(OriginalName.ToString() + Postfix);
}

FMaterialParamFindReplaceCommand::FMaterialParamFindReplaceCommand(const FString& InFind, const FString& InReplace):
	FindStr(InFind), ReplaceStr(InReplace)
{
	Name = "Find And Replace Param";
}

FName FMaterialParamFindReplaceCommand::Execute(const FName& OriginalName)
{
	const FString ModifiedString = OriginalName.ToString().Replace(*FindStr, *ReplaceStr);
	return FName(ModifiedString);
}

FMaterialParamReplaceAllCommand::FMaterialParamReplaceAllCommand(const FString& InReplace)
{
	ReplaceStr = InReplace;
	Name = "Set New Name Param";
}

FName FMaterialParamReplaceAllCommand::Execute(const FName& OriginalName)
{
	return FName(ReplaceStr);
}

///////////////////////////////////////////////////////////////////////////////
// Batch Renamer Manager
///////////////////////////////////////////////////////////////////////////////
TMap<TWeakObjectPtr<UObject>, TSharedPtr<FMaterialParameterBatchRenamer>> UParameterRenamerLiteBPLibrary::RenamerInstances;

void FMaterialParameterBatchRenamer::AddParamCommand(const TSharedPtr<IMaterialParamRenameCommand>& Command)
{
	ParamCommands.Add(Command);
}

void FMaterialParameterBatchRenamer::AddGroupCommand(const TSharedPtr<IMaterialParamRenameCommand>& Command)
{
	GroupCommands.Add(Command);
}

FName FMaterialParameterBatchRenamer::PreviewParamRename(const FName& OriginalName) const
{
	FName Result = OriginalName;
	for (const TSharedPtr<IMaterialParamRenameCommand>& Command : ParamCommands)
	{
		Result = Command->Execute(Result);
	}
	return Result;
}

FName FMaterialParameterBatchRenamer::PreviewGroupRename(const FName& OriginalGroup) const
{
	FName Result = OriginalGroup;
	for (const TSharedPtr<IMaterialParamRenameCommand>& Command : GroupCommands)
	{
		Result = Command->Execute(Result);
	}
	return Result;
}

void FMaterialParameterBatchRenamer::CommitRenameParams(TConstArrayView<TObjectPtr<UMaterialExpression>> Expressions) const
{
	for (UMaterialExpression* Expression : Expressions)
	{
		if (!Expression)
		{
			continue;
		}

		FName OriginalName = Expression->GetParameterName();
		FName NewName = PreviewParamRename(OriginalName);

		if (Expression->IsA(UMaterialExpressionParameter::StaticClass()))
		{
			if (UMaterialExpressionParameter* Param = Cast<UMaterialExpressionParameter>(Expression))
			{
				Param->SetParameterName(NewName);
			}
		}
		else if (Expression->IsA(UMaterialExpressionTextureSampleParameter::StaticClass()))
		{
			if (UMaterialExpressionTextureSampleParameter* Param = Cast<UMaterialExpressionTextureSampleParameter>(
				Expression))
			{
				Param->SetParameterName(NewName);
			}
		}
	}
}

void FMaterialParameterBatchRenamer::CommitRenameGroups(TConstArrayView<TObjectPtr<UMaterialExpression>> Expressions) const
{
	for (UMaterialExpression* Expression : Expressions)
	{
		if (!Expression)
		{
			continue;
		}

		// Process only supported expression types.
		if (Expression->IsA(UMaterialExpressionParameter::StaticClass()))
		{
			if (UMaterialExpressionParameter* Param = Cast<UMaterialExpressionParameter>(Expression))
			{
				FName NewGroup = PreviewGroupRename(Param->Group);
				Param->Group = NewGroup;
			}
		}
		else if (Expression->IsA(UMaterialExpressionTextureSampleParameter::StaticClass()))
		{
			if (UMaterialExpressionTextureSampleParameter* Param = Cast<UMaterialExpressionTextureSampleParameter>(Expression))
			{
				FName NewGroup = PreviewGroupRename(Param->Group);
				Param->Group = NewGroup;
			}
		}
	}
}

void FMaterialParameterBatchRenamer::ClearCommands()
{
	ParamCommands.Empty();
	GroupCommands.Empty();
}

TSharedPtr<FMaterialParameterBatchRenamer> UParameterRenamerLiteBPLibrary::GetRenamer(UObject* MaterialOrFunction)
{
	// If no target is provided, return a global instance.
	if (!MaterialOrFunction)
	{
		static TSharedPtr<FMaterialParameterBatchRenamer> GlobalRenamer = MakeShared<FMaterialParameterBatchRenamer>();
		return GlobalRenamer;
	}

	// Use a weak pointer key so that if the target is destroyed the entry can be cleaned up.
	TWeakObjectPtr Key = MaterialOrFunction;

	// Check if an instance already exists for this target.
	if (RenamerInstances.Contains(Key))
	{
		return RenamerInstances[Key];
	}
	else
	{
		// Create a new renamer instance for this target.
		TSharedPtr<FMaterialParameterBatchRenamer> NewRenamer = MakeShared<FMaterialParameterBatchRenamer>();
		RenamerInstances.Add(Key, NewRenamer);
		return NewRenamer;
	}
}

///////////////////////////////////////////////////////////////////////////////
// Blueprint Function Library
///////////////////////////////////////////////////////////////////////////////

void UParameterRenamerLiteBPLibrary::AddPrefixModifier(const FString& Prefix, UObject* MaterialOrFunction)
{
	TSharedPtr<FMaterialParameterBatchRenamer> Renamer = GetRenamer(MaterialOrFunction);
	Renamer->AddParamCommand(MakeShared<FMaterialParamPrefixCommand>(Prefix));
}

void UParameterRenamerLiteBPLibrary::AddPostfixModifier(const FString& Postfix, UObject* MaterialOrFunction)
{
	TSharedPtr<FMaterialParameterBatchRenamer> Renamer = GetRenamer(MaterialOrFunction);
	Renamer->AddParamCommand(MakeShared<FMaterialParamPostfixCommand>(Postfix));
}

void UParameterRenamerLiteBPLibrary::AddFindAndReplaceModifier(const FString& FindStr, const FString& ReplaceStr, UObject* MaterialOrFunction)
{
	TSharedPtr<FMaterialParameterBatchRenamer> Renamer = GetRenamer(MaterialOrFunction);
	Renamer->AddParamCommand(MakeShared<FMaterialParamFindReplaceCommand>(FindStr, ReplaceStr));
}

void UParameterRenamerLiteBPLibrary::AddReplaceAllModifier(const FString& Replace, UObject* MaterialOrFunction)
{
	TSharedPtr<FMaterialParameterBatchRenamer> Renamer = GetRenamer(MaterialOrFunction);
	Renamer->AddParamCommand(MakeShared<FMaterialParamReplaceAllCommand>(Replace));
}

void UParameterRenamerLiteBPLibrary::AddGroupReplaceAllModifier(const FString& Replace, UObject* MaterialOrFunction)
{
	TSharedPtr<FMaterialParameterBatchRenamer> Renamer = GetRenamer(MaterialOrFunction);
	Renamer->AddGroupCommand(MakeShared<FMaterialParamReplaceAllCommand>(Replace));
}

void UParameterRenamerLiteBPLibrary::AddGroupPrefixModifier(const FString& Prefix, UObject* MaterialOrFunction)
{
	TSharedPtr<FMaterialParameterBatchRenamer> Renamer = GetRenamer(MaterialOrFunction);
	Renamer->AddGroupCommand(MakeShared<FMaterialParamPrefixCommand>(Prefix));
}

void UParameterRenamerLiteBPLibrary::AddGroupPostfixModifier(const FString& Postfix, UObject* MaterialOrFunction)
{
	TSharedPtr<FMaterialParameterBatchRenamer> Renamer = GetRenamer(MaterialOrFunction);
	Renamer->AddGroupCommand(MakeShared<FMaterialParamPostfixCommand>(Postfix));
}

void UParameterRenamerLiteBPLibrary::AddGroupFindAndReplaceModifier(const FString& FindStr, const FString& ReplaceStr, UObject* MaterialOrFunction)
{
	TSharedPtr<FMaterialParameterBatchRenamer> Renamer = GetRenamer(MaterialOrFunction);
	Renamer->AddGroupCommand(MakeShared<FMaterialParamFindReplaceCommand>(FindStr, ReplaceStr));
}

TArray<FParameterExpressionInfo> UParameterRenamerLiteBPLibrary::GetMaterialParametersExpressions(UObject* MaterialOrFunction)
{
	TArray<FParameterExpressionInfo> Results;

	if (!MaterialOrFunction)
	{
		return Results;
	}

	// Get expressions from either a material or material function
	TArray<UMaterialExpression*> Expressions;
	if (UMaterial* Material = Cast<UMaterial>(MaterialOrFunction))
	{
		Expressions = Material->GetExpressions();
	}
	else if (UMaterialFunction* MaterialFunction = Cast<UMaterialFunction>(MaterialOrFunction))
	{
		Expressions = MaterialFunction->GetExpressions();
	}
	else
	{
		return Results; // Not a valid material or function
	}

	// Iterate through expressions and collect parameter details
	for (int32 i = 0; i < Expressions.Num(); i++)
	{
		UMaterialExpression* Expression = Expressions[i];

		if (Expression && (Expression->IsA<UMaterialExpressionParameter>() || Expression->IsA<
			UMaterialExpressionTextureSampleParameter>()))
		{
			FParameterExpressionInfo Info;
			Info.Expression = Expression;
			Info.ParameterName = Expression->GetParameterName();

			Results.Add(Info);
		}
	}

	return Results;
}

TArray<FParameterRenamePreview> UParameterRenamerLiteBPLibrary::PreviewSelectedParameterRenames(
	const TArray<UMaterialExpression*>& Expressions, UObject* MaterialOrFunction)
{
	TArray<FParameterRenamePreview> PreviewResults;
	TSharedPtr<FMaterialParameterBatchRenamer> Renamer = GetRenamer(MaterialOrFunction);
	for (UMaterialExpression* Expression : Expressions)
	{
		if (!Expression)
		{
			continue;
		}
		FParameterRenamePreview Preview;
		Preview.OriginalName = Expression->GetParameterName();
		Preview.NewName = Renamer->PreviewParamRename(Preview.OriginalName);
		PreviewResults.Add(Preview);
	}
	return PreviewResults;
}

// Helper function: returns true if the given Material uses the specified MaterialFunction.
static bool UsesMaterialFunction(const UMaterial* Material, UMaterialFunction* MaterialFunction)
{
    if (!Material || !MaterialFunction)
    {
        return false;
    }
    
    // Iterate over the material's expressions to find any material function call that uses MaterialFunction.
    for (UMaterialExpression* Expression : Material->GetExpressions())
    {
        if (Expression && Expression->IsA(UMaterialExpressionMaterialFunctionCall::StaticClass()))
        {
            UMaterialExpressionMaterialFunctionCall* FunctionCall = Cast<UMaterialExpressionMaterialFunctionCall>(Expression);
            if (FunctionCall && FunctionCall->MaterialFunction == MaterialFunction)
            {
                return true;
            }
        }
    }
    return false;
}

void UParameterRenamerLiteBPLibrary::CommitRenaming(UObject* MaterialOrFunction)
{
    if (!MaterialOrFunction)
    {
        return;
    }

    TSharedPtr<FMaterialParameterBatchRenamer> Renamer = GetRenamer(MaterialOrFunction);

    if (UMaterial* Material = Cast<UMaterial>(MaterialOrFunction))
    {
        // Update parameter names and groups in the Material.
        Renamer->CommitRenameParams(Material->GetExpressions());
        Renamer->CommitRenameGroups(Material->GetExpressions());
        Material->PostEditChange();

        // Force refresh of all material instances that use this material.
    	for (TObjectIterator<UMaterialInstanceConstant> It; It; ++It)
    	{
    		UMaterialInstanceConstant* MIC = *It;
    		// MIC->Parent is a UMaterialInterface; cast it to UMaterial for comparison.
    		if (MIC && Cast<UMaterial>(MIC->Parent) == Material)
    		{
    			// Cast to UMaterialInstance so we can call the editor change functions.
    			if (UMaterialInstance* MI = Cast<UMaterialInstance>(MIC))
    			{
    				MI->PreEditChange(nullptr);
    				MI->PostEditChange();
    			}
    		}
    	}
    }
    else if (UMaterialFunction* MaterialFunction = Cast<UMaterialFunction>(MaterialOrFunction))
    {
        // Update parameter names and groups in the Material Function.
        Renamer->CommitRenameParams(MaterialFunction->GetExpressions());
        Renamer->CommitRenameGroups(MaterialFunction->GetExpressions());
        MaterialFunction->PostEditChange();

        // Force refresh any materials that use this Material Function.
        for (TObjectIterator<UMaterial> It; It; ++It)
        {
            UMaterial* Mat = *It;
            if (Mat && UsesMaterialFunction(Mat, MaterialFunction))
            {
                Mat->PreEditChange(nullptr);
                Mat->PostEditChange();
            }
        }
    }

    // Clear commands after committing.
    Renamer->ClearCommands();
}

void UParameterRenamerLiteBPLibrary::CommitOnlySelectedExpressionsRenaming(const TArray<UMaterialExpression*>& Expressions, UObject* MaterialOrFunction)
{
	if (Expressions.Num() == 0)
	{
		return;
	}

	// Convert to TObjectPtr array.
	TArray<TObjectPtr<UMaterialExpression>> ExpressionsConverted;
	for (UMaterialExpression* Expression : Expressions)
	{
		if (Expression)
		{
			ExpressionsConverted.Add(Expression);
		}
	}

	TSharedPtr<FMaterialParameterBatchRenamer> Renamer = GetRenamer(MaterialOrFunction);
	Renamer->CommitRenameParams(ExpressionsConverted);
	Renamer->CommitRenameGroups(ExpressionsConverted);

	// Collect unique outer assets and call PostEditChange.
	TSet<UObject*> AffectedAssets;
	for (UMaterialExpression* Expression : Expressions)
	{
		if (Expression && Expression->GetOuter())
		{
			AffectedAssets.Add(Expression->GetOuter());
		}
	}
	for (UObject* Asset : AffectedAssets)
	{
		if (UMaterial* Material = Cast<UMaterial>(Asset))
		{
			Material->PostEditChange();
		}
		else if (UMaterialFunction* MaterialFunction = Cast<UMaterialFunction>(Asset))
		{
			MaterialFunction->PostEditChange();
		}
	}

	Renamer->ClearCommands();
}

void UParameterRenamerLiteBPLibrary::ClearAllCommands(UObject* MaterialOrFunction)
{
	TSharedPtr<FMaterialParameterBatchRenamer> Renamer = GetRenamer(MaterialOrFunction);
	Renamer->ClearCommands();
}
