#pragma once

#include "CoreMinimal.h"
#include "Templates/SharedPointer.h"

class FAutomatedExecutionElementsManage
{
public:

	FAutomatedExecutionElementsManage();
	~FAutomatedExecutionElementsManage();

public :
	static TSharedPtr<FAutomatedExecutionElementsManage> Create();
	static TSharedPtr<FAutomatedExecutionElementsManage> Get();
	static void Destroy();

public:
	void HandleTask();

protected:
	void Init();

private:
	static TSharedPtr<FAutomatedExecutionElementsManage> Instance;

	//命令
	TMultiMap<uint32, FString> TaskCommand;
	bool bExecute;

};