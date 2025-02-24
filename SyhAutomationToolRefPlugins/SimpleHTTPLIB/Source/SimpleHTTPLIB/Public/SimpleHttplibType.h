// Copyright (C) RenZhai.2023.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SimpleHttplibType.generated.h"

UENUM(BlueprintType)
enum class EHTTPLibVerbType :uint8
{
	HTTPLIB_POST		UMETA(DisplayName = "Post"),
	HTTPLIB_PUT			UMETA(DisplayName = "Put"),
	HTTPLIB_GET			UMETA(DisplayName = "Get"),
	HTTPLIB_DELETE		UMETA(DisplayName = "Delete"),
};

UENUM(BlueprintType)
enum class EHTTPLibErrorType :uint8
{
	HTTPLIBERRORTYPE_SUCCESS = 0									UMETA(DisplayName = "Success"),
	HTTPLIBERRORTYPE_UNKNOWN										UMETA(DisplayName = "Unknown"),
	HTTPLIBERRORTYPE_CONNECTION										UMETA(DisplayName = "Connection"),
	HTTPLIBERRORTYPE_BINDIPADDRESS									UMETA(DisplayName = "BindIPAddress"),
	HTTPLIBERRORTYPE_READ											UMETA(DisplayName = "Read"),
	HTTPLIBERRORTYPE_WRITE											UMETA(DisplayName = "Write"),
	HTTPLIBERRORTYPE_EXCEEDREDIRECTCOUNT							UMETA(DisplayName = "ExceedRedirectCount"),
	HTTPLIBERRORTYPE_CANCELED										UMETA(DisplayName = "Canceled"),
	HTTPLIBERRORTYPE_SSLCONNECTION									UMETA(DisplayName = "SSLConnection"),
	HTTPLIBERRORTYPE_SSLLOADINGCERTS								UMETA(DisplayName = "SSLLoadingCerts"),
	HTTPLIBERRORTYPE_SSLSERVERVERIFICATION							UMETA(DisplayName = "SSLServerVerification"),
	HTTPLIBERRORTYPE_UNSUPPORTEDMULTIPARTBOUNDARYCHARS				UMETA(DisplayName = "UnsupportedMultipartBoundaryChars"),
	HTTPLIBERRORTYPE_COMPRESSION									UMETA(DisplayName = "Compression"),
	HTTPLIBERRORTYPE_CONNECTIONTIMEOUT								UMETA(DisplayName = "ConnectionTimeout"),
	HTTPLIBERRORTYPE_PROXYCONNECTION								UMETA(DisplayName = "ProxyConnection"),
																	
	HTTPLIBERRORTYPE_SSLPEERCOULDBECLOSED_							UMETA(DisplayName = "SSLPeerCouldBeClosed_"),
};

USTRUCT(BlueprintType)
struct SIMPLEHTTPLIB_API FHTTPLibRequest
{
	GENERATED_USTRUCT_BODY()

	FHTTPLibRequest();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HTTPLib|Request")
	FString Method;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HTTPLib|Request")
	FString Path;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HTTPLib|Request")
	TMap<FString,FString> Headers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HTTPLib|Request")
	FString Body;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HTTPLib|Request")
	FString RemoteAddr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HTTPLib|Request")
	int32 RemotePort;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HTTPLib|Request")
	FString LocalAddr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HTTPLib|Request")
	int32 LocalPort;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HTTPLib|Request")
	FString Version;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HTTPLib|Request")
	FString Target;
	
public:
	TMultiMap<FString, FString> Param;

public:
	void* Request;

public:
	bool IsMultipartFormData() const;
	bool IsHasFile(const FString& InKey) const;

	bool GetBody(int64 InSize,TArray<uint8> &OutData) const;
	bool GetBody(FString& OutJsonString) const;
	bool GetFileValue(const FString& InKey,FString &OutJsonString) const;
	bool GetFileValue(const FString& InKey,int32 InDataSize,TArray<uint8>& OutBytes) const;
};

USTRUCT(BlueprintType)
struct SIMPLEHTTPLIB_API FHTTPLibResponse
{
	GENERATED_USTRUCT_BODY()

	FHTTPLibResponse();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HTTPLib|Response")
	FString Version;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HTTPLib|Response")
	int32 Status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HTTPLib|Response")
	FString Reason;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HTTPLib|Response")
	TMap<FString,FString> Headers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HTTPLib|Response")
	FString Body;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HTTPLib|Response")
	FString Location; // Redirect location

public:
	void* Response;

	void SetStatus(int32 InNewStatus);
	void SetContent(const uint8 *InData, int32 ImNum, const FString& ContentType);
	void SetContent(const FString &InString, const FString& ContentType);
};

USTRUCT(BlueprintType)
struct SIMPLEHTTPLIB_API FHTTPLibResult
{
	GENERATED_USTRUCT_BODY()

	FHTTPLibResult()
		:Result(NULL)
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HTTPLib|Result")
	FHTTPLibResponse Response;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HTTPLib|Result")
	EHTTPLibErrorType ErrorType;

	void* Result;
};