#include "Element/Compress/AutomatedCompress.h"
#include "Core/SimpleAutomationTool.h"
#include "SimpleZIPFunctionLibrary.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

static constexpr const TCHAR* ZipStr = TEXT(".zip");
static constexpr const TCHAR* RzStr = TEXT(".rz");
TCHAR* CompressStr = nullptr;

bool CheckExtension(const FString& InExtension)
{
	FString Temp = InExtension;
	if (InExtension.StartsWith(TEXT(".")))
	{
		Temp.RemoveFromStart(TEXT("."));
	}
	return EnumTool<EComparisionType>::IsValid(Temp);
}

struct FProcessPath_CompressUnderPath : public SimpleAutomationToolCommon::FProcessPath_Base
{
	
	//文件
	virtual void operator()(TMap<FString, FString>& OutContent, const FString& SourcePath, const FString& TargetPath)
	{
		SyhLogError(TEXT("bCompressEachFileUnderPath enabled, please privide a directory."))
	}
	//文件夹
	virtual void operator()(TMap<FString, FString>& OutContent, const FString& InFoundPath, const FString& SourcePath, const FString& TargetPath)
	{
		//对于文件，要获取最终路径，需要去除SourcePath，去除尾部拓展名，再拼接TargetPath和ZipStr
		//默认用Zip

		FFileStatData FileStatData = IFileManager::Get().GetStatData(*InFoundPath);
		FString Temp = FPaths::GetCleanFilename(InFoundPath);
			
		if (!FileStatData.bIsDirectory)
		{
			Temp.RemoveFromEnd(FPaths::GetExtension(InFoundPath, true));
		}
		OutContent.Add(InFoundPath, TargetPath / Temp + ZipStr);
	}
};

struct FProcessPath_Compress : public SimpleAutomationToolCommon::FProcessPath_Base
{
	//文件
	virtual void operator()(TMap<FString, FString>& OutContent, const FString& SourcePath, const FString& TargetPath)
	{
		OutContent.Add(SourcePath, TargetPath);
	}
	//文件夹
	virtual void operator()(TMap<FString, FString>& OutContent, const FString& InFoundPath, const FString& SourcePath, const FString& TargetPath)
	{
		check(0&&TEXT("Enter a incorrect FProcessPath_Compress::operator()"));
	}
};

//用于bCompressEachFileUnderPath == false的情况，需要检查提供的目标路径是否正确，删除存在的目标路径
struct FPreprocessPath_CheckAndDeleteTarget : SimpleAutomationToolCommon::FPreprocessPath_Base
{
	bool operator()(const FFileStatData& FileStatData, const FString& InPath)
	{
		FString Extension = FPaths::GetExtension(InPath);
		bool CheckResult = CheckExtension(Extension);
		if (CheckResult)
		{
			//目前程序可用的拓展名
			//检查完成后，查看目标路径是否存在，存在则删除
			return SimpleAutomationToolCommon::FPreprocessPath_DeletePath{}(FileStatData, InPath);

		}
		else
		{
			return false;
		}
	}
};


struct FProcessPath_DecompressUnderPath : public SimpleAutomationToolCommon::FProcessPath_Base
{

	//文件
	virtual void operator()(TMap<FString, FString>& OutContent, const FString& SourcePath, const FString& TargetPath)
	{
		SyhLogError(TEXT("bCompressEachFileUnderPath enabled, please privide a directory."))
	}
	//文件夹
	virtual void operator()(TMap<FString, FString>& OutContent, const FString& InFoundPath, const FString& SourcePath, const FString& TargetPath)
	{
		//对于文件，要获取最终路径，需要去除SourcePath，去除尾部拓展名，再拼接TargetPath和ZipStr

		FString Extension = FPaths::GetExtension(InFoundPath);

		if (!CheckExtension(Extension))
		{
			//检查路径是否是该程序合法压缩文件
			//不是，则剔除文件，可以剔除目录
			return;
		}

		FString Temp = FPaths::GetCleanFilename(InFoundPath);
		Temp.RemoveFromEnd(TEXT(".") + Extension);
		OutContent.Add(InFoundPath, TargetPath / Temp);
	}
};

struct FPreprocessPath_ConditionalDeleteTarget : SimpleAutomationToolCommon::FPreprocessPath_Base
{
	bool operator()(const FFileStatData& FileStatData, const FString& InPath)
	{
		if (FileStatData.bIsValid)
		{
			if (FileStatData.bIsDirectory)
			{
				//目录无需删除
				return true;
			}
			else
			{
				//文件需要删除
				return SimpleAutomationToolCommon::FPreprocessPath_DeletePath{}(FileStatData, InPath);
			}
		}
		return true;
	}
};

struct FProcessPath_Decompress : public SimpleAutomationToolCommon::FProcessPath_Base
{
	//文件
	virtual void operator()(TMap<FString, FString>& OutContent, const FString& SourcePath, const FString& TargetPath)
	{
		OutContent.Add(SourcePath, TargetPath);
	}
	//文件夹
	virtual void operator()(TMap<FString, FString>& OutContent, const FString& InFoundPath, const FString& SourcePath, const FString& TargetPath)
	{
		check(0 && TEXT("Enter a incorrect FProcessPath_Compress::operator()"));
	}
};

FAutomatedCode_Compress::FAutomatedCode_Compress()
{
}

FAutomatedCode_Compress::~FAutomatedCode_Compress()
{
}

void FAutomatedCode_Compress::Init()
{
}

bool FAutomatedCode_Compress::BuildParameter(const FString& InJsonStr)
{
	return false;
}

bool FAutomatedCode_Compress::BuildParameter()
{
	return false;
}

bool FAutomatedCode_Compress::Execute()
{
	SyhLogDisplay(TEXT("the command of UE_Plugin_Packaging is executing"));
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	check(!SelfConfig->PathOfSourceToTarget.IsEmpty());

	TMap<FString, FString> ExecuteContent;

	if (SelfConfig->bCompress)
	{
		if (SelfConfig->bCompressEachFileUnderPath)
		{
			//提供的路径为文件夹路径，并且压缩文件夹下的每一个文件或文件夹，不进行递归
			//如果提供了非文件夹路径，不会做任何事

			if (!SimpleAutomationToolCommon::PathFilter<
					SimpleAutomationToolCommon::FPreprocessPath_PathExists,
					SimpleAutomationToolCommon::FPreprocessPath_Nothing,
					FProcessPath_CompressUnderPath>
				(ExecuteContent, SelfConfig->PathOfSourceToTarget, true, false))
			{
				SyhLogError(TEXT("Fail to filter path."));
			}
		}
		else
		{
			//直接对提供的路径进行筛选
			//对于存在的目标路径直接删除
			if (!SimpleAutomationToolCommon::PathFilter<
					SimpleAutomationToolCommon::FPreprocessPath_PathExists,
					FPreprocessPath_CheckAndDeleteTarget,
					FProcessPath_Compress>
				(ExecuteContent, SelfConfig->PathOfSourceToTarget, false, false))
			{
				SyhLogError(TEXT("Fail to filter path."));
			}
		}
	}
	else
	{
		if (SelfConfig->bCompressEachFileUnderPath)
		{
			//提供的路径为文件夹路径，并且解压文件夹下的每一个压缩文件
			//如果提供了非文件夹路径，不会做任何事

			if (!SimpleAutomationToolCommon::PathFilter<
				SimpleAutomationToolCommon::FPreprocessPath_PathExists,
				SimpleAutomationToolCommon::FPreprocessPath_Nothing,
				FProcessPath_DecompressUnderPath>
				(ExecuteContent, SelfConfig->PathOfSourceToTarget, true, false))
			{
				SyhLogError(TEXT("Fail to filter path."));
			}
		}
		else
		{
			if (!SimpleAutomationToolCommon::PathFilter<
					SimpleAutomationToolCommon::FPreprocessPath_PathExists,
					FPreprocessPath_ConditionalDeleteTarget,
					FProcessPath_Compress>
				(ExecuteContent, SelfConfig->PathOfSourceToTarget, false, false))
			{
				SyhLogError(TEXT("Fail to filter path."));
			}
		}
	}

	const TCHAR* PrintStr = SelfConfig->bCompress ? TEXT("compress") : TEXT("decompress");

	//筛选后的路径，每一压缩成一个文件

	TMultiMap<FString, bool> TaskResult;
	for (auto& Temp : ExecuteContent)
	{
		SimpleAutomationToolCommon::HandleTimePath(Temp.Value);
		TaskResult.Add(Temp.Key, Execute(Temp.Key, Temp.Value));
	}

	SyhLogDisplay(TEXT("Start to evaluate results."));

	bool Result = SimpleAutomationTool::EvaluateTaskResult<FString>(TaskResult);

	for (auto& Temp : TaskResult)
	{
		if (Temp.Value)
		{
			SyhLogDisplay(TEXT("[%s] is successful to %s."), *Temp.Key, *PrintStr);
		}
		else
		{
			SyhLogError(TEXT("[%s] is failure to %s."), *Temp.Key, *PrintStr);
		}
	}

	SyhLogDisplay(TEXT("End to evaluate results."));

	if (Result)
	{
		return true;
	}
	else
	{
		SyhLogError(TEXT("the command of Compress is failure to execute"));
		return false;
	}
}

bool FAutomatedCode_Compress::Execute(const FString& InSource, const FString& InTarget)
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	if (SelfConfig->bCompress)
	{
		switch (SelfConfig->Method)
		{
		case ECompressType::COMPRESS_Zip:
		{
			return USimpleZIPFunctionLibrary::ZipByLoacl(InSource, InTarget, SelfConfig->Password);
		}
		case ECompressType::COMPRESS_RZ:
		{
			return USimpleZIPFunctionLibrary::CompressToLocalToLocal(InSource, InTarget);
		}
		}
	}
	else
	{
		switch (SelfConfig->Method)
		{
		case ECompressType::COMPRESS_Zip:
		{
			return USimpleZIPFunctionLibrary::UnzipByLoacl(InSource, InTarget, SelfConfig->Password);
		}
		case ECompressType::COMPRESS_RZ:
		{
			return USimpleZIPFunctionLibrary::DecompressFormLocalToLocal(InSource, InTarget);
		}
		}
	}
	return false;
}

FString FAutomatedCode_Compress::GetCompressFileExtension(ECompressType InCompressType)
{
	return TEXT(".") + EnumTool<ECompressType>::GetShortName(InCompressType).ToLower();
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
