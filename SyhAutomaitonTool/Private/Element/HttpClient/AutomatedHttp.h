#pragma once
#include "Element/Core/Interface/AutoExecElements.h"
#include "HTTP/SimpleHTTPObject.h"



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
	void ResetTimeout();

private:
	TSharedPtr<SimpleHTTPObject::FHTTP> HttpObject;
	bool bHttpSuccessed;
	int32 ContentLength;
};
