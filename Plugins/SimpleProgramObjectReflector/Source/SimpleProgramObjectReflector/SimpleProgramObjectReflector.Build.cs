// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SimpleProgramObjectReflector : ModuleRules
{
	public SimpleProgramObjectReflector(ReadOnlyTargetRules Target) : base(Target)
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
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Projects",
				"InputCore",
				"CoreUObject",
				"ToolMenus",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		if(Target.Type != TargetType.Program)
		{

            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                "EditorFramework",
                "UnrealEd",
                "Engine",
                }
                );
        }
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

		bUseRTTI = true;//dynamic_cast
	}
}
