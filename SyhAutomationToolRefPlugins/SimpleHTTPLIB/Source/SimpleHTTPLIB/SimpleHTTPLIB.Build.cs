// Copyright (C) RenZhai.2023.All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class SimpleHTTPLIB : ModuleRules
{
	public SimpleHTTPLIB(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private/httplib"));

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
				"OpenSSL", 
				"zlib",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

		PublicDefinitions.Add("CPPHTTPLIB_ZLIB_SUPPORT=1");

		if (Target.Platform != UnrealTargetPlatform.Android &&
			Target.Platform != UnrealTargetPlatform.IOS)
		{
			PublicDefinitions.Add("CPPHTTPLIB_OPENSSL_SUPPORT=1");
		}
	}
}
