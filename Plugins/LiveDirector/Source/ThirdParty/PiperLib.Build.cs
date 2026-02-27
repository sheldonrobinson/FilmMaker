// Copyright Epic Games, Inc. All Rights Reserved.
using UnrealBuildTool;
using System.IO;

public class PiperLib : ModuleRules
{
	public PiperLib(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;
		
		PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "OnnxRuntime"
			}
			);
		
		// Add any include paths for the plugin
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "include","piper"));
		
		// Add any import libraries or static libraries
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "lib", "piper.lib"));
			RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "piper.dll"), Path.Combine(ModuleDirectory, "bin", "piper.dll"));
		} else if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			string LibPath = Path.Combine(ModuleDirectory, "bin", "libpiper.so");
			PublicAdditionalLibraries.Add(LibPath);
			RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "libpiper.so"), LibPath);
		} else if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			string LibPath = Path.Combine(ModuleDirectory, "bin", "piper.dynlib");
			RuntimeDependencies.Add(LibPath);
			PublicAdditionalLibraries.Add(LibPath);
		}

	}
}
