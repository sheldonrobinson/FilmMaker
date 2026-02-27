// Copyright Epic Games, Inc. All Rights Reserved.
using UnrealBuildTool;
using System.IO;

public class MRQRingBufferSDK : ModuleRules
{
	public MRQRingBufferSDK(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;
		
		// Add any include paths for the plugin
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "include"));
		
		// Add any import libraries or static libraries
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "lib", "mrqringbuf.lib"));
			RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "mrqringbuf.dll"), Path.Combine(ModuleDirectory, "bin", "mrqringbuf.dll"));
		} else if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			string LibPath = Path.Combine(ModuleDirectory, "bin", "libmrqringbuf.so");
			PublicAdditionalLibraries.Add(LibPath);
			RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "libmrqringbuf.so"), LibPath);
		} else if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			string LibPath = Path.Combine(ModuleDirectory, "bin", "mrqringbuf.dynlib");
			RuntimeDependencies.Add(LibPath);
			PublicAdditionalLibraries.Add(LibPath);
		}

	}
}
