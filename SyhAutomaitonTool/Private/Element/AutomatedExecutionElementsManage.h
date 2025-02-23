#pragma once

#include "CoreMinimal.h"
#include "Templates/SharedPointer.h"


// 总的管理类，全局唯一
class FAutomatedExecutionElementsManage
{
public:
	~FAutomatedExecutionElementsManage();

public :
	static TSharedPtr<FAutomatedExecutionElementsManage> Get();
	static void Destroy();

public:
	void HandleTask();

	//初始化,以读取最新的任务
	void Init();
protected:
	FAutomatedExecutionElementsManage();
	FAutomatedExecutionElementsManage(const FAutomatedExecutionElementsManage&) = delete;
	FAutomatedExecutionElementsManage& operator=(const FAutomatedExecutionElementsManage&) = delete;
private:
	static TSharedPtr<FAutomatedExecutionElementsManage> Instance;
	//命令
	TMultiMap<uint32, FString> TaskCommand;
	bool bExecute;

};