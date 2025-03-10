#include "Element/AutomationCode/AutomatedCode_ConditionCommand.h"
#include "Core/SimpleAutomationTool.h"
#include "SyhAutomationToolLog.h"

FAutomatedCode_ConditionCommand::FAutomatedCode_ConditionCommand()
{
}

FAutomatedCode_ConditionCommand::~FAutomatedCode_ConditionCommand()
{
}

void FAutomatedCode_ConditionCommand::Init()
{
	Super::Init();
	TrueTaskCommand.Empty();
	FalseTaskCommand.Empty();
}

bool FAutomatedCode_ConditionCommand::BuildParameter(const FString& InJsonStr)
{
	AutomationJson::JsonStringToAutomatedConfig<OwnConfig>(InJsonStr, *GetSelfConfig<OwnConfig>());
	bool Result = InitTaskCommand();
	SetExecuteToken(Result);
	return Result;
}

bool FAutomatedCode_ConditionCommand::BuildParameter()
{
	return true;
}

bool FAutomatedCode_ConditionCommand::Execute()
{
	Super::Execute();

	if (GetTaskResult().Num() > 0)
	{
		bool Result = SimpleAutomationTool::EvaluateTaskResult(GetTaskResult());
		ClearTaskResult();
		if (GetExecuteToken())
		{
			SimpleAutomationTool::HandleTask(TrueTaskCommand, GetTaskResult());
		}
		else
		{
			SimpleAutomationTool::HandleTask(FalseTaskCommand, GetTaskResult());
		}
		return SimpleAutomationTool::EvaluateTaskResult(GetTaskResult());
	}
	return true;
}

bool FAutomatedCode_ConditionCommand::InitTaskCommand()
{
	bool Result = true;
	Result &= Super::InitTaskCommand();
	Result &= Super::InitTaskCommand(GetSelfConfig<OwnConfig>()->TrueCommandList, TrueTaskCommand);
	Result &= Super::InitTaskCommand(GetSelfConfig<OwnConfig>()->FalseCommandList, FalseTaskCommand);
	return Result;
}
