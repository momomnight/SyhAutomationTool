// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SimpleAutomatedToolCommon : ModuleRules
{
	public SimpleAutomatedToolCommon(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"SlateCore",
				"Slate",
				"Json",

				// ... add other public dependencies that you statically link with here ...
			}
			);
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Projects",
				"InputCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);

		PublicDependencyModuleNames.Add("SimpleOSS");
		PublicDependencyModuleNames.Add("SimpleHTTP");
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
