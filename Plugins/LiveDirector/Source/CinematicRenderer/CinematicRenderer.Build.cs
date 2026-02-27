// Some copyright should be here...

using UnrealBuildTool;

public class CinematicRenderer : ModuleRules
{
	public CinematicRenderer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MovieRenderPipelineCore",
            "MovieRenderPipelineRenderPasses",
            "MovieRenderPipelineSettings",
			"MovieRenderPipelineEditor",
            "MovieRenderPipelineMP4Encoder",
            "LevelSequence",
            "Json",
            "JsonUtilities"
        });

		PrivateDependencyModuleNames.AddRange(new string[] { });

	}
}
