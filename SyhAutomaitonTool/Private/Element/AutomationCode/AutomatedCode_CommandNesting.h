#pragma once

#include "Element/Core/Interface/AutoExecElements.h"



//实现命令堆叠, 不支持外部传入参数
class FAutomatedCode_CommandNesting : public FAutoExecElements
{
public:
	using Super = FAutoExecElements;
	using Self = FAutomatedCode_CommandNesting;
	using OwnConfig = FAutomatedCommandNestingConfig;

public:

	FAutomatedCode_CommandNesting();

	virtual ~FAutomatedCode_CommandNesting();

	virtual void Init();

	//通过Json构建参数
	virtual bool BuildParameter(const class FString& InJsonStr);

	//通过命令行参数传入
	virtual bool BuildParameter();

	virtual bool Execute();

	virtual ECommandProtocol GetType() const override { return ECommandProtocol::CMD_Command_Nesting; }

protected:
	bool InitTaskCommand(const TArray<FString>& InCommandList, TMultiMap<ECommandProtocol, FString>& OutTaskCommand);
	bool InitTaskCommand();

	void SetExecuteToken(bool b);
	bool GetExecuteToken();

	TMultiMap<ECommandProtocol, bool>& GetTaskResult() { return TaskResult; }
	void ClearTaskResult() { TaskResult.Empty(); }

private:
	TMultiMap<ECommandProtocol, FString> TaskCommand;
	bool bExecute;
	TMultiMap<ECommandProtocol, bool> TaskResult;

};