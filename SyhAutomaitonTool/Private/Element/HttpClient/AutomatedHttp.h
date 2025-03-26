#pragma once

#include "CoreMinimal.h"
#include "Element/Core/Interface/AutoExecElements.h"
#include "SyhAutomationToolType.h"
#include "HTTP/SimpleHTTPObject.h"


template<>
bool SimpleAutomationToolCommon::GetValueFromCommandLine<ESimpleHTTPVerbType>(const FString& InKey, ESimpleHTTPVerbType& OutValue)
{
	FString Result;
	if (FString Key = GetMatchKey(InKey);
		!FParse::Value(FCommandLine::Get(), *Key, Result))
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("%s was not found the value."), *Key);
		return false;
	}

	OutValue = EnumTool<ESimpleHTTPVerbType>::GetEnumValue(Result);

	return true;
}

//不支持A程序调用B程序
class FAutomatedCode_HTTP : public FAutoExecElements
{
public:
	using Base = FAutoExecElements;
	using Super = FAutoExecElements;
	using Self = FAutomatedCode_HTTP;
	using OwnConfig = FAutomatedHTTPConfig;

public:

	FAutomatedCode_HTTP();

	virtual ~FAutomatedCode_HTTP() override;

	virtual void Init() override;

	//通过Json构建参数
	virtual bool BuildParameter(const class FString& InJsonStr) override;

	//通过命令行参数传入
	virtual bool BuildParameter() override;

	virtual bool Execute() override;

private:
	void OnRequestComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccessed);
	void OnRequestProgress(FHttpRequestPtr HttpRequest, int32 SendBytes, int32 BytesReceived);
	void OnRequestHeaderReceived(FHttpRequestPtr HttpRequest, const FString& HeaderName, const FString& NewHeaderValue);

public:
	virtual ECommandProtocol GetType() const override { return ECommandProtocol::CMD_HTTP; }


private:
	TSharedPtr<SimpleHTTPObject::FHTTP> HttpObject;
	bool bHttpSuccessed;
	int32 ContentLength;
};
