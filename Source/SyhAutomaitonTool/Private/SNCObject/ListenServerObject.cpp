#include "SNCObject/ListenServerObject.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


UListenServerObject::UListenServerObject()
{
}

void UListenServerObject::Init()
{
	Super::Init();
}

void UListenServerObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void UListenServerObject::Close()
{
	Super::Close();
}

void UListenServerObject::ReceiveProtocol(uint32 InProtocol)
{
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT