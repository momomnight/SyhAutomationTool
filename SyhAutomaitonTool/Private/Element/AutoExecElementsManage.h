#pragma once

#include "CoreMinimal.h"
#include "Templates/SharedPointer.h"


// 总的管理类，全局唯一
class FAutoExecElementsManage
{
public:
	~FAutoExecElementsManage();

public :
	static TSharedPtr<FAutoExecElementsManage> Get();
	static void Destroy();

public:
	
	//处理任务，使用Core/SimpleAutomationTool.h的逻辑
	void HandleTask();

	//初始化,以读取最新的任务，使用Core/SimpleAutomationTool.h的逻辑
	void Init();
protected:
	FAutoExecElementsManage();
	FAutoExecElementsManage(const FAutoExecElementsManage&) = delete;
	FAutoExecElementsManage& operator=(const FAutoExecElementsManage&) = delete;
private:
	static TSharedPtr<FAutoExecElementsManage> Instance;
	//命令
	TMultiMap<uint32, FString> TaskCommand;
	bool bExecute;

};