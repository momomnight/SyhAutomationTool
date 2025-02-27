#pragma once

#include "Element/Core/Interface/AutoExecElements.h"
#include "SyhAutomationToolType.h"


class FAutomatedCode_Call : public FAutoExecElements
{
public:
	using Super = FAutoExecElements;
	using Self = FAutomatedCode_Call;
	using OwnConfig = FAutomatedCallConfig;

public:
	FAutomatedCode_Call();
	virtual ~FAutomatedCode_Call();

	virtual bool Init();

	//通过Json构建参数
	virtual bool BuildParameter(const class FString& InJsonStr);

	//通过命令行参数传入
	virtual bool BuildParameter();

	virtual bool Execute();

	virtual bool Exit();

public:
	//虚函数在编译时并不知道具体函数的定义，知道其定义时已经是运行时了
	//内联函数在编译时需要其定义，以便展开
	virtual uint32 GetType() const { return (uint32)ECommandProtocol::CMD_Call; }


protected:

	FAutomatedCallConfig* Config;
};