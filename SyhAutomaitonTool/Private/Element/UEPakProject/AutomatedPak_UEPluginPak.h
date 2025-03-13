#pragma once

#include "CoreMinimal.h"
#include "Element/AutomationCode/AutomatedCode_Call.h"
#include "SyhAutomationToolType.h"

//不支持A程序调用B程序
class FAutomatedCode_UE_Plugin_Packaging : public FAutomatedCode_Call
{
public:
	using Super = FAutomatedCode_Call;
	using Self = FAutomatedCode_UE_Plugin_Packaging;
	using OwnConfig = FAutomatedUEPluginPackagingConfig;

public:

	FAutomatedCode_UE_Plugin_Packaging();

	virtual ~FAutomatedCode_UE_Plugin_Packaging() override;

	virtual void Init() override;

	//通过Json构建参数
	virtual bool BuildParameter(const class FString& InJsonStr) override;

	//通过命令行参数传入
	virtual bool BuildParameter() override;

	virtual bool Execute() override;

protected:
	bool Execute(const FString& InPluginPath, const FString& InArchivePath);


public:
	virtual uint32 GetType() const override { return (uint32)ECommandProtocol::CMD_UE_Plugin_Packaging; }

private:
	FString RunUATPath;
};
