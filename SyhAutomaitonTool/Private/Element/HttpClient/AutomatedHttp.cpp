#include "Element/HttpClient/AutomatedHttp.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

FAutomatedCode_HTTP::FAutomatedCode_HTTP()
{
	bHttpSuccessed = false;
	ContentLength = 0;
	SimpleHTTPObject::FHTTPDelegate TempDelegate;
	TempDelegate.SimpleCompleteDelegate.BindLambda(
		[this](FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccessed)
		{
			this->OnRequestComplete(HttpRequest, HttpResponse, bSuccessed);
		}
	);
	TempDelegate.SimpleSingleRequestProgressDelegate.BindLambda(
		[this](FHttpRequestPtr HttpRequest, int32 SendBytes, int32 BytesReceived)
		{
			this->OnRequestProgress(HttpRequest, SendBytes, BytesReceived);
		}
	);
	TempDelegate.SimpleSingleRequestHeaderReceivedDelegate.BindLambda(
		[this](FHttpRequestPtr HttpRequest, const FString& HeaderName, const FString& NewHeaderValue)
		{
			this->OnRequestHeaderReceived(HttpRequest, HeaderName, NewHeaderValue);
		}
	);

	HttpObject = SimpleHTTPObject::FHTTP::CreateHTTPObject(TempDelegate);

}

FAutomatedCode_HTTP::~FAutomatedCode_HTTP()
{
}

void FAutomatedCode_HTTP::Init()
{
}

bool FAutomatedCode_HTTP::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig(InJsonStr, *GetSelfConfig<OwnConfig>());
}

bool FAutomatedCode_HTTP::BuildParameter()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	bool Result = true;
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(AutomationJson::RelatedString<OwnConfig>::URLKey, SelfConfig->URL);
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(AutomationJson::RelatedString<OwnConfig>::Sync_BooleanKey, SelfConfig->bSync);
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(AutomationJson::RelatedString<OwnConfig>::Binaries_BooleanKey, SelfConfig->bBinaries);
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(FHttpVerbTypeRelated::GetEnumNameKey(), SelfConfig->VerbType);
	Result &= SimpleAutomationToolCommon::ParseStrings(AutomationJson::RelatedString<OwnConfig>::CustomMetaDataKey, SelfConfig->CustomMetaData, false);
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(AutomationJson::RelatedString<OwnConfig>::ContentBodyKey, SelfConfig->ContentBody);
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(AutomationJson::RelatedString<OwnConfig>::Timeout_FloatKey, SelfConfig->Timeout);
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(AutomationJson::RelatedString<OwnConfig>::SavePathKey, SelfConfig->SavePath);
	
	return Result;
}

bool FAutomatedCode_HTTP::Execute()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	if (SelfConfig->Timeout <= 5.f)
	{
		SelfConfig->Timeout = 30.f;
	}

	HttpObject->SetOutTime(SelfConfig->Timeout);

	//检测
	switch (SelfConfig->VerbType)
	{
	case ESimpleHTTPVerbType::SIMPLE_GET:
	{
		if (SelfConfig->SavePath.IsEmpty())
		{
			SyhLogError(TEXT("Need a save path."));
			return false;
		}
	}


	default:
		break;
	}

	FGuid HttpGuid;
	if (SelfConfig->bBinaries)
	{
		if (!FPaths::FileExists(SelfConfig->ContentBody))
		{
			SyhLogError(TEXT("Unable to read binary data, please ensure the existence of the file."));
			return false;
		}

		TArray<uint8> Bytes;
		FFileHelper::LoadFileToArray(Bytes, *SelfConfig->ContentBody);
		HttpGuid = HttpObject->Request(SelfConfig->URL, Bytes, SelfConfig->CustomMetaData, SelfConfig->bSync, SelfConfig->VerbType);

	}
	else
	{
		HttpGuid = HttpObject->Request(SelfConfig->URL, SelfConfig->ContentBody, SelfConfig->CustomMetaData, SelfConfig->bSync, SelfConfig->VerbType);
	}

	//异步则无需判断bHttpSuccessed
	return HttpGuid.IsValid() && (!SelfConfig->bSync || bHttpSuccessed);
}

void FAutomatedCode_HTTP::OnRequestComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccessed)
{
	if (HttpRequest.IsValid() && HttpResponse.IsValid())
	{
		TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
		int32 InCode = HttpResponse->GetResponseCode();

		if (bSuccessed)
		{
			if (InCode == 200)
			{
				if (HttpRequest->GetVerb().Equals(TEXT("GET"), ESearchCase::IgnoreCase))
				{
					FFileHelper::SaveArrayToFile(HttpResponse->GetContent(), *SelfConfig->SavePath);
				}
				else
				{
					FString Msg = HttpResponse->GetContentAsString();
					SyhLogDisplay(TEXT("%s [%s]"), *HttpRequest->GetVerb(), *Msg);
				}
				bHttpSuccessed = true;
			}
			else
			{
				FString Msg = HttpResponse->GetContentAsString();
				SyhLogDisplay(TEXT("%s [%i]"), *Msg, InCode);
			}
		}
		else
		{
			FString Msg = HttpResponse->GetContentAsString();
			SyhLogDisplay(TEXT("%s [%i]"), *Msg, InCode);
		}

	}
	else
	{
		SyhLogError(TEXT("Http unknown error."));
	}
}

void FAutomatedCode_HTTP::OnRequestProgress(FHttpRequestPtr HttpRequest, int32 SendBytes, int32 BytesReceived)
{
	if (HttpRequest.IsValid())
	{
		if (HttpRequest->GetResponse().IsValid())
		{
			if(ContentLength == 0)
			{
				SyhLogDisplay(TEXT("SendBytes=%i, BytesReceived=%i"), SendBytes, BytesReceived);
			}
			else
			{
				float Rate = 0.f;
				if (BytesReceived != 0)
				{
					Rate = ((float)BytesReceived / (float)ContentLength) * 100.f;
				}
				else if(SendBytes != 0)
				{
					Rate = ((float)SendBytes / (float)ContentLength) * 100.f;
				}

				SyhLogDisplay(TEXT("SendBytes=%i, BytesReceived=%i, %.2f%%"), SendBytes, BytesReceived, Rate);
			}
		}
	}
}

void FAutomatedCode_HTTP::OnRequestHeaderReceived(FHttpRequestPtr HttpRequest, const FString& HeaderName, const FString& NewHeaderValue)
{
	if (HeaderName.Equals(TEXT("Content-Length"), ESearchCase::IgnoreCase))
	{
		ContentLength = FCString::Atoi(*NewHeaderValue);
		SyhLogDisplay(TEXT("ContentLength=%i"), ContentLength);
	}
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT