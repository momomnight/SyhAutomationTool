// Copyright (C) RenZhai.2023.All Rights Reserved.

#include "HTTPServer/SimpleSSLHTTPServer.h"

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

FSimpleSSLHTTPServer::FSimpleSSLHTTPServer(const FString& InIP, int32 InPort, const FString& InCertFile, const FString& InKeyFile)
	:FSimpleHTTPServer(InIP, InPort)
{
	CertFile = InCertFile;
	KeyFile = InKeyFile;
}

void FSimpleSSLHTTPServer::CreateServer()
{
	std::string CertFileString = TCHAR_TO_UTF8(*CertFile);
	std::string KeyFileString = TCHAR_TO_UTF8(*KeyFile);

	Server = new httplib::SSLServer(CertFileString.c_str(), KeyFileString.c_str());
}