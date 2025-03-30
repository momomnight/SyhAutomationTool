#pragma once
#include "CoreMinimal.h"
#include "SyhAutomationToolLog.h"
#include "SyhAutomationToolType.h"
#include "Misc/Parse.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

namespace SimpleAutomationToolCommon
{
	//打包的文件路径，以时间为名
	extern class FString PackagingSaveFileName;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//String(xxxx xxxx)-> "xxxx xxxx"
	//对于.bat文件，使用"xxx/xxx xxx/xx"就可以读取
	//对于.sh文件
	void AdaptCommandArgsStringWithSpace(FString& InKey);

	void GetBatPathString(FString& InPath);

	inline FString GetMatchKey(const FString& InKey) { return FString(TEXT("-") + InKey + TEXT("=")); }

	inline bool IsMatchKey(const FString& InKey)
	{
		if (InKey.StartsWith(TEXT("-")) && InKey.EndsWith(TEXT("=")))
		{
			return true;
		}
		return false;
	}

	template<class Type>
	bool GetValueFromCommandLine(const FString& InKey, Type& OutValue)
	{
		if (FString Key = GetMatchKey(InKey);
			!FParse::Value(FCommandLine::Get(), *Key, OutValue))
		{
			UE_LOG(SyhAutomaitonToolLog, Display, TEXT("%s was not found the value. Use default value."), *Key);
			return false;
		}

		return true;
	}

	template<>
	bool GetValueFromCommandLine<bool>(const FString& InKey, bool& OutValue)
	{
		if (FString Key = GetMatchKey(InKey);
			!FParse::Bool(FCommandLine::Get(), *Key, OutValue))
		{
			UE_LOG(SyhAutomaitonToolLog, Display, TEXT("%s was not found the value. Use default value."), *Key);
			return false;
		}
		return true;
	}

	template<>
	bool GetValueFromCommandLine<FString>(const FString& InKey, FString& OutValue)
	{
		OutValue.Empty();
		if (FString Key = GetMatchKey(InKey);
			!FParse::Value(FCommandLine::Get(), *Key, OutValue))
		{
			UE_LOG(SyhAutomaitonToolLog, Display, TEXT("%s was not found the value. Use default value."), *Key);
			return false;
		}
		return true;
	}

	
	//xxx1&&xxx2
	bool ParseCommandLineByKey(const FString& InKey, TArray<FString>& InArray, bool bPath);

	//xxx1||yyy1&&xxx2||yyy2
	bool ParseCommandLineByKey(const FString& InKey, TMap<FString, FString>& InArray, bool bPath);

	bool DeleteFile(const FString& InPath);
	bool DeleteDirectory(const FString& InPath);
	bool DeletePath(const struct FFileStatData& InFileStatData, const FString& InPath);
	bool DeletePath(const FString& InPath);


	//是否存在路径替换
	// %~ProjectPath/xxx.txt
	// C:\\MyProgram\\UnrealEngine-5.3.2-release\\SyhAutomaitonTool\\xxx.txt
	//FAutomatedCode_Xxxx::BuildParameter(const FString& InJsonStr)
	//FAutomatedCode_Xxxx::BuildParameter()
	//在以上两种成员种控制替换的路径
	void RecognizePathSyntax(FString& InPath);

	bool PathExists(const FString& InPath, bool bFolder)
	{
		if(bFolder)
		{
			return IFileManager::Get().DirectoryExists(*InPath);
		}
		else
		{
			return IFileManager::Get().FileExists(*InPath);
		}
	}

	bool PathExists(const FString& InPath)
	{
		FFileStatData FileStatData = IFileManager::Get().GetStatData(*InPath);
		return FileStatData.bIsValid;
	}


	template<class Type> struct ReturnTypeTrait	{ using ReturnType = void; using ParameterType = void;};
	template <> struct ReturnTypeTrait<ECommandProtocol>	{ using ReturnType = FString;  using ParameterType = ECommandProtocol;};
	template <> struct ReturnTypeTrait<ESimpleOSSCommand>	{ using ReturnType = FString;  using ParameterType = ESimpleOSSCommand;};
	template <> struct ReturnTypeTrait<FString>				{ using ReturnType = const FString&;  using ParameterType = const FString&;};

	template<class Type>
	typename ReturnTypeTrait<Type>::ReturnType ToString(typename ReturnTypeTrait<Type>::ParameterType Param);

	template<>
	typename ReturnTypeTrait<ECommandProtocol>::ReturnType ToString<ECommandProtocol>(typename ReturnTypeTrait<ECommandProtocol>::ParameterType InCommandProtocol)
	{
		return FCommandProtocolRelated::GetShortName(InCommandProtocol);
	}

	template<>
	typename ReturnTypeTrait<ESimpleOSSCommand>::ReturnType  ToString<ESimpleOSSCommand>(typename ReturnTypeTrait<ESimpleOSSCommand>::ParameterType InOSSCommand)
	{
		return SimpleOSSCommand::ToOSSCommandString(InOSSCommand);
	}

	template<>
	typename ReturnTypeTrait<FString>::ReturnType ToString<FString>(typename ReturnTypeTrait<FString>::ParameterType Param)
	{
		return Param;
	}

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	struct FPreprocessPath_Base
	{
		bool operator()(const FFileStatData& FileStatData, const FString& InPath){};
	};

	struct FPreprocessPath_Nothing : public FPreprocessPath_Base
	{
		bool operator()(const FFileStatData& FileStatData, const FString& InPath)
		{
			return true;
		}
	};

	struct FPreprocessPath_DeletePath : public FPreprocessPath_Base
	{
		bool operator()(const FFileStatData& FileStatData, const FString& InPath)
		{
			return DeletePath(FileStatData, InPath);
		}
	};

	struct FPreprocessPath_PathExists : public FPreprocessPath_Base
	{
		bool operator()(const FFileStatData& FileStatData, const FString& InPath)
		{
			if (!FileStatData.bIsValid)
			{
				UE_LOG(SyhAutomaitonToolLog, Error, TEXT("No exist the source folder : %s."), *InPath);
			}
			return FileStatData.bIsValid;
		}
	};
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	struct FProcessPath_Base
	{
		//对于原路径为文件路径的操作
		void operator()(TMap<FString, FString>& OutContent, const FString& SourcePath, const FString& TargetPath){}

		//对于原路径为文件夹的操作
		void operator()(TMap<FString, FString>& OutContent, const FString& InFoundPath, const FString& SourcePath, const FString& TargetPath){}
	};



	////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	template <class FPreprocessSourcePath, class FPreprocessTargetPath, class FProcessPath>
	bool PathFilter(TMap<FString, FString>& OutContent, const TMap<FString, FString>& InContent, bool bFindFiles = true, bool bRecursive = true)
	{
		static_assert(std::is_base_of_v<FPreprocessPath_Base, FPreprocessSourcePath>, "FPreprocessSourcePath must be derived to FPreprocessPath_Base");
		static_assert(std::is_base_of_v<FPreprocessPath_Base, FPreprocessTargetPath>, "FPreprocessTargetPath must be derived to FPreprocessPath_Base");
		static_assert(std::is_base_of_v<FProcessPath_Base, FProcessPath>, "FProcessPath must be derived to FProcessPath_Base");
		
		FPreprocessSourcePath HandleSourcePath;
		FPreprocessTargetPath HandleTargetPath;
		FProcessPath HandleFilePath;
		//收集所有路径
		for (auto& TempPath : InContent)
		{
			FString SourcePath = TempPath.Key;
			FString TargetPath = TempPath.Value;

			FFileStatData SourceFileStatData = IFileManager::Get().GetStatData(*SourcePath);
			FFileStatData TargetFileStatData = IFileManager::Get().GetStatData(*TargetPath);

			//筛选前，给予一次对第一个路径操作的机会
			if (!HandleSourcePath(SourceFileStatData, SourcePath))
			{
				return false;
			}
			//筛选前，给予一次对第二个路径操作的机会
			if (!HandleTargetPath(TargetFileStatData, TargetPath))
			{
				return false;
			}

			if(bFindFiles)
			{
				if (SourceFileStatData.bIsDirectory)
				{
					TArray<FString> FoundFiles;

					if (bRecursive)
					{
						IFileManager::Get().FindFilesRecursive(FoundFiles, *SourcePath, TEXT("*"), true, false);
					}
					else
					{
						IFileManager::Get().FindFiles(FoundFiles, *(SourcePath / TEXT("*")), true, true);
						for (auto& FoundFile : FoundFiles)
						{
							FoundFile = SourcePath / FoundFile;
						}
					}

					for (auto& SubTemp : FoundFiles)
					{
						HandleFilePath(OutContent, SubTemp, SourcePath, TargetPath);
					}
				}
				else
				{
					HandleFilePath(OutContent, SourcePath, TargetPath);
				}
			}
			else
			{
				HandleFilePath(OutContent, SourcePath, TargetPath);
			}
		}
		return true;
	}

}
#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT