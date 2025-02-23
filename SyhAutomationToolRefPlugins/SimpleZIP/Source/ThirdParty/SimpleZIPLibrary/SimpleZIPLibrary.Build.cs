// Copyright (C) RenZhai.2019.All Rights Reserved.

/* The following website explains how to use this set of plug-ins 
 * DocURL：			    https://renzhai.net/119.html            
 * Here's how to develop the current plug-in            
 * MarketplaceURL :     https://www.aboutcg.org/courseDetails/764/introduce            
 * If you want to learn more about the UE4 tutorial, please refer to:            
 * URL :				https://zhuanlan.zhihu.com/p/60117613            
 * If you want to learn about the series of tutorials and related plug-ins, you can follow my blog            
 * URL :				http://renzhai.net/            
 * If you want to know our next course arrangement, 
 * you can search the WeChat public house for your attention, then we will push a lot of technical articles.           
 * Sina blog            https://weibo.com/bzrz/profile?S=6cm7d0 // this blog hasn't been used for three or four years now.
 * Maybe you can re enable the first connection later 
 */
using System.IO;
using UnrealBuildTool;

public class SimpleZIPLibrary : ModuleRules
{
    public string ZIPProjectDirectory
    {
        get
        {
            return Path.GetFullPath(
                  Path.Combine(ModuleDirectory, "../../../../../")
            );
        }
    }

    private void CopyZIPDllAndLibToProjectBinaries(string Filepath, ReadOnlyTargetRules Target)
    {
		string BinariesDirectory = Path.Combine(
			   bTreatAsEngineModule ? EngineDirectory : ZIPProjectDirectory, "Binaries", Target.Platform.ToString());

		string Filename = Path.GetFileName(Filepath);

        if (!Directory.Exists(BinariesDirectory))
        {
            Directory.CreateDirectory(BinariesDirectory);
        }

        File.Copy(Filepath, Path.Combine(BinariesDirectory, Filename), true);

        RuntimeDependencies.Add(Path.Combine(BinariesDirectory, Filename));
    }

    public SimpleZIPLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			// Add the import library
			PublicSystemLibraryPaths.Add(Path.Combine(ModuleDirectory, "x64", "Release"));
			
			PublicAdditionalLibraries.Add("ZIP_SDK_LIBRARY.lib");

			// Delay-load the DLL, so we can load it from the right place first
			PublicDelayLoadDLLs.Add("ZIP_SDK_LIBRARY.dll");

            CopyZIPDllAndLibToProjectBinaries(Path.Combine(ModuleDirectory,"x64", "Release", "ZIP_SDK_LIBRARY.dll"),Target);
            CopyZIPDllAndLibToProjectBinaries(Path.Combine(ModuleDirectory,"x64", "Release", "ZIP_SDK_LIBRARY.lib"), Target);
        }
        else if (Target.Platform == UnrealTargetPlatform.Mac)
        {
          //  PublicDelayLoadDLLs.Add(Path.Combine(ModuleDirectory, "Mac", "Release", "libExampleLibrary.dylib"));
        }
        //else if (Target.Platform == UnrealTargetPlatform.Win32)
        //{
        //    // Add the import library
        //    PublicLibraryPaths.Add(Path.Combine(ModuleDirectory, "x32", "Release"));
        //    PublicAdditionalLibraries.Add("ZIP_SDK_LIBRARY.lib");

        //    // Delay-load the DLL, so we can load it from the right place first
        //    PublicDelayLoadDLLs.Add("ZIP_SDK_LIBRARY.dll");

        //    CopyZIPDllAndLibToProjectBinaries(Path.Combine(ModuleDirectory, "x32", "Release", "ZIP_SDK_LIBRARY.dll"), Target);
        //    CopyZIPDllAndLibToProjectBinaries(Path.Combine(ModuleDirectory, "x32", "Release", "ZIP_SDK_LIBRARY.lib"), Target);
        //}
    }
}
