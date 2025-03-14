// Copyright (C) RenZhai.2020.All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "HTTP/Core/SimpleHttpActionRequest.h"

class SIMPLEHTTP_API FSimpleHttpActionSingleRequest : public FSimpleHttpActionRequest
{
public:
	FSimpleHttpActionSingleRequest();

	virtual bool Suspend();
	virtual bool Cancel();

	virtual bool SendRequest(ESimpleHTTPVerbType InType,const FString& URL, const TMap<FString, FString>& InMeta, const FString& InConentData);
	virtual bool SendRequest(ESimpleHTTPVerbType InType,const FString& URL, const TMap<FString, FString>& InMeta, const TArray<uint8>& InData);

	virtual bool GetObject(const FString& URL);
	virtual bool GetObject(const FString& URL, const FString& SavePaths);
	virtual bool PutObject(const FString& URL, const TArray<uint8>& Data);
	virtual bool PutObject(const FString& URL, const FString& LocalPaths);
	virtual bool PutObjectByString(const FString& URL, const FString& InBuff);
	virtual bool PutObject(const FString& URL, TSharedRef<FArchive, ESPMode::ThreadSafe> Stream);
	virtual bool DeleteObject(const FString& URL);
	virtual bool PostObject(const FString& URL);
	virtual bool PostObject(const FString& URL, const FString& LocalPaths);
	virtual bool PostObject(const FString& URL, const TArray<uint8>& Data);

protected:
	virtual void HttpRequestComplete(FHttpRequestPtr InRequest, FHttpResponsePtr Response, bool bConnectedSuccessfully);
	virtual void HttpRequestProgress(FHttpRequestPtr InRequest, int32 BytesSent, int32 BytesReceived);
	virtual void HttpRequestProgress64(FHttpRequestPtr InRequest, uint64 BytesSent, uint64 BytesReceived);
	virtual void HttpRequestHeaderReceived(FHttpRequestPtr InRequest, const FString& HeaderName, const FString& NewHeaderValue);

protected:
	virtual void ExecutionCompleteDelegate(FHttpRequestPtr InRequest, FHttpResponsePtr Response, bool bConnectedSuccessfully);

protected:
	TSharedPtr<SimpleHTTP::HTTP::IHTTPClientRequest> Request;
};