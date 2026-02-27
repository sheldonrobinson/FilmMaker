// Copyright Epic Games, Inc. All Rights Reserved.
using UnrealBuildTool;
using System.IO;

public class SoundTouch : ModuleRules
{
	public SoundTouch(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;
		
		// Add any include paths for the plugin
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "include"));
		
		// Add any import libraries or static libraries
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "lib", "SoundTouch.lib"));
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "lib", "SoundTouchDLL.lib"));
			RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "SoundTouch.dll"), Path.Combine(ModuleDirectory, "bin", "SoundTouch.dll"));
			RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "SoundTouchDLL.dll"), Path.Combine(ModuleDirectory, "bin", "SoundTouchDLL.dll"));
		} else if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			string LibPath = Path.Combine(ModuleDirectory, "bin", "libSoundTouch.so");
			PublicAdditionalLibraries.Add(LibPath);
			RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "libSoundTouch.so"), LibPath);
		} else if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			string LibPath = Path.Combine(ModuleDirectory, "bin", "SoundTouch.dynlib");
			RuntimeDependencies.Add(LibPath);
			PublicAdditionalLibraries.Add(LibPath);
		}

	}
}
