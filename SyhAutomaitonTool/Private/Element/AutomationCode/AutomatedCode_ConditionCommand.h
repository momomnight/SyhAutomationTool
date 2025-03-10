#pragma once

#include "Element/AutomationCode/AutomatedCode_CommandNesting.h"
#include "SyhAutomationToolType.h"


//实现命令堆叠, 不支持外部传入参数
class FAutomatedCode_ConditionCommand : public FAutomatedCode_CommandNesting
{
public:
	using Base = FAutoExecElements;
	using Super = FAutomatedCode_CommandNesting;
	using Self = FAutomatedCode_ConditionCommand;
	using OwnConfig = FAutomatedConditionCommandConfig;

public:

	FAutomatedCode_ConditionCommand();

	virtual ~FAutomatedCode_ConditionCommand();

	virtual void Init();

	//通过Json构建参数
	virtual bool BuildParameter(const class FString& InJsonStr);

	//通过命令行参数传入
	virtual bool BuildParameter();

	virtual bool Execute();

	virtual uint32 GetType() const override { return (uint32)ECommandProtocol::CMD_Condition_Command; }

protected:
	TMultiMap<uint32, FString> TrueTaskCommand;
	TMultiMap<uint32, FString> FalseTaskCommand;


protected:
	virtual bool InitTaskCommand();

};