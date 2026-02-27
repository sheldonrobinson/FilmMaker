// Copyright Epic Games, Inc. All Rights Reserved.
using UnrealBuildTool;
using System.IO;

public class PiperTTS : ModuleRules
{
	public PiperTTS(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;
		
		PublicDependencyModuleNames.AddRange(
            new string[]
            {
				"PiperLib",
				"KissFFT",
				"SoundTouch"
			}
			);

        PublicDefinitions.AddRange(new string[] { "UNNU_TTS_SHARED=1" });
        // Add any include paths for the plugin
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "include"));

        // Add any import libraries or static libraries
        if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "lib", "unnutts.lib"));
			RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "unnutts.dll"), Path.Combine(ModuleDirectory, "bin", "unnutts.dll"));
		} else if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			string LibPath = Path.Combine(ModuleDirectory, "bin", "libunnutts.so");
			PublicAdditionalLibraries.Add(LibPath);
			RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "libunnutts.so"), LibPath);
		} else if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			string LibPath = Path.Combine(ModuleDirectory, "bin", "unnutts.dynlib");
			RuntimeDependencies.Add(LibPath);
			PublicAdditionalLibraries.Add(LibPath);
		}

	}
}
