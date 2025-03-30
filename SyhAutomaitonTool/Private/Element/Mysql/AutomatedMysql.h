#pragma once

#include "CoreMinimal.h"
#include "Element/Core/Interface/AutoExecElements.h"
#include "SyhAutomationToolType.h"



template<>
bool SimpleAutomationToolCommon::GetValueFromCommandLine<EMysqlMethodType>(const FString& InKey, EMysqlMethodType& OutValue)
{
	FString Result;
	if (FString Key = SimpleAutomationToolCommon::GetMatchKey(InKey);
		!FParse::Value(FCommandLine::Get(), *Key, Result))
	{
		UE_LOG(SyhAutomaitonToolLog, Display, TEXT("%s was not found the value. Use default value."), *Key);
		return false;
	}

	OutValue = EnumTool<EMysqlMethodType>::GetEnumValue(Result);

	return true;
}


//不支持A程序调用B程序
class FAutomatedCode_Mysql : public FAutoExecElements
{
public:
	using Base = FAutoExecElements;
	using Super = FAutoExecElements;
	using Self = FAutomatedCode_Mysql;
	using OwnConfig = FAutomatedMysqlConfig;

public:

	FAutomatedCode_Mysql();

	virtual ~FAutomatedCode_Mysql() override;

	virtual void Init() override;

	//通过Json构建参数
	virtual bool BuildParameter(const class FString& InJsonStr) override;

	//通过命令行参数传入
	virtual bool BuildParameter() override;

	virtual bool Execute() override;

public:
	virtual ECommandProtocol GetType() const override { return ECommandProtocol::CMD_Mysql; }

public:
	bool Post(const FString InSql);
	bool Get(const FString InSql, TArray<struct FSimpleMysqlResult>& Result);

private:
	class USimpleMysqlObject* MysqlObjectRead;
	class USimpleMysqlObject* MysqlObjectWrite;


};
