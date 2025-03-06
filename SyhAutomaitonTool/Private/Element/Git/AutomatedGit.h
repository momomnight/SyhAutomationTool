#pragma once

#include "CoreMinimal.h"
#include "Element/AutomationCode/AutomatedCode_Call.h"
#include "SyhAutomationToolType.h"

//不支持A程序调用B程序
class FAutomatedCode_Git : public FAutomatedCode_Call
{
public:
	using Super = FAutomatedCode_Call;
	using Self = FAutomatedCode_Git;
	using OwnConfig = FAutomatedGitConfig;

public:

	FAutomatedCode_Git();

	virtual ~FAutomatedCode_Git() override;

	virtual void Init() override;

	//通过Json构建参数
	virtual bool BuildParameter(const class FString& InJsonStr) override;

	//通过命令行参数传入
	virtual bool BuildParameter() override;

	virtual bool Execute() override;

protected:
	void BuildExecutableFile(const FString& InPath, const TArray<FString>& InCommands);
	FString ShPath;
	FString BatPath;

public:
	virtual uint32 GetType() const override { return (uint32)ECommandProtocol::CMD_Git; }

};
