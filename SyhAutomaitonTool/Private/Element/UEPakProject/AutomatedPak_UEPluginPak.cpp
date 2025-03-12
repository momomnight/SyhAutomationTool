#include "Element/UEPakProject/AutomatedPak_UEPluginPak.h"



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

FAutomatedCode_UE_Plugin_Packaging::FAutomatedCode_UE_Plugin_Packaging()
{
}

FAutomatedCode_UE_Plugin_Packaging::~FAutomatedCode_UE_Plugin_Packaging()
{
}

void FAutomatedCode_UE_Plugin_Packaging::Init()
{
}

bool FAutomatedCode_UE_Plugin_Packaging::BuildParameter(const FString& InJsonStr)
{
	return false;
}

bool FAutomatedCode_UE_Plugin_Packaging::BuildParameter()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	bool Result = true;
	Result &= GetValueFromCommandLine(OwnConfig::RelatedString::EngineDirKey, SelfConfig->EngineDir);
	Result &= ParseStrings(OwnConfig::RelatedString::PathOfUPluginToTargetKey, SelfConfig->PathOfUPluginToTarget, true);
	if (Result)
	{
		return true;
	}
	else
	{
		FLogPrint::PrintError(TEXT("build parameter"), GetCommandName<Self>());
		return false;
	}
}

bool FAutomatedCode_UE_Plugin_Packaging::Execute()
{
	//" cmd.exe /c ""C:/Program Files/Epic Games/UE_5.3/Engine/Build/BatchFiles/RunUAT.bat" BuildPlugin - Plugin = "C:/MyProgram/UE Project/test1/Plugins/TestAutomatedPakPlugin/TestAutomatedPakPlugin.uplugin" - Package = "C:/MyProgram/UE Project/PluginPakTest/TestAutomatedPakPlugin" - CreateSubFolder" -nocompile -nocompileuat ";
	return false;
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT