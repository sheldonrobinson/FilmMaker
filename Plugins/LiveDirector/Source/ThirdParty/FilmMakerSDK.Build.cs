// Copyright Epic Games, Inc. All Rights Reserved.
using UnrealBuildTool;
using System.IO;

public class FilmMakerSDK : ModuleRules
{
	public FilmMakerSDK(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;
		
		PublicDependencyModuleNames.AddRange(
            new string[]
            {
				"PiperTTS"
			}
			);


        PublicDefinitions.AddRange(new string[] { "UNNU_FM_SHARED=1" });
        // Add any include paths for the plugin
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "include"));
		
		// Add any import libraries or static libraries
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "lib", "unnufm.lib"));
			RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "unnufm.dll"), Path.Combine(ModuleDirectory, "bin", "unnufm.dll"));
		} else if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			string LibPath = Path.Combine(ModuleDirectory, "bin", "libunnufm.so");
			PublicAdditionalLibraries.Add(LibPath);
			RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "libunnufm.so"), LibPath);
		} else if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			string LibPath = Path.Combine(ModuleDirectory, "bin", "unnufm.dynlib");
			RuntimeDependencies.Add(LibPath);
			PublicAdditionalLibraries.Add(LibPath);
		}

	}
}
