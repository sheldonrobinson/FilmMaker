// Copyright Epic Games, Inc. All Rights Reserved.
using UnrealBuildTool;
using System.IO;

public class OnnxRuntime : ModuleRules
{
	public OnnxRuntime(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;
		
		
		// Add any include paths for the plugin
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "include","onnxruntime"));
		
		// Add any import libraries or static libraries
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "lib", "onnxruntime.lib"));
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "lib", "onnxruntime_providers_shared.lib"));
			RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "onnxruntime.dll"), Path.Combine(ModuleDirectory, "bin", "onnxruntime.dll"));
			RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "onnxruntime_providers_shared.dll"), Path.Combine(ModuleDirectory, "bin", "onnxruntime_providers_shared.dll"));
		} else if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "bin", "libonnxruntime.so"));
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "bin", "libonnxruntime_providers_shared.so"));
			RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "libonnxruntime.so"), Path.Combine(ModuleDirectory, "bin", "libonnxruntime.so"));
			RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "libonnxruntime_providers_shared.so"), Path.Combine(ModuleDirectory, "bin", "libonnxruntime_providers_shared.so"));
		} else if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			string LibPath = Path.Combine(ModuleDirectory, "bin", "onnxruntime.dynlib");
			RuntimeDependencies.Add(LibPath);
			PublicAdditionalLibraries.Add(LibPath);
		}

	}
}
