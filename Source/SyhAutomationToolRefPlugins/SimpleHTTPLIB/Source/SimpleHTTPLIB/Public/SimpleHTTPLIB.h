// Copyright (C) RenZhai.2023.All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FSimpleHTTPLIBModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
