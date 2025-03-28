#include "Server/AutomatedHttp_HttpServer.h"
#include "SyhAutomationToolCommon.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

DEFINE_GLOBAL_SINGLETON_CPP(AutomatedHttp_HttpServer);

void FAutomatedHttp_HttpServer::Init()
{

	SimpleAutomationToolCommon::GetValueFromCommandLine<bool>(Tool<FAutomatedHTTPServerConfig>::bHttps_BooleanKey, Config.bHttps);
	
	if(Config.bHttps)
	{
		bool SubResult = true;
		SubResult &= SimpleAutomationToolCommon::GetValueFromCommandLine<FString>(Tool<FAutomatedHTTPServerConfig>::CertificateKey, Config.Certificate);
		SubResult &= SimpleAutomationToolCommon::GetValueFromCommandLine<FString>(Tool<FAutomatedHTTPServerConfig>::KeyKey, Config.Key);
		if (!SubResult)
		{
			SyhLogError(TEXT("If bHttps is enabled, Certificate and Key must be provided."));
			return;
		}
	}

	bool Result = true;
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine<FString>(Tool<FAutomatedHTTPServerConfig>::IPKey, Config.IP);
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine<int32>(Tool<FAutomatedHTTPServerConfig>::Port_IntKey, Config.Port);
	SimpleAutomationToolCommon::GetValueFromCommandLine<float>(Tool<FAutomatedHTTPServerConfig>::Timeout_FloatKey, Config.Timeout);
	if (Result)
	{
		SyhLogDisplay(TEXT("HttpServer IP: %s."), *Config.IP);
		SyhLogDisplay(TEXT("HttpServer Port: %d."), Config.Port);
		if (Config.bHttps)
		{
			FPaths::NormalizeFilename(Config.Certificate);
			FPaths::NormalizeFilename(Config.Key);

			SyhLogDisplay(TEXT("HttpServer Use https."));
			SyhLogDisplay(TEXT("HttpServer Certificate: %s."), *Config.Certificate);
			SyhLogDisplay(TEXT("HttpServer Key: %s."), *Config.Key);
			HttpServer = FSimpleHttplibManage::Get()->CreateSSLHTTPServer
			(
				Config.IP,
				Config.Port,
				Config.Certificate,
				Config.Key
			);
		}
		else
		{
			SyhLogDisplay(TEXT("HttpServer Use http."));
			HttpServer = FSimpleHttplibManage::Get()->CreateHTTPServer
			(
				Config.IP,
				Config.Port
			);
		}

		HttpServer->CreateServer();

		//绑定协议
		{
			HttpServer->BindAction(TEXT("/test"), EHTTPLibVerbType::HTTPLIB_POST,
				[&](const FHTTPLibRequest& InRequest, FHTTPLibResponse& InResponse)
				{
					//执行完成，就已经发送响应报文了
					InResponse.SetStatus(200);
					InResponse.SetContent(TEXT("{\"Msg\":\"Ok.\"}"), TEXT("application/json"));
					SyhLogDisplay(TEXT("--------------------------------------------------------------------------------"));
					SyhLogDisplay(TEXT("HttpServer Client %s:%d requests."), *InRequest.RemoteAddr, InRequest.RemotePort);
					SyhLogDisplay(TEXT("HttpServer VerbType: Post"));
					SyhLogDisplay(TEXT("--------------------------------------------------------------------------------"));
					//InRequest.
					//接脚本
				
				});
		}

		SyhLogDisplay(TEXT("HttpServer %s://%s:%d"), Config.bHttps ? TEXT("https") : TEXT("http"), *Config.IP, Config.Port);
		SyhLogDisplay(TEXT("HttpServer Start."));
		HttpServer->Start();

	}
	else
	{
		SyhLogError(TEXT("HttpServer initialization failed, please provided correct command line argument."));
	}
}

void FAutomatedHttp_HttpServer::Tick(float DeltaSeconds)
{
	//SyhLogDisplay(TEXT("HttpServer Tick."));
}

bool FAutomatedHttp_HttpServer::IsValid() const
{
	return HttpServer != nullptr;
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT