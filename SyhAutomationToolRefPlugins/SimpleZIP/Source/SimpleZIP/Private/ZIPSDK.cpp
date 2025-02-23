// Copyright (C) RenZhai.2019.All Rights Reserved.

#include "ZIPSDK.h"
#include "SimpleZIPLibrary\xx\ZIP_SDK_LIBRARY/ZIP_SDK_Library.h"
#include "ZIPType.h"
#include "Async/AsyncWork.h"
#include "Async/TaskGraphInterfaces.h"
#include <string>
#include <locale>
#include <codecvt>
#include "Async/Async.h"

FSimpleDelegate ZipCompleteFunction;

#if PLATFORM_WINDOWS
#pragma optimize("",off) 
#endif

FCriticalSection ZipMutex;
class FZipAsynTask :public FNonAbandonableTask
{
public:
	FZipAsynTask(const TFunction<void()> InFuncton)
		:Functon(InFuncton)
	{
	}

	void DoWork()
	{
		Functon();
	}

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FZipAsynTask, STATGROUP_ThreadPoolAsyncTasks);
	}

protected:
	const TFunction<void()> Functon;
};

bool SimpleZIP::ZipByLoacl(const TCHAR* SrcPath, const TCHAR* DestFilename, const TCHAR* Password, bool bOverwrite)
{
	//防止乱码 从蓝图传过来中文 转换后容易出现乱码
	char InSrcPath[1024] = { 0 };
	char InDestFilename[1024] = { 0 };
	char InPassword[1024] = { 0 };

	std::wstring WSrcPath = std::wstring(SrcPath);
	std::wstring WDestFilename = std::wstring(DestFilename);
	std::wstring WPassword = std::wstring(Password);

	WstringToString(&WSrcPath, InSrcPath, 1024);
	WstringToString(&WDestFilename, InDestFilename, 1024);
	WstringToString(&WPassword, InPassword, 1024);

	auto Result = zip_file_by_loacl(InSrcPath, InDestFilename, InPassword, bOverwrite);

	if (IsInGameThread())
	{
		SimpleZIP::CollectErrorInformation(Result);
	}
	else
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([Result]()
		{
			SimpleZIP::CollectErrorInformation(Result);
		}, TStatId(), NULL, ENamedThreads::GameThread);
	}
	
	return Result == SIMPLE_ZIP_OK;
}

bool SimpleZIP::UnzipByLoacl(const TCHAR* SrcPath, const TCHAR* DestFilename, const TCHAR* Password, bool bOverwrite /*= true*/)
{
	char InSrcPath[1024] = { 0 };
	char InDestFilename[1024] = { 0 };
	char InPassword[1024] = { 0 };

	std::wstring WSrcPath = std::wstring(SrcPath);
	std::wstring WDestFilename = std::wstring(DestFilename);
	std::wstring WPassword = std::wstring(Password);

	WstringToString(&WSrcPath, InSrcPath, 1024);
	WstringToString(&WDestFilename, InDestFilename, 1024);
	WstringToString(&WPassword, InPassword, 1024);

	auto Result = unzip_file_by_loacl(InSrcPath, InDestFilename, InPassword, bOverwrite);

	if (IsInGameThread())
	{
		SimpleZIP::CollectErrorInformation(Result);
	}
	else
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([Result]()
		{
			SimpleZIP::CollectErrorInformation(Result);
		}, TStatId(), NULL, ENamedThreads::GameThread);
	}

	return Result == SIMPLE_ZIP_OK;
}

TFunction<void(EZipType, int32, int32, const FString&)> ZipFunction;
void ZipCallbackFunction(e_zip_typ InType, int Num, int InProgress, const wchar_t* InFileName)
{
	FScopeLock ScopeLock(&ZipMutex);
	auto EventRef = FFunctionGraphTask::CreateAndDispatchWhenReady([InType, Num, InProgress, InFileName]()
	{
		ZipFunction((EZipType)InType, Num, InProgress, InFileName != NULL ? FString(WCHAR_TO_TCHAR(InFileName)) : FString(TEXT("Complete.")));
	}, TStatId(), nullptr, ENamedThreads::GameThread);
}

void SimpleZIP::BindFunction(TFunction<void(EZipType, int32, int32, const FString&)> InZipFunction)
{
	ZipFunction = InZipFunction;
	zip_file_Callback_function(ZipCallbackFunction);
}

void SimpleZIP::BindCompleteFunction(FSimpleDelegate InZipFunction)
{
	ZipCompleteFunction = InZipFunction;
}

void SimpleZIP::ClearZipFileCallbackFunction()
{
	ZipCompleteFunction.Unbind();
	clear_Callback_function();
}

void SimpleZIP::AsyncZipByLoacl(const FString& SrcPath, const FString& DestFilename, const FString& Password, bool bOverwrite)
{
	auto Lamada = [=]()
	{
		//FString InSrcPath = SrcPath;
		//FString InDestFilename = SrcPath;
		//FString InPassword = Password;
		if (!ZipByLoacl(*SrcPath, *DestFilename, *Password, bOverwrite))
		{
			//解压失败
		}

		ZipCompleteFunction.ExecuteIfBound();
	};

	(new FAutoDeleteAsyncTask<FZipAsynTask>(Lamada))->StartBackgroundTask();
}

void SimpleZIP::AsyncUnZipByLoacl(const FString& SrcPath, const FString& DestFilename, const FString& Password, bool bOverwrite /*= true*/)
{
	auto Lamada = [=]()
	{	
		UnzipByLoacl(*SrcPath,*DestFilename,*Password, bOverwrite);

		ZipCompleteFunction.ExecuteIfBound();
	};

	(new FAutoDeleteAsyncTask<FZipAsynTask>(Lamada))->StartBackgroundTask();
}

#if PLATFORM_WINDOWS
#pragma optimize("",on) 
#endif