// Copyright Epic Games, Inc. All Rights Reserved.
using UnrealBuildTool;
using System.IO;

public class KissFFT : ModuleRules
{
	public KissFFT(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;
		
		// Add any include paths for the plugin
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "include"));
		
		// Add any import libraries or static libraries
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "lib", "kissfft-float-openmp.lib"));
			RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "kissfft-float-openmp.dll"), Path.Combine(ModuleDirectory, "bin", "kissfft-float-openmp.dll"));
		} else if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			string LibPath = Path.Combine(ModuleDirectory, "bin", "libkissfft-float-openmp.so");
			PublicAdditionalLibraries.Add(LibPath);
			RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "libkissfft-float-openmp.so"), LibPath);
		} else if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			string LibPath = Path.Combine(ModuleDirectory, "bin", "kissfft-float-openmp.dynlib");
			RuntimeDependencies.Add(LibPath);
			PublicAdditionalLibraries.Add(LibPath);
		}

	}
}
