// Copyright (C) RenZhai.2023.All Rights Reserved.

#include "HTTPClient/SimpleHTTPClient.h"

#if PLATFORM_WINDOWS
#include "Windows/AllowWindowsPlatformTypes.h"
#endif // PLATFORM_WINDOWS
#define UI MY_HELLO
THIRD_PARTY_INCLUDES_START
#include "httplib/httplib.h"
THIRD_PARTY_INCLUDES_END
#undef UI

#if PLATFORM_WINDOWS
#include "Windows/HideWindowsPlatformTypes.h"
#endif // PLATFORM_WINDOWS


FSimpleHTTPClient::FSimpleHTTPClient(const FString& InIP, int32 InPort)
{
	IP = InIP;
	Port = InPort;

	Client = nullptr;
}

FSimpleHTTPClient::FSimpleHTTPClient(const FString& InURL)
{
	URL = InURL;

	Port = 0;
	Client = nullptr;
}

void FSimpleHTTPClient::CreateClient()
{
	if (!URL.IsEmpty())
	{
		std::string URLString = TCHAR_TO_UTF8(*URL);
		Client = new httplib::Client(URLString);
	}
	else if (!IP.IsEmpty() && Port != 0)
	{
		std::string IPString = TCHAR_TO_UTF8(*IP);
		Client = new httplib::Client(IPString,Port);
	}
}

bool FSimpleHTTPClient::Request(const FString& InURLProtocol, FHTTPLibResult& OutResult, const FString& InContent, const TMap<FString, FString>& InCustomParam, const TMap<FString, FString>& InCustomMetadataHeader, EHTTPLibVerbType VerbType)
{
	return Request(InURLProtocol,OutResult,InContent, TArray<uint8>(), InCustomParam, InCustomMetadataHeader, VerbType);
}

bool FSimpleHTTPClient::Request(const FString& InURLProtocol, FHTTPLibResult& OutResult, const TArray<uint8>& InByteData, const TMap<FString, FString>& InCustomParam, const TMap<FString, FString>& InCustomMetadataHeader, EHTTPLibVerbType VerbType)
{
	return Request(InURLProtocol, OutResult,TEXT(""),InByteData, InCustomParam, InCustomMetadataHeader, VerbType);
}

bool FSimpleHTTPClient::Request(
	const FString& InURLProtocol,
	FHTTPLibResult& OutResult,
	const FString& InContent,
	const TArray<uint8>& InByteData,
	const TMap<FString, FString>& InCustomParam,
	const TMap<FString, FString>& InCustomMetadataHeader, 
	EHTTPLibVerbType VerbType)
{
	if (Client)
	{
		httplib::Client* InClient = (httplib::Client*)Client;
		std::string InURLProtocolString = TCHAR_TO_UTF8(*InURLProtocol);

		httplib::Headers Headers;
		for (auto &Tmp : InCustomMetadataHeader)
		{
			Headers.insert({ TCHAR_TO_UTF8(*Tmp.Key),TCHAR_TO_UTF8(*Tmp.Value) });
		}

		httplib::Params Params;
		for (auto& Tmp : InCustomMetadataHeader)
		{
			Params.insert({ TCHAR_TO_UTF8(*Tmp.Key),TCHAR_TO_UTF8(*Tmp.Value) });
		}

		auto ContentDataReceiver = [&](const char* InData, size_t InDataLength)->bool
		{
			return true;
		};

		auto DataProgress = [&](uint64_t InCurrent, uint64_t InTotal)->bool
		{
			return true;
		};

		auto DataResponseHandler = [&](const httplib::Response& InResponse)->bool
		{
			return true;
		};

		auto DataContentProviderWithoutLength = [&, InByteData](size_t InOffset, httplib::DataSink& OutSink)->bool
		{
			if (InByteData.Num() > 0)
			{
				OutSink.os.write((char*)InByteData.GetData(), InByteData.Num());
			}
			
			return true;
		};

		switch (VerbType)
		{
			case EHTTPLibVerbType::HTTPLIB_POST:
			{
				std::string BodyString;
				if (!InContent.IsEmpty())
				{
					BodyString = TCHAR_TO_UTF8(*InContent);
				}

				FString ContentType = InCustomMetadataHeader[TEXT("Content-Type")];
				httplib::Result Result = InClient->Post(InURLProtocolString, BodyString, TCHAR_TO_UTF8(*ContentType));
		
				break;
			}
			case EHTTPLibVerbType::HTTPLIB_PUT:
			{
				FString ContentType = InCustomMetadataHeader[TEXT("Content-Type")];
				httplib::Result Result = InClient->Put(InURLProtocolString, DataContentProviderWithoutLength, TCHAR_TO_UTF8(*ContentType));
				break;
			}
			case EHTTPLibVerbType::HTTPLIB_GET:
			{
				httplib::Result Result = InClient->Get(InURLProtocolString, Params, Headers, DataResponseHandler, ContentDataReceiver, DataProgress);

				break;
			}
			case EHTTPLibVerbType::HTTPLIB_DELETE:
			{
				std::string BodyString;
				if (!InContent.IsEmpty())
				{
					BodyString = TCHAR_TO_UTF8(*InContent);
				}

				FString ContentType = InCustomMetadataHeader[TEXT("Content-Type")];
				httplib::Result Result = InClient->Delete(InURLProtocolString, Headers, BodyString, TCHAR_TO_UTF8(*ContentType));
				break;
			}
		}
	}

	return false;
}
