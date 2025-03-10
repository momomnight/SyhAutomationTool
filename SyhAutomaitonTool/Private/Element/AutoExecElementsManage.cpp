#include "Element/AutoExecElementsManage.h"
#include "Core/SimpleAutomationTool.h"

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

void FAutoExecElementsManage::HandleTask()
{
	if(bExecute)
	{
		TMultiMap<int32, bool> Result;
		SimpleAutomationTool::HandleTask(TaskCommand, Result);
	}
	bExecute = false;
}

void FAutoExecElementsManage::Init()
{
	SimpleAutomationTool::BuildConfig();
	bExecute = SimpleAutomationTool::Init(TaskCommand);
}
