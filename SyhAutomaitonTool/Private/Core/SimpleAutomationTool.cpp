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
	void Execute(uint32 InProtocolIndex, const FString& InJsonString)
	{
		if(InProtocolIndex != 0)
		{
			if (TSharedPtr<FAutoExecElements> AutoExecElement =
				FAutoExecElementsFactory::CreateAutomatedTask(InProtocolIndex, InJsonString))
			{
				if (AutoExecElement->Execute())
				{
					UE_LOG(SyhAutomaitonToolLog, Display, TEXT("Successful to execute [%i] protocol."), InProtocolIndex);
				}
				else
				{
					UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Fail to execute [%i] protocol."), InProtocolIndex);
				}
			}
		}
		else
		{
			UE_LOG(SyhAutomaitonToolLog, Warning, TEXT("Execute a empty command."));
		}
	}

	bool Init(TMultiMap<uint32, FString>& OutTaskCommand)
	{
		OutTaskCommand.Empty();
		FString CommandScriptName;

		//使用默认文件名或者自己提供文件名
		if (FParse::Value(FCommandLine::Get(), TEXT("-CommandScript="), CommandScriptName))
		{
			UE_LOG(SyhAutomaitonToolLog, Display, TEXT("-CommandScriptName = [%s]"), *CommandScriptName);
		}
		else
		{
			CommandScriptName = TEXT("CommandScript");
		}

		FString CommandScriptPath;
		bool bExistFile = false;

		//文件查找
		{
			TArray<FString> FoundFilePaths;
			IFileManager::Get().FindFilesRecursive(FoundFilePaths, *AutomatedExecutionPath::GetCommandPath(),
				TEXT("*.json"), true, false);

			for (auto& TempPath : FoundFilePaths)
			{
				FString TempFileName = FPaths::GetCleanFilename(TempPath);

				if (!TempFileName.RemoveFromEnd(TEXT(".json")))
				{
					//没有.json扩展名，跳过
					continue;
				}

				if (TempFileName.Equals(CommandScriptName))
				{
					bExistFile = true;//找到文件
					CommandScriptPath = TempPath;
					break;
				}
			}
		}

		//没有找到，拼接默认的路径与文件名
		if (CommandScriptPath.IsEmpty())
		{
			CommandScriptPath = AutomatedExecutionPath::GetCommandPath() / (CommandScriptName + TEXT(".json"));
		}

		if (bExistFile)
		{
			//脚本文件存在则反序列化到容器中，用于执行自动化命令
			FString CommandString;
			check(FFileHelper::LoadFileToString(CommandString, *CommandScriptPath));
			AutomationJson::DeserializeAllCommand(CommandString, OutTaskCommand);
			return OutTaskCommand.Num() > 0;
		}
		else
		{	
			//脚本文件不存在则序列化到文件中，展示Json格式
			FString CommandString;
			AutomationJson::SerializeAllCommand(CommandString);
			check(FFileHelper::SaveStringToFile(*CommandString, *CommandScriptPath));
			return false;
		}
	}

	void HandleTask(const TMultiMap<uint32, FString>& InTaskCommand)
	{
		for (auto& Temp : InTaskCommand)
		{
			Execute(Temp.Key, Temp.Value);
		}
	}

	void HandleTask(const FString& InTaskCommand)
	{
		uint32 Protocol =  (uint32)AutomationJson::StringToProtocol(InTaskCommand);

		Execute(Protocol, TEXT(""));
	}
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT