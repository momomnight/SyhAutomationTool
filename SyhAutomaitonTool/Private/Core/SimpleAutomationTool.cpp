#include "Core/SimpleAutomationTool.h"
#include "SyhAutomationToolLog.h"
#include "Misc/AutomatedExecutionPath.h"
#include "Json/AutomationJson.h"
#include "Element/Core/Interface/AutoExecElements.h"
#include "Element/AutoExecElementsFactory.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

namespace SimpleAutomationTool
{
	bool Init(TMultiMap<uint32, FString>& OutTaskCommand)
	{
		FString CommandScriptName;

		//通过提供的命令脚本名，查找对应的脚本，如果不存在则创建
		if (FParse::Value(FCommandLine::Get(), TEXT("-CommandScript="), CommandScriptName))
		{
			UE_LOG(SyhAutomaitonToolLog, Display, TEXT("-CommandScriptName = [%s]"), *CommandScriptName);
		}
		else
		{
			CommandScriptName = TEXT("CommandScript");
		}

		FString CommandScriptPath;
		
		//文件查找
		{
			TArray<FString> FoundFilePaths;
			IFileManager::Get().FindFilesRecursive(FoundFilePaths, *AutomatedExecutionPath::GetCommandPath(),
				TEXT("*.json"), true, false);

			for (auto& TempPath : FoundFilePaths)
			{
				FString TempFileName = FPaths::GetCleanFilename(TempPath);
				TempFileName.RemoveFromEnd(TEXT(".json"));
				if (TempFileName.Equals(CommandScriptName))
				{
					CommandScriptPath = TempPath;
					break;
				}
			}
		}

		
		if (!FPaths::FileExists(*CommandScriptPath))
		{
			//脚本文件不存在则序列化到文件中
			FString CommandString;
			AutomationJson::SerializeAllCommand(CommandString);
			check(FFileHelper::SaveStringToFile(*CommandString, *CommandScriptPath));

			return false;
		}
		else
		{	
			//脚本文件存在则反序列化到容器中
			FString CommandString;
			check(FFileHelper::LoadFileToString(CommandString, *CommandScriptPath));
			AutomationJson::DeserializeAllCommand(CommandString, OutTaskCommand);

			return true;
		}


	}
	void HandleTask(const TMultiMap<uint32, FString>& InTaskCommand)
	{
		for (auto& Temp : InTaskCommand)
		{
			if (TSharedPtr<FAutoExecElements> AutoExecElement = 
				FAutoExecElementsFactory::CreateAutomatedTask(Temp.Key, Temp.Value))
			{
				if (AutoExecElement->Execute())
				{
					UE_LOG(SyhAutomaitonToolLog, Display, TEXT("Successful to execute [%i] protocol."), Temp.Key);
				}
				else
				{
					UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Fail to execute [%i] protocol."), Temp.Key);
				}
			}
		}
	}
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT