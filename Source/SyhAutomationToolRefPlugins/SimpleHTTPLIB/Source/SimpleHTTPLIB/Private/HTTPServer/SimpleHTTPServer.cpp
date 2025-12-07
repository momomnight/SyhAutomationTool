// Copyright (C) RenZhai.2023.All Rights Reserved.

#include "HTTPServer/SimpleHTTPServer.h"

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

#include "Async/Async.h"

FSimpleHTTPServer::FSimpleHTTPServer(const FString& InIP, int32 InPort)
{
	IP = InIP;
	Port = InPort;

	SocketThread = nullptr;
	Server = nullptr;
}

void FSimpleHTTPServer::Stop()
{

}

void FSimpleHTTPServer::CreateServer()
{
	Server = new httplib::Server();
}

void FSimpleHTTPServer::Start()
{
	if (SocketThread == nullptr)
	{
		FString ThreadName = TEXT("HTTPServer ");
		ThreadName.AppendInt(FAsyncThreadIndex::GetNext());
		SocketThread = FRunnableThread::Create(this, *ThreadName, 128 * 1024, TPri_AboveNormal, FPlatformAffinity::GetPoolThreadMask());
	}
}

bool FSimpleHTTPServer::IsValid() const
{
	return ((httplib::Server*)Server)->is_valid();
}

void ToHTTPLibRequest(const httplib::Request& InRequest, FHTTPLibRequest &OutHTTPLibRequest)
{
	//基础方法
	OutHTTPLibRequest.Method = UTF8_TO_TCHAR(InRequest.method.c_str());
	OutHTTPLibRequest.Path = UTF8_TO_TCHAR(InRequest.path.c_str());
	OutHTTPLibRequest.Body = UTF8_TO_TCHAR(InRequest.body.c_str());

	for (auto& Tmp : InRequest.headers)
	{
		OutHTTPLibRequest.Headers.Add(Tmp.first.c_str(), Tmp.second.c_str());
	}

	//端口和IP
	OutHTTPLibRequest.RemoteAddr = UTF8_TO_TCHAR(InRequest.remote_addr.c_str());
	OutHTTPLibRequest.RemotePort = InRequest.remote_port;
	OutHTTPLibRequest.LocalAddr = UTF8_TO_TCHAR(InRequest.local_addr.c_str());
	OutHTTPLibRequest.LocalPort = InRequest.local_port;

	//服务器版本信息
	OutHTTPLibRequest.Version = UTF8_TO_TCHAR(InRequest.version.c_str());
	OutHTTPLibRequest.Target = UTF8_TO_TCHAR(InRequest.version.c_str());

	for (auto& Tmp : InRequest.params)
	{
		OutHTTPLibRequest.Param.Add(Tmp.first.c_str(), Tmp.second.c_str());
	}

	OutHTTPLibRequest.Request = const_cast<httplib::Request*>(&InRequest);
}

void ToHTTPLibResponse(const httplib::Response& InResponse, FHTTPLibResponse &OutHTTPLibResponse)
{
	OutHTTPLibResponse.Version = UTF8_TO_TCHAR(InResponse.version.c_str());
	OutHTTPLibResponse.Reason = UTF8_TO_TCHAR(InResponse.reason.c_str());
	OutHTTPLibResponse.Body = UTF8_TO_TCHAR(InResponse.body.c_str());
	OutHTTPLibResponse.Location = UTF8_TO_TCHAR(InResponse.location.c_str());
	OutHTTPLibResponse.Status = InResponse.status;

	OutHTTPLibResponse.Response = const_cast<httplib::Response*>(&InResponse);
}

bool FSimpleHTTPServer::BindAction(
	const FString& InURLProtocol,
	EHTTPLibVerbType InType, 
	TFunction<void(const FHTTPLibRequest&,FHTTPLibResponse&)> InFunc) const
{
	if (Server)
	{
		httplib::Server* InHTTPServer = (httplib::Server*)Server;

		std::string InURLProtocolString = TCHAR_TO_UTF8(*InURLProtocol);

		auto ExecuteCode = [=](const httplib::Request& InRequest, httplib::Response& InResponse)
		{
			FHTTPLibRequest HTTPLibRequest;
			ToHTTPLibRequest(InRequest, HTTPLibRequest);

			FHTTPLibResponse HTTPLibResponse;
			ToHTTPLibResponse(InResponse, HTTPLibResponse);

			InFunc(HTTPLibRequest, HTTPLibResponse);

			//响应处理
			if (!HTTPLibResponse.Body.IsEmpty())
			{
				HTTPLibResponse.SetContent(HTTPLibResponse.Body,TEXT("application/json"));
			}

			if (HTTPLibResponse.Status != INDEX_NONE)
			{
				HTTPLibResponse.SetStatus(HTTPLibResponse.Status);
			}
		};

		switch (InType)
		{
			case EHTTPLibVerbType::HTTPLIB_POST:
			{
				InHTTPServer->Post(InURLProtocolString, ExecuteCode);

				break;
			}
			case EHTTPLibVerbType::HTTPLIB_PUT:
			{
				InHTTPServer->Put(InURLProtocolString,ExecuteCode);

				break;
			}
			case EHTTPLibVerbType::HTTPLIB_GET:
			{
				InHTTPServer->Get(InURLProtocolString, ExecuteCode);

				break;
			}
			case EHTTPLibVerbType::HTTPLIB_DELETE:
			{
				InHTTPServer->Delete(InURLProtocolString,ExecuteCode);

				break;
			}
		}
	}

	return false;
}

bool FSimpleHTTPServer::BindErrorHandler(TFunction<void(const FHTTPLibRequest&, const FHTTPLibResponse&)> InFunc) const
{
	if (Server)
	{
		httplib::Server* InHTTPServer = (httplib::Server*)Server;

		auto ExecuteCode = [InFunc](const httplib::Request& InRequest, httplib::Response& InResponse)
		{
			FHTTPLibRequest HTTPLibRequest;
			ToHTTPLibRequest(InRequest, HTTPLibRequest);

			FHTTPLibResponse HTTPLibResponse;
			ToHTTPLibResponse(InResponse, HTTPLibResponse);

			InFunc(HTTPLibRequest, HTTPLibResponse);
		};

		InHTTPServer->set_error_handler(ExecuteCode);
		return true;
	}

	return false;
}

bool FSimpleHTTPServer::BindLogger(TFunction<void(const FHTTPLibRequest&, const FHTTPLibResponse&)> InFunc) const
{
	if (Server)
	{
		httplib::Server* InHTTPServer = (httplib::Server*)Server;

		auto ExecuteCode = [InFunc](const httplib::Request& InRequest,const httplib::Response& InResponse)
		{
			FHTTPLibRequest HTTPLibRequest;
			ToHTTPLibRequest(InRequest, HTTPLibRequest);

			FHTTPLibResponse HTTPLibResponse;
			ToHTTPLibResponse(InResponse, HTTPLibResponse);

			InFunc(HTTPLibRequest, HTTPLibResponse);
		};

		InHTTPServer->set_logger(ExecuteCode);
		return true;
	}

	return false;
}

uint32 FSimpleHTTPServer::Run()
{
	if (Server)
	{
		httplib::Server* InHTTPServer = (httplib::Server*)Server;
		
		if (!InHTTPServer->is_valid())
		{
			return 1;
		}

		std::string IPString = TCHAR_TO_UTF8(*IP);
		InHTTPServer->listen(IPString, Port);
	}

	return 0;
}

