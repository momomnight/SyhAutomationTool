// Copyright (C) RenZhai.2021.All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FSimpleProtobufModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
