// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"
class ILevelEditor;
class FLiveDirectorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
private:
	FDelegateHandle LevelEditorCreatedHandle;
	void InitializeAfterEditorIsReady(TSharedPtr<ILevelEditor, ESPMode::ThreadSafe> LevelEditor);
	bool bEditorReady = false;
};
