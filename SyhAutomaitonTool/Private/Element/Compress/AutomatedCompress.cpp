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
const TCHAR* CompressStr = nullptr;

bool CheckExtension(const FString& InExtension)
{
	FString Temp = InExtension;
	if (InExtension.StartsWith(TEXT(".")))
	{
		Temp.RemoveFromStart(TEXT("."));
	}
	return EnumTool<ECompressType>::IsValid(Temp);
}
bool IsUseZip()
{
	return CompressStr == ZipStr;
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
			
		if (FileStatData.bIsDirectory)
		{
			OutContent.Add(InFoundPath, TargetPath / Temp + CompressStr);
		}
		else
		{
			if (IsUseZip())
			{
				Temp.RemoveFromEnd(FPaths::GetExtension(InFoundPath, true));
				OutContent.Add(InFoundPath, TargetPath / Temp + CompressStr);
			}
			else
			{
				//rz压缩算法，不支持单独文件压缩
				return;
			}
		}
	}
};

struct FProcessPath_Compress : public SimpleAutomationToolCommon::FProcessPath_Base
{
	//文件
	virtual void operator()(TMap<FString, FString>& OutContent, const FString& SourcePath, const FString& TargetPath)
	{
		FString Extension = FPaths::GetExtension(TargetPath, true);

		if (CheckExtension(Extension))
		{
			//提供了合法的拓展名，可根据拓展名使用具体压缩算法
			OutContent.Add(SourcePath, TargetPath);
		}
		else
		{
			//未提供合法拓展名, 则去除拓展名，拼接上提供的拓展名
			FString Temp = FPaths::GetCleanFilename(SourcePath);
			Temp.RemoveFromEnd(Extension);
			OutContent.Add(SourcePath, TargetPath / Temp + CompressStr);
		}


	}
	//文件夹
	virtual void operator()(TMap<FString, FString>& OutContent, const FString& InFoundPath, const FString& SourcePath, const FString& TargetPath)
	{
		check(0&&TEXT("Enter a incorrect FProcessPath_Compress::operator()"));
	}
};

//用于bCompressEachFileUnderPath == false的情况，需要检查提供的目标路径是否正确，删除存在的目标路径
struct FPreprocessPath_CheckSource : SimpleAutomationToolCommon::FPreprocessPath_Base
{
	bool operator()(const FFileStatData& FileStatData, const FString& InPath)
	{
		if(FileStatData.bIsValid && !FileStatData.bIsDirectory)
		{
			FString Extension = FPaths::GetExtension(InPath);
			return CheckExtension(Extension);
		}
		return false;
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

		FString Extension = FPaths::GetExtension(InFoundPath, true);

		if (!CheckExtension(Extension))
		{
			//检查路径是否是该程序合法压缩文件
			//不是，则剔除文件，可以剔除目录
			return;
		}

		if (Extension.Equals(ZipStr, ESearchCase::IgnoreCase))
		{
			//zip解压缩会在提供的目录路径下解压缩
			FString Temp = FPaths::GetCleanFilename(InFoundPath);
			Temp.RemoveFromEnd(Extension);
			OutContent.Add(InFoundPath, TargetPath / Temp);
		}
		else
		{
			//rz只能压缩文件夹，故文件无法解压缩，文件解压缩会自动生成文件夹，故无需拼接额外文件夹
			OutContent.Add(InFoundPath, TargetPath);
		}


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
	return AutomationJson::JsonStringToAutomatedConfig(InJsonStr, *GetSelfConfig<OwnConfig>());
}

bool FAutomatedCode_Compress::BuildParameter()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	bool Result = true;
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine<bool>(Tool<OwnConfig>::Compress_BooleanKey, SelfConfig->bCompress);
	SimpleAutomationToolCommon::GetValueFromCommandLine<bool>(Tool<OwnConfig>::CompressEachFileUnderPath_BooleanKey, SelfConfig->bCompressEachFileUnderPath);
	SimpleAutomationToolCommon::GetValueFromCommandLine<ECompressType>(Tool<OwnConfig>::CompressMethodKey, SelfConfig->CompressMethod);
	if(SelfConfig->CompressMethod == ECompressType::COMPRESS_Zip)
	{
		SimpleAutomationToolCommon::GetValueFromCommandLine<FString>(Tool<OwnConfig>::PasswordKey, SelfConfig->Password);
	}
	Result &= SimpleAutomationToolCommon::ParseCommandLineByKey(Tool<OwnConfig>::PathOfSourceToTargetKey, SelfConfig->PathOfSourceToTarget, true);
	
	if (!Result)
	{
		SyhLogError(TEXT("BuildParameter is failure to execute. Locate in %s"), GetCommandName<Self>());
	}

	return Result;
}

bool FAutomatedCode_Compress::Execute()
{
	SyhLogDisplay(TEXT("the command of Compress is executing"));
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	check(!SelfConfig->PathOfSourceToTarget.IsEmpty());

	TMap<FString, FString> ExecuteContent;
	
	//通知函数对象使用的算法, 可能不使用，会根据文件拓展名使用具体算法
	SetCompressFileExtension(SelfConfig->CompressMethod);
	if (SelfConfig->bCompress)
	{
		if (SelfConfig->bCompressEachFileUnderPath)
		{
			//key = SourceDirectory
			//value = TargetDirectory
			//会移除所有扩展名，需要CompressMethod, 默认使用zip
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
			//key = SourcePath
			//value = TargetPath
			//根据提供的拓展名，无拓展名使用默认的zip
			if (!SimpleAutomationToolCommon::PathFilter<
					SimpleAutomationToolCommon::FPreprocessPath_PathExists,
					SimpleAutomationToolCommon::FPreprocessPath_Nothing,
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
			//需要检查提供的解压缩文件是否符合程序合法拓展名
			if (!SimpleAutomationToolCommon::PathFilter<
					FPreprocessPath_CheckSource,
					SimpleAutomationToolCommon::FPreprocessPath_Nothing,
					FProcessPath_Decompress>
				(ExecuteContent, SelfConfig->PathOfSourceToTarget, false, false))
			{
				SyhLogError(TEXT("Fail to filter path."));
			}
		}
	}

	//使用这种方式会崩溃？
	//const TCHAR* PrintStr = SelfConfig->bCompress ? TEXT("compressed") : TEXT("decompressed");

	//筛选后的路径，每一压缩成一个文件

	TMultiMap<FString, bool> TaskResult;
	for (auto& Temp : ExecuteContent)
	{
		TaskResult.Add(Temp.Key, Execute(Temp.Key, Temp.Value));
	}

	SyhLogDisplay(TEXT("Start to evaluate results."));

	bool Result = SimpleAutomationTool::EvaluateTaskResult<FString>(TaskResult);

	for (auto& Temp : TaskResult)
	{
		if (Temp.Value)
		{
			SyhLogDisplay(TEXT("[%s] is successful to %s."), *Temp.Key, SelfConfig->bCompress ? TEXT("compressed") : TEXT("decompressed"));
		}
		else
		{
			SyhLogError(TEXT("[%s] is failure to %s."), *Temp.Key, SelfConfig->bCompress ? TEXT("compressed") : TEXT("decompressed"));
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
		FString Extension = FPaths::GetExtension(InTarget);
		//根据拓展名使用压缩算法
		switch (EnumTool<ECompressType>::GetEnumValue(Extension))
		{
		case ECompressType::COMPRESS_None://None代表无拓展名，使用Zip
		case ECompressType::COMPRESS_Zip:
		{
			return USimpleZIPFunctionLibrary::ZipByLoacl(InSource, InTarget, SelfConfig->Password);
		}
		case ECompressType::COMPRESS_RZ:
		{
			//不支持压缩文件
			return USimpleZIPFunctionLibrary::CompressToLocalToLocal(InSource, InTarget);
		}
		}
	}
	else
	{
		FString Extension = FPaths::GetExtension(InSource);
		switch (EnumTool<ECompressType>::GetEnumValue(Extension))
		{
		case ECompressType::COMPRESS_None://None代表无拓展名，尝试使用zip
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

void FAutomatedCode_Compress::SetCompressFileExtension(ECompressType InCompressType)
{
	switch (InCompressType)
	{
	case ECompressType::COMPRESS_Zip:
		CompressStr = ZipStr;
		break;
	case ECompressType::COMPRESS_RZ:
		CompressStr = RzStr;
		break;
	case ECompressType::COMPRESS_None:
	default:
		break;
	}
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
