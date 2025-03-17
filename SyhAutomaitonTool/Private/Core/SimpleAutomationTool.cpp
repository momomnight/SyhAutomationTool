#include "Core/SimpleAutomationTool.h"
#include "SyhAutomationToolLog.h"
#include "Misc/AutomatedExecutionPath.h"
#include "Json/AutomationJson.h"
#include "Element/Core/Interface/AutoExecElements.h"
#include "Element/AutoExecElementsFactory.h"
#include "SyhAutomationToolCommon.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

namespace SimpleAutomationTool
{
	template bool EvaluateTaskResult<ECommandProtocol>(const TMultiMap<ECommandProtocol, bool>& InTaskResult);
	template bool EvaluateTaskResult<FString>(const TMultiMap<FString, bool>& InTaskResult);


	bool Execute(ECommandProtocol InProtocolIndex, const FString& InJsonString)
	{
		if(InProtocolIndex != ECommandProtocol::CMD_None)
		{
			if (TSharedPtr<FAutoExecElements> AutoExecElement =
				FAutoExecElementsFactory::CreateAutomatedTask(InProtocolIndex, InJsonString))
			{
				if (AutoExecElement->Execute())
				{
					UE_LOG(SyhAutomaitonToolLog, Display, TEXT("Successful to execute [%s] protocol."), 
						*SimpleAutomationToolCommon::ToString<ECommandProtocol>(InProtocolIndex));
					return true;
				}
				else
				{
					UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Fail to execute [%s] protocol."), 
						*SimpleAutomationToolCommon::ToString<ECommandProtocol>(InProtocolIndex));
					return false;
				}
			}
			else
			{
				UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Fail to create AutoExecElement. Protocol is [%s]"), 
					*SimpleAutomationToolCommon::ToString<ECommandProtocol>(InProtocolIndex));
				return false;
			}
		}

		UE_LOG(SyhAutomaitonToolLog, Warning, TEXT("Execute a empty command."));
		return true;
	}

	bool Init(TMultiMap<ECommandProtocol, FString>& OutTaskCommand)
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

	//给定一个文件相对于Command内部的相对路径
	//文件存在则反序列化到命令列表中，不存在则序列化所有命令到文件中，展示命令格式
	bool Init(TMultiMap<ECommandProtocol, FString>& OutTaskCommand, const FString& InRelativePath)
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

	void HandleTask(const TMultiMap<ECommandProtocol, FString>& InTaskCommand, TMultiMap<ECommandProtocol, bool>& OutTaskResult, bool bBreak)
	{
		if (bBreak)
		{
			for (auto& Temp : InTaskCommand)
			{
				if (!Execute(Temp.Key, Temp.Value))
				{
					OutTaskResult.Add(Temp.Key, false);
					break;
				}
				OutTaskResult.Add(Temp.Key, true);
			}
		}
		else
		{
			for (auto& Temp : InTaskCommand)
			{
				OutTaskResult.Add(Temp.Key, Execute(Temp.Key, Temp.Value));
			}
		}

	}

	void HandleTask(const FString& InTaskCommand)
	{
		Execute(SimpleAutomationToolCommon::StringToCommandProtocol(InTaskCommand), TEXT(""));
	}

	void BuildConfig()
	{
		SimpleAutomationToolCommon::PackagingSaveFileName = FDateTime::Now().ToString(TEXT("%Y-%m-%d-%H-%M"));
	}
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT