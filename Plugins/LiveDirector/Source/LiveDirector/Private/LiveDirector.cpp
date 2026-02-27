// Copyright Epic Games, Inc. All Rights Reserved.

#include "LiveDirector.h"
#include "LevelEditor.h"

#define LOCTEXT_NAMESPACE "FLiveDirectorModule"

void FLiveDirectorModule::StartupModule()
{
	
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	if (!IsRunningCommandlet() && GIsEditor)
	{
		// FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");

		// Store the handle so we can unbind it later
		// LevelEditorCreatedHandle = LevelEditorModule.OnLevelEditorCreated().AddRaw(this, &FLiveDirectorModule::InitializeAfterEditorIsReady);
	} else {
		UE_LOG(LogTemp, Warning, TEXT("LiveDirector module loaded in non-editor context. Editor-specific functionality will be disabled."));
	}
}

void FLiveDirectorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
		// Check if the module is still loaded before trying to access its delegates
	if (FModuleManager::Get().IsModuleLoaded("LevelEditor"))
	{
		// FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>("LevelEditor");

		// Unbind using the stored handle
		// LevelEditorModule.OnLevelEditorCreated().Remove(LevelEditorCreatedHandle);
	}
	
	// Reset the handle for safety
	// LevelEditorCreatedHandle.Reset();
}

void FLiveDirectorModule::InitializeAfterEditorIsReady(TSharedPtr<ILevelEditor, ESPMode::ThreadSafe> LevelEditor)
{
	// This function will be called once the Level Editor is fully initialized and ready
	// You can perform any necessary setup here that requires the editor to be ready
	bEditorReady = true;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FLiveDirectorModule, LiveDirector)
