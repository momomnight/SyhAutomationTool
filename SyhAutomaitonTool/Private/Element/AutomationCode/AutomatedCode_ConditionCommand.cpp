#include "Element/AutomationCode/AutomatedCode_ConditionCommand.h"
#include "Core/SimpleAutomationTool.h"
#include "SyhAutomationToolLog.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

FAutomatedCode_ConditionCommand::FAutomatedCode_ConditionCommand()
{
}

FAutomatedCode_ConditionCommand::~FAutomatedCode_ConditionCommand()
{
}

void FAutomatedCode_ConditionCommand::Init()
{
}

bool FAutomatedCode_ConditionCommand::BuildParameter(const FString& InJsonStr)
{
	AutomationJson::JsonStringToAutomatedConfig<OwnConfig>(InJsonStr, *GetSelfConfig<OwnConfig>());
	bool Result = true;
	Result &= Super::InitTaskCommand();
	Self::InitTaskCommand();
	SetExecuteToken(Result);
	return Result;
}

bool FAutomatedCode_ConditionCommand::BuildParameter()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	bool Result = true;
	Result &= Super::BuildParameter();
	ParseStrings(OwnConfig::RelatedString::TrueCommandListKey, SelfConfig->TrueCommandList, false);
	ParseStrings(OwnConfig::RelatedString::FalseCommandListKey, SelfConfig->FalseCommandList, false);
	Self::InitTaskCommand();

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

bool FAutomatedCode_ConditionCommand::Execute()
{
	FLogPrint::PrintDisplay(TEXT("execute"), GetCommandName<Self>());
	if (Super::Execute())
	{
		UE_LOG(SyhAutomaitonToolLog, Display, TEXT("Evaluating the result of commands execution..."));
		bool Result = SimpleAutomationTool::EvaluateTaskResult(GetTaskResult());
		UE_LOG(SyhAutomaitonToolLog, Display, TEXT("Result is %s."), Result ? TEXT("True") : TEXT("False"));
		ClearTaskResult();
		if (Result)
		{
			UE_LOG(SyhAutomaitonToolLog, Display, TEXT("Execute the true branch of condition command."));
			SimpleAutomationTool::HandleTask(TrueTaskCommand, GetTaskResult());
			UE_LOG(SyhAutomaitonToolLog, Display, TEXT("Finish the true branch."));
		}
		else
		{
			UE_LOG(SyhAutomaitonToolLog, Display, TEXT("Execute the true branch of condition command."));
			SimpleAutomationTool::HandleTask(FalseTaskCommand, GetTaskResult());
			UE_LOG(SyhAutomaitonToolLog, Display, TEXT("Finish the false branch."));
		}
		UE_LOG(SyhAutomaitonToolLog, Display, TEXT("Evaluating the final result of commands execution..."));
		Result = SimpleAutomationTool::EvaluateTaskResult(GetTaskResult());
		UE_LOG(SyhAutomaitonToolLog, Display, TEXT("Result is %s."), Result ? TEXT("True") : TEXT("False"));
		ClearTaskResult();
		return true;
	}

	FLogPrint::PrintError(TEXT("execute"), GetCommandName<Self>());
	return false;
}

bool FAutomatedCode_ConditionCommand::InitTaskCommand()
{
	bool Result = true;
	Result &= Super::InitTaskCommand(GetSelfConfig<OwnConfig>()->TrueCommandList, TrueTaskCommand);
	Result &= Super::InitTaskCommand(GetSelfConfig<OwnConfig>()->FalseCommandList, FalseTaskCommand);
	return Result;
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT