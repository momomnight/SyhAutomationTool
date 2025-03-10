#include "Element/AutomationCode/AutomatedCode_CommandNesting.h"
#include "SyhAutomationToolLog.h"
#include "Core/SimpleAutomationTool.h"



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


FAutomatedCode_CommandNesting::FAutomatedCode_CommandNesting()
{
}

FAutomatedCode_CommandNesting::~FAutomatedCode_CommandNesting()
{
}

void FAutomatedCode_CommandNesting::Init()
{
	TaskCommand.Empty();
	TaskResult.Empty();
	bExecute = false;
}

bool FAutomatedCode_CommandNesting::BuildParameter(const FString& InJsonStr)
{
	AutomationJson::JsonStringToAutomatedConfig<OwnConfig>(InJsonStr, *GetSelfConfig<OwnConfig>());
	bool Result = InitTaskCommand();
	SetExecuteToken(Result);
	return Result;
}

bool FAutomatedCode_CommandNesting::BuildParameter()
{
	return GetSelfConfig<OwnConfig>()->CommandList.Num() > 0;
}

bool FAutomatedCode_CommandNesting::Execute()
{
	if (GetExecuteToken())
	{
		switch (GetSelfConfig<OwnConfig>()->ComparisionType)
		{
		case EComparisionType::COMPARISION_Sequence:
		{
			SimpleAutomationTool::HandleTask(TaskCommand, GetTaskResult());
			break;
		}
		case EComparisionType::COMPARISION_Break:
		{
			SimpleAutomationTool::HandleTask(TaskCommand, GetTaskResult(), true);
			break;
		}
		default:
		{
			break;
		}
		}

		SetExecuteToken(false);
	}
	return true;
}

bool FAutomatedCode_CommandNesting::InitTaskCommand(const TArray<FString>& InCommandList, TMultiMap<uint32, FString>& OutTaskCommand)
{
	if(InCommandList.Num() > 0)
	{
		for (auto& Temp : InCommandList)
		{
			if (!SimpleAutomationTool::Init(OutTaskCommand, Temp))
			{
				return false;
			}
		}
	}
	return true;
}

bool FAutomatedCode_CommandNesting::InitTaskCommand()
{
	return InitTaskCommand(GetSelfConfig<OwnConfig>()->CommandList, TaskCommand);
}

void FAutomatedCode_CommandNesting::SetExecuteToken(bool b)
{
	bExecute = b;
}

bool FAutomatedCode_CommandNesting::GetExecuteToken()
{
	return bExecute;
}



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT