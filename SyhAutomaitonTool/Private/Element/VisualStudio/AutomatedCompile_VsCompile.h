#pragma once

#include "CoreMinimal.h"
#include "Element/AutomationCode/AutomatedCode_Call.h"
#include "SyhAutomationToolType.h"

//不支持A程序调用B程序
class FAutomatedCode_VS_Compile : public FAutomatedCode_Call
{
public:
	using Super = FAutomatedCode_Call;
	using Self = FAutomatedCode_VS_Compile;
	using OwnConfig = FAutomatedVSCompileConfig;

public:

	FAutomatedCode_VS_Compile() : Super()
	{
	}

	virtual ~FAutomatedCode_VS_Compile() override;

	virtual void Init() override;

	//通过Json构建参数
	virtual bool BuildParameter(const class FString& InJsonStr) override;

	//通过命令行参数传入
	virtual bool BuildParameter() override;

	virtual bool Execute() override;

public:
	virtual uint32 GetType() const override { return (uint32)ECommandProtocol::CMD_VS_Compile; }

};
