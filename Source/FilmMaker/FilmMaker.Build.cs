// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FilmMaker : ModuleRules
{
	public FilmMaker(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        // PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput",  "UELibrary"});

        PublicDependencyModuleNames.AddRange(
			new string[] {
                "Core",
				"CoreUObject",
                "Engine",
                "InputCore",
				"LiveDirector",
                "FilmMakerSDK",
                "UELibrary"
                });
				
		PrivateDependencyModuleNames.AddRange(new string[] { });
		
		if (Target.bBuildEditor == true)
		{
			PrivateDependencyModuleNames.AddRange(new string[] {
					"SourceControl",
					"EditorFramework",
					"UnrealEd",
					"DesktopPlatform",
					"PIEPreviewDeviceProfileSelector",
			});
			
		} else {
			PrivateDependencyModuleNames.AddRange(new string[] { "ApplicationCore", "Launch"});
		}		
	}
}
