#include "Element/AutoExecElementsManage.h"
#include "Core/SimpleAutomationTool.h"
#include "SyhAutomationToolCommon.h"

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
		SimpleAutomationTool::HandleTask(TaskCommand);
	}
	bExecute = false;
}

void FAutoExecElementsManage::Init()
{
	PackagingSaveFileName = FDateTime::Now().ToString(TEXT("%Y-%m-%d-%H-%M"));
	bExecute = SimpleAutomationTool::Init(TaskCommand);
}
