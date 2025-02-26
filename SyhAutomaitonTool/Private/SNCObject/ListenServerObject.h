#pragma once

#include "Element/Core/Interface/AutoExecElements.h"

#include "UObject\SimpleController.h"

#include "ListenServerObject.generated.h"


UCLASS()
class UListenServerObject : public USimpleController
{
	GENERATED_BODY()

public:

	UListenServerObject();

public:
	virtual void Init();
	virtual void Tick(float DeltaTime);
	virtual void Close();
	virtual void ReceiveProtocol(uint32 InProtocol);

};