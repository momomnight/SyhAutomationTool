#pragma once
#include "Element/AutomationCode/AutomatedCode_Call.h"
//不支持A程序调用B程序
class FAutomatedCode_UEProjectRefresh : public FAutomatedCode_Call
{
public:
	using Super = FAutomatedCode_Call;
	using Self = FAutomatedCode_UEProjectRefresh;
	using OwnConfig = FAutomatedUEProjectRefreshConfig;

public:

	FAutomatedCode_UEProjectRefresh();

	virtual ~FAutomatedCode_UEProjectRefresh() override;

	virtual void Init() override;

	//通过Json构建参数
	virtual bool BuildParameter(const class FString& InJsonStr) override;

	//通过命令行参数传入
	virtual bool BuildParameter() override;

	virtual bool Execute() override;

public:
	virtual ECommandProtocol GetType() const override { return ECommandProtocol::CMD_UE_Project_Refresh; }

};
