#include "Element/HttpClient/AutomatedHttp.h"
#include "HttpModule.h"
#include "HttpManager.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


FAutomatedCode_HTTP::FAutomatedCode_HTTP()
{
	bHttpSuccessed = false;
	ContentLength = 0;
	HttpObject = nullptr;
}

FAutomatedCode_HTTP::~FAutomatedCode_HTTP()
{
}

void FAutomatedCode_HTTP::Init()
{
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

bool FAutomatedCode_HTTP::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig(InJsonStr, *GetSelfConfig<OwnConfig>());
}

bool FAutomatedCode_HTTP::BuildParameter()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	bool Result = true;
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(Tool<OwnConfig>::URLKey, SelfConfig->URL);
	SimpleAutomationToolCommon::GetValueFromCommandLine(Tool<OwnConfig>::Sync_BooleanKey, SelfConfig->bSync);
	SimpleAutomationToolCommon::GetValueFromCommandLine(Tool<OwnConfig>::Binaries_BooleanKey, SelfConfig->bBinaries);
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(EnumTool<decltype(SelfConfig->VerbType)>::GetEnumNameKey(), SelfConfig->VerbType);
	SimpleAutomationToolCommon::ParseCommandLineByKey(Tool<OwnConfig>::CustomMetaDataKey, SelfConfig->CustomMetaData, false);
	SimpleAutomationToolCommon::GetValueFromCommandLine(Tool<OwnConfig>::ContentBodyKey, SelfConfig->ContentBody);
	SimpleAutomationToolCommon::GetValueFromCommandLine(Tool<OwnConfig>::Timeout_FloatKey, SelfConfig->Timeout);
	SimpleAutomationToolCommon::GetValueFromCommandLine(Tool<OwnConfig>::SavePathKey, SelfConfig->SavePath);
	
	if (Result)
	{
		FPaths::NormalizeDirectoryName(SelfConfig->SavePath);
		FPaths::RemoveDuplicateSlashes(SelfConfig->SavePath);
		SimpleAutomationToolCommon::RecognizePathSyntax(SelfConfig->SavePath);
		if(SelfConfig->bBinaries)
		{
			//二进制文件的情况下，ContentBody为文件路径
			FPaths::NormalizeFilename(SelfConfig->ContentBody);
			FPaths::RemoveDuplicateSlashes(SelfConfig->ContentBody);
			SimpleAutomationToolCommon::RecognizePathSyntax(SelfConfig->ContentBody);
		}
		return true;
	}
	else
	{
		SyhLogError(TEXT("BuildParameter is failure to execute. Locate in %s"), GetCommandName<Self>());
		return false;
	}
}

bool FAutomatedCode_HTTP::Execute()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	//设置超时
	if (SelfConfig->Timeout <= 5.f)
	{
		SelfConfig->Timeout = 30.f;
	}

	ResetTimeout();

	//不同操作的额外检测
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

	//发出http请求
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

void FAutomatedCode_HTTP::ResetTimeout()
{
	double SoftLimitSecondes = 2.;
	double HardLimitSecondes = 4.;

	GConfig->GetDouble(TEXT("HTTP"), TEXT("FlushSoftTimeLimitDefault"), SoftLimitSecondes, GEngineIni);
	GConfig->GetDouble(TEXT("HTTP"), TEXT("FlushHardTimeLimitDefault"), HardLimitSecondes, GEngineIni);
	
	bool bReloadConfig = false;

	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	if (SoftLimitSecondes > 0 && SoftLimitSecondes <= SelfConfig->Timeout)
	{
		GConfig->SetDouble(TEXT("HTTP"), TEXT("FlushSoftTimeLimitDefault"), SelfConfig->Timeout, GEngineIni);
		bReloadConfig = true;
	}

	if (HardLimitSecondes > 0 && HardLimitSecondes <= SelfConfig->Timeout * 2.)
	{
		GConfig->SetDouble(TEXT("HTTP"), TEXT("FlushHardTimeLimitDefault"), SelfConfig->Timeout * 2., GEngineIni);
		bReloadConfig = true;
	}
	
	if (bReloadConfig)
	{
		FHttpModule::Get().GetHttpManager().UpdateConfigs();
	}

	HttpObject->SetOutTime(SelfConfig->Timeout);
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT