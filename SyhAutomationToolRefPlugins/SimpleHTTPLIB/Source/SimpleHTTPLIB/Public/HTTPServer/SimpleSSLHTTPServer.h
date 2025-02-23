// Copyright (C) RenZhai.2023.All Rights Reserved.

#pragma once

#include "SimpleHTTPServer.h"

class SIMPLEHTTPLIB_API FSimpleSSLHTTPServer : public FSimpleHTTPServer
{
public:
	FSimpleSSLHTTPServer(const FString& InIP, int32 InPort,const FString &InCertFile, const FString& InKeyFile);

public:
	virtual void CreateServer();

protected:
	FString CertFile;
	FString KeyFile;
};