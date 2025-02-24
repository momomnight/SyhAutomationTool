// Copyright (C) RenZhai.2023.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SimpleHttplibType.h"

class SIMPLEHTTPLIB_API FSimpleHTTPClient :public TSharedFromThis<FSimpleHTTPClient>
{
public:
	FSimpleHTTPClient(const FString &InIP,int32 InPort);
	FSimpleHTTPClient(const FString &InURL);

	virtual~FSimpleHTTPClient(){}

public:
	void CreateClient();

	bool Request(
		const FString& InURLProtocol,
		FHTTPLibResult& OutResult,
		const FString& InContent,
		const TMap<FString, FString>& InCustomParam,
		const TMap<FString, FString>& InCustomMetadataHeader,
		EHTTPLibVerbType VerbType = EHTTPLibVerbType::HTTPLIB_POST);

	bool Request(
		const FString& InURLProtocol,
		FHTTPLibResult& OutResult,
		const TArray<uint8>& InByteData,
		const TMap<FString, FString>& InCustomParam,
		const TMap<FString, FString>& InCustomMetadataHeader,
		EHTTPLibVerbType VerbType = EHTTPLibVerbType::HTTPLIB_POST);

	//void CancelRequest(const FGuid& InRequestID);
	//bool IsValidRequest(const FGuid& InRequestID) const;

private:
	bool Request(
		const FString& InURLProtocol,
		FHTTPLibResult& OutResult,
		const FString& InContent,
		const TArray<uint8>& InByteData,
		const TMap<FString, FString>& InCustomParam,
		const TMap<FString, FString>& InCustomMetadataHeader,
		EHTTPLibVerbType VerbType = EHTTPLibVerbType::HTTPLIB_POST);

protected:
	FString IP;
	int32 Port;
	FString URL;

	void* Client;
};