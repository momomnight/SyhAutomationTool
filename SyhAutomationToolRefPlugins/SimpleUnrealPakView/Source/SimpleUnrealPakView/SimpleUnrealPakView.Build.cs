// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SimpleUnrealPakView : ModuleRules
{
    //public string ProjectDirectory
    //{
    //    get
    //    {
    //        return Path.GetFullPath(Path.Combine(ModuleDirectory, "../../../../"));//项目路径
    //    }
    //}

    //private void CopyToPluginsResources(string FilePathName, ReadOnlyTargetRules Target)
    //{
    //    string PluginsDirectory = Path.Combine(ProjectDirectory, "Plugins", "SimpleUnrealPakView", "Resources");
    //    string Filename = Path.GetFileName(FilePathName);

    //    if (!Directory.Exists(PluginsDirectory))
    //    {
    //        Directory.CreateDirectory(PluginsDirectory);
    //    }

    //    string ProjectFileFullName = Path.Combine(PluginsDirectory, Filename);
    //    if (!File.Exists(ProjectFileFullName))
    //    {
    //        File.Copy(FilePathName, ProjectFileFullName, true);
    //    }

    //    RuntimeDependencies.Add(ProjectFileFullName);
    //}

    public SimpleUnrealPakView(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
	//	bUsePrecompiled = true;
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
				"Engine",
				"UMG",
                "Slate",
                "SlateCore",
                "SimpleHotPak",
                "ProceduralMeshComponent",
				"DesktopPlatform",
				"SimpleSlateExtend"
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

    }
}
