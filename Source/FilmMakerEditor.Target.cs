// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class FilmMakerEditorTarget : TargetRules
{
	public FilmMakerEditorTarget( TargetInfo Target) : base(Target)
	{
        Type = TargetType.Editor;
		bCompileAgainstEditor = true;
		DefaultBuildSettings = BuildSettingsVersion.V6;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_7;
		ExtraModuleNames.AddRange(new string [] {"UELibrary", "FilmMaker"});
    }
}
