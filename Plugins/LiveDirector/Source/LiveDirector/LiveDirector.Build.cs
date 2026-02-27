// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class LiveDirector : ModuleRules
{
	public LiveDirector(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		string ThirdPartyDirectory = Path.Combine(ModuleDirectory, "..", "ThirdParty");
		// Add any include paths for the plugin
		PrivateIncludePaths.Add(Path.Combine(ThirdPartyDirectory, "include"));
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
                "Engine",
                "GameplayTags",
				"CinematicRenderer"
            }
			);

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "AssetRegistry",
                "MetaHumanSequencer",
                "AnimGraphRuntime",
                "MotionWarping",
                "MotionTrajectory",
                "NavigationSystem",
                "LevelSequence",
                "LiveLink",
                "MovieRenderPipelineCore",
                "MovieRenderPipelineRenderPasses",
                "MovieRenderPipelineSettings",
                "MetaHumanPipelineCore",
                "MovieSceneTracks",
                "PoseSearch",
                "MovieScene",
                "MovieScenePoseSearchTracks",
                "MetaHumanCoreTech",
                "MetaHumanSpeech2Face",
                "MetaHumanLiveLinkSource",
                "MetaHumanLocalLiveLinkSource",
                "SignalProcessing",
                "FilmMakerSDK",
                "PiperTTS"
                
            }
			);


        // Add any import libraries or static libraries
		// if (Target.Platform == UnrealTargetPlatform.Win64)
		// {
			// PublicAdditionalLibraries.Add(Path.Combine(ThirdPartyDirectory, "lib", "unnufm.lib"));
			// RuntimeDependencies.Add(Path.Combine("$(BinaryOutputDir)", "unnufm.dll"), Path.Combine(ThirdPartyDirectory, "bin", "unnufm.dll"));
		// } else if (Target.Platform == UnrealTargetPlatform.Linux)
		// {
			// string LibPath = Path.Combine(ThirdPartyDirectory, "bin", "libunnufm.so");
			// PublicAdditionalLibraries.Add(LibPath);
			// RuntimeDependencies.Add(Path.Combine("$(BinaryOutputDir)", "libunnufm.so"), LibPath);
		// } else if (Target.Platform == UnrealTargetPlatform.Mac)
		// {
			// string LibPath = Path.Combine(ThirdPartyDirectory, "bin", "unnufm.dynlib");
			// RuntimeDependencies.Add(LibPath);
			// PublicAdditionalLibraries.Add(LibPath);
		// }

		// string DestPath = Path.Combine("$(TargetOutputDir)", "unnufm.dll");
		// string SrcPath = Path.Combine(ThirdPartyDirectory, "bin", "unnufm.dll");
        // PostBuildSteps.Add(string.Format("echo Copying {0} to {1}", SrcPath, DestPath));
        // PostBuildSteps.Add(string.Format("xcopy /y /i /v \"{0}\" \"{1}\" 1>nul", SrcPath, DestPath));
    }
}
