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
	bExecute = false;
}

FAutomatedCode_CommandNesting::~FAutomatedCode_CommandNesting()
{
}

void FAutomatedCode_CommandNesting::Init()
{
	CreateConfig<OwnConfig>();
	TaskCommand.Empty();

}

bool FAutomatedCode_CommandNesting::BuildParameter(const FString& InJsonStr)
{
	AutomationJson::JsonStringToAutomatedConfig<OwnConfig>(InJsonStr, *GetSelfConfig<OwnConfig>());
	
	for (auto& Temp : GetSelfConfig<OwnConfig>()->CommandList)
	{
		if (!SimpleAutomationTool::Init(TaskCommand, Temp))
		{
			bExecute = false;
			return bExecute;
		}
	}

	bExecute = true;

	return bExecute;
}

bool FAutomatedCode_CommandNesting::BuildParameter()
{
	return GetSelfConfig<OwnConfig>()->CommandList.Num() > 0;
}

bool FAutomatedCode_CommandNesting::Execute()
{
	if (bExecute)
	{
		SimpleAutomationTool::HandleTask(TaskCommand);
		bExecute = false;
		return !bExecute;
	}
	return bExecute;
}

bool FAutomatedCode_CommandNesting::Exit()
{
	return true;
}



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT