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
		FString CommandScriptRelativePath;

		//如果在Command目录和其子目录中存在同名，那就必须指明相对Command的路径，否则使用Command目录下的文件
		//可以不带文件后缀
		if (FParse::Value(FCommandLine::Get(), TEXT("-CommandScript="), CommandScriptRelativePath))
		{
			UE_LOG(SyhAutomaitonToolLog, Display, TEXT("-CommandScriptName = [%s]"), *CommandScriptRelativePath);
		}
		else
		{
			CommandScriptRelativePath = TEXT("CommandScript.json");
		}

		return Init(OutTaskCommand, CommandScriptRelativePath);
	}


	bool Init(TMultiMap<uint32, FString>& OutTaskCommand, const FString& InRelativePath)
	{
		if (InRelativePath.IsEmpty())
		{
			UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Need a non-empty relative path."));
			return false;
		}

		FString CommandScriptPath;

		if (InRelativePath.EndsWith(TEXT(".json"), ESearchCase::CaseSensitive))
		{
			CommandScriptPath = AutomatedExecutionPath::GetCommandPath() / InRelativePath;
		}
		else
		{
			CommandScriptPath = AutomatedExecutionPath::GetCommandPath() / (InRelativePath + TEXT(".json"));
		}

		//文件存在，则读取文件，并反序列化到TaskCommand中
		//文件不存在，则序列化所有命令的格式到文件中，供外部修改
		if (IFileManager::Get().FileExists(*CommandScriptPath))
		{
			FString CommandString;
			check(FFileHelper::LoadFileToString(CommandString, *CommandScriptPath));
			AutomationJson::DeserializeAllCommand(CommandString, OutTaskCommand);
			return OutTaskCommand.Num() > 0;
		}
		else
		{
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
		uint32 Protocol =  (uint32)AutomationJson::StringToCommandProtocol(InTaskCommand);

		Execute(Protocol, TEXT(""));
	}
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT