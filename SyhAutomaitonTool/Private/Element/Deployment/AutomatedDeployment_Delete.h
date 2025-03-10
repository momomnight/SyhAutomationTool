#pragma once

#include "CoreMinimal.h"
#include "Element/Core/Interface/AutoExecElements.h"


class FAutomatedCode_Deployment_Delete : public FAutoExecElements
{
public:
	using Base = FAutoExecElements;
	using Super = FAutoExecElements;
	using Self = FAutomatedCode_Deployment_Delete;
	using OwnConfig = FAutomatedDeploymentDeleteConfig;

public:
	FAutomatedCode_Deployment_Delete() {}

	virtual ~FAutomatedCode_Deployment_Delete() {};

	virtual void Init();

	virtual bool BuildParameter(const class FString& InJsonStr);

	virtual bool BuildParameter();

	virtual bool Execute();

	virtual uint32 GetType() const override { return (uint32)ECommandProtocol::CMD_Deployment_Delete; }


};