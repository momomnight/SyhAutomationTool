// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SyhToolView : ModuleRules
{
	public SyhToolView(ReadOnlyTargetRules Target) : base(Target)
	{
		PublicIncludePathModuleNames.Add("Launch");
		PrivateDependencyModuleNames.Add("Core");

		PrivateDependencyModuleNames.Add("CoreUObject");
		PrivateDependencyModuleNames.Add("ApplicationCore");

		PrivateDependencyModuleNames.Add("StandaloneRenderer");
		PrivateDependencyModuleNames.Add("Slate");
		PrivateDependencyModuleNames.Add("SlateCore");

		PrivateDependencyModuleNames.Add("SourceCodeAccess");

		PrivateDependencyModuleNames.Add("Projects");

		if(Target.Platform == UnrealTargetPlatform.Mac)
		{
			PrivateDependencyModuleNames.Add("XCodeSourceCodeAccess");
			AddEngineThirdPartyPrivateStaticDependencies(Target, "CEF3");
		}
		else if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			PrivateDependencyModuleNames.Add("VisualStudioSourceCodeAccess");
		}


		// to link with CoreUObject module:


		// to enable tracing:
		// AppendStringToPublicDefinition("UE_TRACE_ENABLED", "1");

		// to enable LLM tracing:
		// GlobalDefinitions.Add("LLM_ENABLED_IN_CONFIG=1");
		// GlobalDefinitions.Add("UE_MEMORY_TAGS_TRACE_ENABLED=1");
	}
}
