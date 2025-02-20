#include "Element/AutomatedExecutionElementsManage.h"

TSharedPtr<FAutomatedExecutionElementsManage> FAutomatedExecutionElementsManage::Instance = nullptr;

FAutomatedExecutionElementsManage::FAutomatedExecutionElementsManage()
{
	bExecute = false;
}

FAutomatedExecutionElementsManage::~FAutomatedExecutionElementsManage()
{
}

TSharedPtr<FAutomatedExecutionElementsManage> FAutomatedExecutionElementsManage::Create()
{
	if (!Instance.IsValid())
	{
		Instance = MakeShareable(new FAutomatedExecutionElementsManage);
		Instance->Init();
	}
	return Instance;
}

TSharedPtr<FAutomatedExecutionElementsManage> FAutomatedExecutionElementsManage::Get()
{
	if (Instance.IsValid())
	{
		return Instance;
	}
	else
	{
		return FAutomatedExecutionElementsManage::Create();
	}
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
