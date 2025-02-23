// Copyright (C) RenZhai.2023.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "HTTPServer/SimpleHTTPServer.h"
#include "HTTPServer/SimpleSSLHTTPServer.h"

class SIMPLEHTTPLIB_API FSimpleHttplibManage
{
public:
	FSimpleHttplibManage();
	~FSimpleHttplibManage();

public:
	static FSimpleHttplibManage* Get();
	static void Destroy();

public:
	FSimpleHTTPServer* CreateHTTPServer(const FString& InIP, int32 InPort);
	FSimpleSSLHTTPServer* CreateSSLHTTPServer(const FString& InIP, int32 InPort,const FString& InCertFile, const FString& InKeyFile);

	void DestroyServer(FSimpleHTTPServer *InServer);

protected:
	static FSimpleHttplibManage* Instance;
};
