#pragma once

#include "CoreMinimal.h"
#include "Element/Core/Interface/AutoExecElements.h"
#include "SyhAutomationToolType.h"

//不支持A程序调用B程序
class FAutomatedCode_OSS : public FAutoExecElements
{
public:
	using Base = FAutoExecElements;
	using Super = FAutoExecElements;
	using Self = FAutomatedCode_OSS;
	using OwnConfig = FAutomatedOSSConfig;

public:

	FAutomatedCode_OSS();

	virtual ~FAutomatedCode_OSS() override;

	virtual void Init() override;

	//通过Json构建参数
	virtual bool BuildParameter(const class FString& InJsonStr) override;

	//通过命令行参数传入
	virtual bool BuildParameter() override;

	virtual bool Execute() override;

public:
	virtual ECommandProtocol GetType() const override { return ECommandProtocol::CMD_OSS; }

};
