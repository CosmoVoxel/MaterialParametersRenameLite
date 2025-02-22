// Copyright Epic Games, Inc. All Rights Reserved.

#include "MaterialParametersRenameLite.h"

#define LOCTEXT_NAMESPACE "FMaterialParametersRenameLiteModule"

void FMaterialParametersRenameLiteModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FMaterialParametersRenameLiteModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMaterialParametersRenameLiteModule, MaterialParametersRenameLite)