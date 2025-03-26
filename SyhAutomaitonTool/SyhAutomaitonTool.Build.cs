// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SyhAutomaitonTool : ModuleRules
{
	public SyhAutomaitonTool(ReadOnlyTargetRules Target) : base(Target)
	{
		PublicIncludePathModuleNames.Add("Launch");
		PrivateDependencyModuleNames.Add("Core");
		PrivateDependencyModuleNames.Add("Projects");
		PrivateDependencyModuleNames.Add("ApplicationCore");
		PrivateDependencyModuleNames.Add("Json");
		// to link with CoreUObject module:
		PrivateDependencyModuleNames.Add("CoreUObject");
		//PrivateDependencyModuleNames.Add("Engine");
		PrivateDependencyModuleNames.Add("SimpleNetChannel");
		PrivateDependencyModuleNames.Add("SimpleHTTPLIB");
		PrivateDependencyModuleNames.Add("SimpleOSS");
		PrivateDependencyModuleNames.Add("SimpleHTTP");
		PrivateDependencyModuleNames.Add("SimpleConfig");
		// to enable tracing:
		// AppendStringToPublicDefinition("UE_TRACE_ENABLED", "1");

		// to enable LLM tracing:
		// GlobalDefinitions.Add("LLM_ENABLED_IN_CONFIG=1");
		// GlobalDefinitions.Add("UE_MEMORY_TAGS_TRACE_ENABLED=1");
	}
}
