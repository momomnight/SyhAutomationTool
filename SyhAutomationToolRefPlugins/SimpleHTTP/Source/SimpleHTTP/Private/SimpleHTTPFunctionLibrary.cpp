// Copyright (C) RenZhai.2020.All Rights Reserved.


#include "SimpleHTTPFunctionLibrary.h"
#include "SimpleHttpManage.h"
#include "HTTP/Core/SimpleHttpActionRequest.h"
#include "HTTP/Core/SimpleHTTPHandle.h"

void USimpleHTTPFunctionLibrary::Pause()
{
	SIMPLE_HTTP.Suspend();
}

void USimpleHTTPFunctionLibrary::Awaken()
{
	SIMPLE_HTTP.Awaken();
}

bool USimpleHTTPFunctionLibrary::Cancel()
{
	return SIMPLE_HTTP.Cancel();;
}

bool USimpleHTTPFunctionLibrary::CancelByHandle(const FName& Handle)
{
	return SIMPLE_HTTP.Cancel((FSimpleHTTPHandle)Handle);
}

FName USimpleHTTPFunctionLibrary::GetHandleByLastExecutionRequest()
{
	return SIMPLE_HTTP.GetHandleByLastExecutionRequest();
}

bool USimpleHTTPFunctionLibrary::PostRequest(const FString &InURL, const FString &InParam, const FSimpleHTTPBPResponseDelegate &BPResponseDelegate)
{
	return SIMPLE_HTTP.PostRequest(*InURL,*InParam, BPResponseDelegate);
}

void USimpleHTTPFunctionLibrary::Tick(float DeltaTime)
{
	FSimpleHttpManage::Get()->Tick(DeltaTime);
}

bool USimpleHTTPFunctionLibrary::GetObjectToMemory(const FSimpleHTTPBPResponseDelegate &BPResponseDelegate, const FString &URL)
{
	return SIMPLE_HTTP.GetObjectToMemory(BPResponseDelegate, URL);
}

bool USimpleHTTPFunctionLibrary::GetObjectToLocal(const FSimpleHTTPBPResponseDelegate &BPResponseDelegate, const FString &URL, const FString &SavePaths)
{
	return SIMPLE_HTTP.GetObjectToLocal(BPResponseDelegate, URL, SavePaths);
}

bool USimpleHTTPFunctionLibrary::PutObjectFromLocal(const FSimpleHTTPBPResponseDelegate &BPResponseDelegate, const FString &URL, const FString &LocalPaths)
{
	return SIMPLE_HTTP.PutObjectFromLocal(BPResponseDelegate, URL, LocalPaths);
}

bool USimpleHTTPFunctionLibrary::PutObjectFromBuffer(const FSimpleHTTPBPResponseDelegate &BPResponseDelegate, const FString &URL, const TArray<uint8> &Buffer)
{
	return SIMPLE_HTTP.PutObjectFromBuffer(BPResponseDelegate, URL, Buffer);
}

bool USimpleHTTPFunctionLibrary::PutObjectFromString(const FSimpleHTTPBPResponseDelegate& BPResponseDelegate, const FString& URL, const FString& InBuffer)
{
	return SIMPLE_HTTP.PutObjectFromString(BPResponseDelegate, URL, InBuffer);
}

bool USimpleHTTPFunctionLibrary::DeleteObject(const FSimpleHTTPBPResponseDelegate &BPResponseDelegate, const FString &URL)
{
	return SIMPLE_HTTP.DeleteObject(BPResponseDelegate, URL);
}

bool USimpleHTTPFunctionLibrary::PutObjectsFromLocal(const FSimpleHTTPBPResponseDelegate &BPResponseDelegate, const FString &URL, const FString &LocalPaths)
{
	return SIMPLE_HTTP.PutObjectsFromLocal(BPResponseDelegate, URL,LocalPaths);
}

void USimpleHTTPFunctionLibrary::GetObjectsToLocal(const FSimpleHTTPBPResponseDelegate &BPResponseDelegate, const TArray<FString> &URL, const FString &SavePaths)
{
	SIMPLE_HTTP.GetObjectsToLocal(BPResponseDelegate, URL, SavePaths);
}

void USimpleHTTPFunctionLibrary::GetObjectsToMemory(const FSimpleHTTPBPResponseDelegate &BPResponseDelegate, const TArray<FString> &URL)
{
	SIMPLE_HTTP.GetObjectsToMemory(BPResponseDelegate, URL);
}

void USimpleHTTPFunctionLibrary::DeleteObjects(const FSimpleHTTPBPResponseDelegate &BPResponseDelegate, const TArray<FString> &URL)
{
	SIMPLE_HTTP.DeleteObjects(BPResponseDelegate, URL);
}

bool USimpleHTTPFunctionLibrary::RequestByConentString(
	ESimpleHTTPVerbType InType,
	const FString& InURL,
	const TMap<FString, FString>& InHeadMeta,
	const FString& InContent, 
	const FSimpleHTTPBPResponseDelegate& BPResponseDelegate)
{
	return SIMPLE_HTTP.RequestByConentString(InType, InURL, InHeadMeta, InContent, BPResponseDelegate);
}

bool USimpleHTTPFunctionLibrary::RequestByConentByte(
	ESimpleHTTPVerbType InType,
	const FString& InURL, 
	const TMap<FString, FString>& InHeadMeta, 
	const TArray<uint8>& InBytes,
	const FSimpleHTTPBPResponseDelegate& BPResponseDelegate)
{
	return SIMPLE_HTTP.RequestByConentByte(InType, InURL, InHeadMeta, InBytes, BPResponseDelegate);
}