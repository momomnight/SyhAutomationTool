// Copyright (C) RenZhai.2023.All Rights Reserved.

#include "SimpleHttplibManage.h"

FSimpleHttplibManage* FSimpleHttplibManage::Instance = nullptr;

FSimpleHttplibManage::FSimpleHttplibManage()
{
}

FSimpleHttplibManage::~FSimpleHttplibManage()
{
}

FSimpleHttplibManage* FSimpleHttplibManage::Get()
{
	if (!Instance)
	{
		Instance = new FSimpleHttplibManage();
	}

    return Instance;
}

void FSimpleHttplibManage::Destroy()
{
	if (Instance)
	{
		delete Instance;
	}

	Instance = nullptr;
}

FSimpleHTTPServer* FSimpleHttplibManage::CreateHTTPServer(const FString& InIP, int32 InPort)
{
	return new FSimpleHTTPServer(InIP, InPort);
}

FSimpleSSLHTTPServer* FSimpleHttplibManage::CreateSSLHTTPServer(const FString& InIP, int32 InPort, const FString& InCertFile, const FString& InKeyFile)
{
	return new FSimpleSSLHTTPServer(InIP, InPort, InCertFile, InKeyFile);
}

void FSimpleHttplibManage::DestroyServer(FSimpleHTTPServer* InServer)
{
	if (InServer)
	{
		InServer->Stop();
		delete InServer;
	}

	InServer = nullptr;
}
