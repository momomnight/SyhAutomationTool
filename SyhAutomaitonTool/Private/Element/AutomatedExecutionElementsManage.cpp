#include "Element/AutomatedExecutionElementsManage.h"

TSharedPtr<FAutomatedExecutionElementsManage> FAutomatedExecutionElementsManage::Instance = nullptr;

FAutomatedExecutionElementsManage::FAutomatedExecutionElementsManage()
{
	bExecute = false;
}

FAutomatedExecutionElementsManage::~FAutomatedExecutionElementsManage()
{
}

TSharedPtr<FAutomatedExecutionElementsManage> FAutomatedExecutionElementsManage::Get()
{
	if (!Instance.IsValid())
	{
		Instance = MakeShareable(new FAutomatedExecutionElementsManage);
	}
	return Instance;
}

void FAutomatedExecutionElementsManage::Destroy()
{
	if (Instance.IsValid())
	{
		Instance.Reset();
	}
}

void FAutomatedExecutionElementsManage::HandleTask()
{
}

void FAutomatedExecutionElementsManage::Init()
{
	//初始化命令列表
	//读取命令
}
