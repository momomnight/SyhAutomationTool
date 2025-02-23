// Copyright (C) RenZhai.2023.All Rights Reserved.

#include "SimpleHttplibType.h"

#if PLATFORM_WINDOWS
#include "Windows/AllowWindowsPlatformTypes.h"
#endif // PLATFORM_WINDOWS
#define UI MY_HELLO
THIRD_PARTY_INCLUDES_START
#include "httplib/httplib.h"
THIRD_PARTY_INCLUDES_END
#undef UI

#if PLATFORM_WINDOWS
#include "Windows/HideWindowsPlatformTypes.h"
#endif // PLATFORM_WINDOWS

FHTTPLibResponse::FHTTPLibResponse()
{
}

FHTTPLibRequest::FHTTPLibRequest()
{
}

bool FHTTPLibRequest::IsMultipartFormData() const
{
	httplib::Request* InRequest = (httplib::Request*)Request;

	return InRequest->is_multipart_form_data();
}

bool FHTTPLibRequest::IsHasFile(const FString& InKey) const
{
	httplib::Request* InRequest = (httplib::Request*)Request;

	std::string InKeyString = TCHAR_TO_UTF8(*InKey);

	return InRequest->has_file(InKeyString);
}

bool FHTTPLibRequest::GetBody(int64 InSize, TArray<uint8>& OutData) const
{
	if (OutData.Num() >= InSize)
	{
		httplib::Request* InRequest = (httplib::Request*)Request;
		return FMemory::Memcpy(OutData.GetData(), InRequest->body.data(), InSize) != nullptr;
	}
	
	return false;
}

bool FHTTPLibRequest::GetBody(FString& OutJsonString) const
{
	httplib::Request* InRequest = (httplib::Request*)Request;
	OutJsonString = UTF8_TO_TCHAR(InRequest->body.c_str());

	return !OutJsonString.IsEmpty();
}

bool FHTTPLibRequest::GetFileValue(const FString& InKey, FString& OutJsonString) const
{
	OutJsonString.Empty();

	httplib::Request* InRequest = (httplib::Request*)Request;

	std::string InKeyString = TCHAR_TO_UTF8(*InKey);
	httplib::MultipartFormData InData = InRequest->get_file_value(InKeyString);

	OutJsonString = UTF8_TO_TCHAR(InData.content.c_str());

	return !OutJsonString.IsEmpty();
}

bool FHTTPLibRequest::GetFileValue(const FString& InKey, int32 InDataSize, TArray<uint8>& OutBytes) const
{
	OutBytes.Empty();
	OutBytes.SetNum(InDataSize);

	httplib::Request* InRequest = (httplib::Request*)Request;

	std::string InKeyString = TCHAR_TO_UTF8(*InKey);
	httplib::MultipartFormData InData = InRequest->get_file_value(InKeyString);

	return FMemory::Memcpy(OutBytes.GetData(), InData.content.c_str(), InDataSize) != nullptr;
}

void FHTTPLibResponse::SetStatus(int32 InNewStatus)
{
	httplib::Response* InResponse = (httplib::Response*)Response;

	InResponse->status = InNewStatus;
}

void FHTTPLibResponse::SetContent(const uint8* InData, int32 ImNum, const FString& ContentType)
{
	httplib::Response* InResponse = (httplib::Response*)Response;

	InResponse->set_content((const char*)InData, ImNum,TCHAR_TO_UTF8(*ContentType));
}

void FHTTPLibResponse::SetContent(const FString& InString, const FString& ContentType)
{
	httplib::Response* InResponse = (httplib::Response*)Response;

	InResponse->set_content(TCHAR_TO_UTF8(*InString), TCHAR_TO_UTF8(*ContentType));
}
