#include "Element/AutoExecElementsManage.h"
#include "Core/SimpleAutomationTool.h"
#include "SimpleAutomatedToolType.h"

TSharedPtr<FAutoExecElementsManage> FAutoExecElementsManage::Instance = nullptr;

FAutoExecElementsManage::FAutoExecElementsManage()
{
	bExecute = false;
}

FAutoExecElementsManage::~FAutoExecElementsManage()
{
}

TSharedPtr<FAutoExecElementsManage> FAutoExecElementsManage::Get()
{
	if (!Instance.IsValid())
	{
		Instance = MakeShareable(new FAutoExecElementsManage);
	}
	return Instance;
}

void FAutoExecElementsManage::Destroy()
{
	if (Instance.IsValid())
	{
		Instance.Reset();
	}
}

bool FAutoExecElementsManage::HandleTask()
{
	if(bExecute)
	{
		bExecute = false;
		TMultiMap<ECommandProtocol, bool> Result;
		SimpleAutomationTool::HandleTask(TaskCommand, Result);
		return SimpleAutomationTool::EvaluateTaskResult(Result);
	}
	return false;
}

bool FAutoExecElementsManage::Init()
{
	SimpleAutomationTool::BuildConfig();
	bExecute = SimpleAutomationTool::Init(TaskCommand);
	return bExecute;
}
