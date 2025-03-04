#pragma once

#include "CoreMinimal.h"
#include "Element/Core/Interface/AutoExecElements.h"


class FAutomatedCode_Deployment_Copy : public FAutoExecElements
{
public:
	using Super = FAutoExecElements;
	using Self = FAutomatedCode_Deployment_Copy;
	using OwnConfig = FAutomatedDeploymentCopyConfig;

public:
	FAutomatedCode_Deployment_Copy() {}

	virtual ~FAutomatedCode_Deployment_Copy() {};

	virtual void Init();

	virtual bool BuildParameter(const class FString& InJsonStr);

	virtual bool BuildParameter();

	virtual bool Execute();

	virtual bool Exit();

	virtual uint32 GetType() const override { return (uint32)ECommandProtocol::CMD_Deployment_Copy; }

};