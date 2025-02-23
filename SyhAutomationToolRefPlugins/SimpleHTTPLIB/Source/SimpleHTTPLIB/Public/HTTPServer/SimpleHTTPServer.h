// Copyright (C) RenZhai.2023.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "HAL/Runnable.h"
#include "SimpleHttplibType.h"

class SIMPLEHTTPLIB_API FSimpleHTTPServer : public FRunnable
{
public:
	FSimpleHTTPServer(const FString &InIP,int32 InPort);
	virtual ~FSimpleHTTPServer(){}

	// Begin FRunnable Interface
	virtual void Stop() override;
	// End FRunnable Interface

public:
	virtual void CreateServer();
	virtual void Start();
	virtual bool IsValid() const;

public:
	virtual bool BindAction(const FString &InURLProtocol,EHTTPLibVerbType InType,TFunction<void(const FHTTPLibRequest &,FHTTPLibResponse &)> InFunc) const;
	virtual bool BindErrorHandler(TFunction<void(const FHTTPLibRequest&, const FHTTPLibResponse&)> InFunc) const;
	virtual bool BindLogger(TFunction<void(const FHTTPLibRequest&, const FHTTPLibResponse&)> InFunc) const;

protected:
	// Begin FRunnable Interface
	virtual bool Init() override { return true; }
	virtual uint32 Run() override;
	virtual void Exit() override {}
	// End FRunnable Interface

protected:
	FString IP;
	int32 Port;

	class FRunnableThread* SocketThread;
	void* Server;
};