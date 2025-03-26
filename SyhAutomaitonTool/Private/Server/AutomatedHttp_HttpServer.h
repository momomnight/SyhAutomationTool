#pragma once

#include "CoreMinimal.h"
#include "SimpleConfigMacro.h"
#include "SimpleHttplibManage.h"
#include "SyhAutomationToolType.h"

DEFINE_GLOBAL_SINGLETON_H(, AutomatedHttp_HttpServer,
	void Init();
	void Tick(float DeltaSeconds);
	bool IsValid() const;

	DEFINE_VARIABLE_SINGLETON_VALUE_NO_CONST(FSimpleHTTPServer*, HttpServer, NULL);
	DEFINE_VARIABLE_SINGLETON(FAutomatedHTTPServerConfig, Config);
)

