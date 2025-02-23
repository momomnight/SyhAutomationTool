// Copyright (C) RenZhai.2019.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

namespace SimpleZIP
{
	SIMPLEZIP_API bool ZipByLoacl(const TCHAR* SrcPath, const TCHAR* DestFilename, const TCHAR* Password, bool bOverwrite = true);
	SIMPLEZIP_API bool UnzipByLoacl(const TCHAR* SrcPath, const TCHAR* DestFilename, const TCHAR* Password, bool bOverwrite = true);
	
	SIMPLEZIP_API void BindFunction(TFunction<void(EZipType, int32, int32, const FString&)> InZipFunction);
	SIMPLEZIP_API void BindCompleteFunction(FSimpleDelegate InZipFunction);
	SIMPLEZIP_API void ClearZipFileCallbackFunction();

	SIMPLEZIP_API void AsyncZipByLoacl(const FString& SrcPath, const FString& DestFilename, const FString& Password, bool bOverwrite);
	SIMPLEZIP_API void AsyncUnZipByLoacl(const FString& SrcPath, const FString& DestFilename, const FString& Password, bool bOverwrite = true);
}