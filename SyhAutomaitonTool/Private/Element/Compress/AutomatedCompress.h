#pragma once

#include "CoreMinimal.h"
#include "Element/AutomationCode/AutomatedCode_Call.h"
#include "SyhAutomationToolType.h"

template<>
bool SimpleAutomationToolCommon::GetValueFromCommandLine<ECompressType>(const FString& InKey, ECompressType& OutValue)
{
	FString Result;
	if (FString Key = SimpleAutomationToolCommon::GetMatchKey(InKey);
		!FParse::Value(FCommandLine::Get(), *Key, Result))
	{
		UE_LOG(SyhAutomaitonToolLog, Display, TEXT("%s was not found the value. Use default value."), *Key);
		return false;
	}

	OutValue = EnumTool<ECompressType>::GetEnumValue(Result);

	return true;
}

//不支持A程序调用B程序
class FAutomatedCode_Compress : public FAutomatedCode_Call
{
public:
	using Super = FAutomatedCode_Call;
	using Self = FAutomatedCode_Compress;
	using OwnConfig = FAutomatedCompressConfig;

public:

	FAutomatedCode_Compress();

	virtual ~FAutomatedCode_Compress() override;

	virtual void Init() override;

	//通过Json构建参数
	virtual bool BuildParameter(const class FString& InJsonStr) override;

	//通过命令行参数传入
	virtual bool BuildParameter() override;

	virtual bool Execute() override;

private:
	void SetCompressFileExtension(ECompressType InCompressType);
	bool Execute(const FString& InSource, const FString& InTarget);



public:
	virtual ECommandProtocol GetType() const override { return ECommandProtocol::CMD_Compress; }

};
