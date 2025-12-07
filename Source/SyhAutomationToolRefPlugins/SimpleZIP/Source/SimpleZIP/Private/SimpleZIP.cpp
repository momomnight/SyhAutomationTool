// Copyright (C) RenZhai.2019.All Rights Reserved.

#include "SimpleZIP.h"
#include "Core.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "SimpleZIPLibrary/xx/ZIP_SDK_LIBRARY/ZIP_SDK_Library.h"

#define LOCTEXT_NAMESPACE "FSimpleZIPModule"

FString GetWindowsPlatform()
{
#if PLATFORM_32BITS
	return TEXT("Win32");
#elif PLATFORM_64BITS
	return TEXT("Win64"); 
#endif
}

FString GetSimpleWindowsPlatform()
{
#if PLATFORM_32BITS 
	return TEXT("x32"); 
#elif PLATFORM_64BITS
	return TEXT("x64");
#endif
}
void FSimpleZIPModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	// Get the base directory of this plugin
	FString BaseDir = IPluginManager::Get().FindPlugin("SimpleZIP")->GetBaseDir();

	// Add on the relative location of the third party dll and load it
	FString LibraryPath;

#if PLATFORM_WINDOWS

#if WITH_EDITOR
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("Source/ThirdParty/SimpleZIPLibrary")/ GetSimpleWindowsPlatform() / ("Release/ZIP_SDK_LIBRARY.dll"));
#endif

#if !WITH_EDITOR
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("../../Binaries") / GetWindowsPlatform() / ("ZIP_SDK_LIBRARY.dll"));
#endif

#elif PLATFORM_MAC
   // LibraryPath = FPaths::Combine(*BaseDir, TEXT("Source/ThirdParty/SimpleZIPLibrary/Mac/Release/ZIP_SDK_Library.dylib"));
#endif // PLATFORM_WINDOWS

	ExampleLibraryHandle = !LibraryPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*LibraryPath) : nullptr;

	if (ExampleLibraryHandle)
	{
		// Call the test function in the third party library that opens a message box
	//	ExampleLibraryFunction();
	}
	else
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ThirdPartyLibraryError", "Failed to load example third party library"));
	}
}

void FSimpleZIPModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	// Free the dll handle
	FPlatformProcess::FreeDllHandle(ExampleLibraryHandle);
	ExampleLibraryHandle = nullptr;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSimpleZIPModule, SimpleZIP)
