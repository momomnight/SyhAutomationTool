
#pragma once
#include "CoreMinimal.h"
#include "SimpleAutomatedToolTypeRelated.h"
#include "Misc/AutomationToolCommonMethodTemplate.h"
#include "Misc/AutomationToolCommonMethod.h"
#include "SimpleAutomatedToolCommonLog.h"

namespace AutomationCommandLine
{
	template <class AutomatedConfigType>
	bool CommandLineArgumentToAutomatedConfig(TSharedPtr<AutomatedConfigType> SelfConfig);
	// 清除配置
	template <class AutomatedConfigType>
	void ClearConfig(TSharedPtr<AutomatedConfigType> SelfConfig){}

	//FAutomatedCallConfig
	template <>
	bool CommandLineArgumentToAutomatedConfig<FAutomatedCallConfig>(TSharedPtr<FAutomatedCallConfig> SelfConfig)
	{
		using OwnConfig = FAutomatedCallConfig;
		ClearConfig(SelfConfig);

		bool Result = true;
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::CallTypeKey, SelfConfig->CallType);
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::CallPathKey, SelfConfig->CallPath);
		AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::ParametersKey, SelfConfig->Parameters);

		if (Result)
		{
			FPaths::NormalizeFilename(SelfConfig->CallPath);
			FPaths::RemoveDuplicateSlashes(SelfConfig->CallPath);
			AutomationToolCommonMethod::RecognizePathSyntax(SelfConfig->CallPath);
			return true;
		}
		else
		{
			return false;
		}
	}

	//FAutomatedCallCustomContentConfig
	template <>
	bool CommandLineArgumentToAutomatedConfig<FAutomatedCallCustomContentConfig>(TSharedPtr<FAutomatedCallCustomContentConfig> SelfConfig)
	{
		using OwnConfig = FAutomatedCallCustomContentConfig;
		ClearConfig(SelfConfig);
		return CommandLineArgumentToAutomatedConfig<OwnConfig::Super>(SelfConfig);
	}

	//FAutomatedCommandNestingConfig
	template <>
	bool CommandLineArgumentToAutomatedConfig<FAutomatedCommandNestingConfig>(TSharedPtr<FAutomatedCommandNestingConfig> SelfConfig)
	{
		using OwnConfig = FAutomatedCommandNestingConfig;
		ClearConfig(SelfConfig);
		bool Result = true;
		AutomationToolCommonMethod::GetValueFromCommandLine(EnumTool<decltype(SelfConfig->ComparisionType)>::GetEnumNameKey(), SelfConfig->ComparisionType);
		Result &= AutomationToolCommonMethod::ParseCommandLineByKey(Tool<OwnConfig>::CommandListKey, SelfConfig->CommandList, false);
		return Result;
	}

	//FAutomatedConditionCommandConfig
	template <>
	bool CommandLineArgumentToAutomatedConfig<FAutomatedConditionCommandConfig>(TSharedPtr<FAutomatedConditionCommandConfig> SelfConfig)
	{
		using OwnConfig = FAutomatedConditionCommandConfig;
		ClearConfig(SelfConfig);
		AutomationToolCommonMethod::ParseCommandLineByKey(Tool<OwnConfig>::TrueCommandListKey, SelfConfig->TrueCommandList, false);
		AutomationToolCommonMethod::ParseCommandLineByKey(Tool<OwnConfig>::FalseCommandListKey, SelfConfig->FalseCommandList, false);
		return true;
	}

	//FAutomatedUEProjectRefreshConfig
	template <>
	bool CommandLineArgumentToAutomatedConfig<FAutomatedUEProjectRefreshConfig>(TSharedPtr<FAutomatedUEProjectRefreshConfig> SelfConfig)
	{
		using OwnConfig = FAutomatedUEProjectRefreshConfig;
		ClearConfig(SelfConfig);
		bool Result = true;
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::UnrealBuildToolPathKey, SelfConfig->UnrealBuildToolPath);
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::ProjectUProjectPathKey, SelfConfig->ProjectUProjectPath);

		if (Result)
		{
			FPaths::NormalizeFilename(SelfConfig->UnrealBuildToolPath);
			FPaths::RemoveDuplicateSlashes(SelfConfig->UnrealBuildToolPath);
			FPaths::NormalizeFilename(SelfConfig->ProjectUProjectPath);
			FPaths::RemoveDuplicateSlashes(SelfConfig->ProjectUProjectPath);
			AutomationToolCommonMethod::RecognizePathSyntax(SelfConfig->UnrealBuildToolPath);
			AutomationToolCommonMethod::RecognizePathSyntax(SelfConfig->ProjectUProjectPath);
			return true;
		}
		else
		{
			return false;
		}
	}

	//FAutomatedCompressConfig
	template <>
	bool CommandLineArgumentToAutomatedConfig<FAutomatedCompressConfig>(TSharedPtr<FAutomatedCompressConfig> SelfConfig)
	{
		using OwnConfig = FAutomatedCompressConfig;
		ClearConfig(SelfConfig);

		bool Result = true;
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine<bool>(Tool<OwnConfig>::Compress_BooleanKey, SelfConfig->bCompress);
		AutomationToolCommonMethod::GetValueFromCommandLine<bool>(Tool<OwnConfig>::CompressEachFileUnderPath_BooleanKey, SelfConfig->bCompressEachFileUnderPath);
		AutomationToolCommonMethod::GetValueFromCommandLine<ECompressType>(Tool<OwnConfig>::CompressMethodKey, SelfConfig->CompressMethod);
		if (SelfConfig->CompressMethod == ECompressType::COMPRESS_Zip)
		{
			AutomationToolCommonMethod::GetValueFromCommandLine<FString>(Tool<OwnConfig>::PasswordKey, SelfConfig->Password);
		}
		Result &= AutomationToolCommonMethod::ParseCommandLineByKey(Tool<OwnConfig>::PathOfSourceToTargetKey, SelfConfig->PathOfSourceToTarget, true);

		return Result;
	}
	
	//FAutomatedDeploymentCopyConfig
	template <>
	void ClearConfig<FAutomatedDeploymentCopyConfig>(TSharedPtr<FAutomatedDeploymentCopyConfig> SelfConfig)
	{
		SelfConfig->Files.Empty();
	}
	template <>
	bool CommandLineArgumentToAutomatedConfig<FAutomatedDeploymentCopyConfig>(TSharedPtr<FAutomatedDeploymentCopyConfig> SelfConfig)
	{
		using OwnConfig = FAutomatedDeploymentCopyConfig;
		ClearConfig(SelfConfig);

		AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::DeleteMovedFiles_BooleanKey, SelfConfig->bDeleteMovedFiles);

		TArray<FString> Source;
		TArray<FString> Target;

		if (!AutomationToolCommonMethod::ParseCommandLineByKey(Tool<OwnConfig>::SourceKey, Source, true) ||
			!AutomationToolCommonMethod::ParseCommandLineByKey(Tool<OwnConfig>::TargetKey, Target, true))
		{
			return false;
		}
		else
		{
			if (Source.Num() == Target.Num())
			{
				for (int32 i = 0; i < Source.Num(); i++)
				{
					FString& SourceTemp = Source[i];
					FString& TargetTemp = Target[i];
					AutomationToolCommonMethod::RecognizePathSyntax(SourceTemp);
					AutomationToolCommonMethod::RecognizePathSyntax(TargetTemp);
					SelfConfig->Files.Add(SourceTemp, TargetTemp);
				}
				return true;
			}
			else
			{
				return false;
			}
		}
	}

	//FAutomatedDeploymentDeleteConfig
	template <>
	bool CommandLineArgumentToAutomatedConfig<FAutomatedDeploymentDeleteConfig>(TSharedPtr<FAutomatedDeploymentDeleteConfig> SelfConfig)
	{
		using OwnConfig = FAutomatedDeploymentDeleteConfig;
		ClearConfig(SelfConfig);

		return AutomationToolCommonMethod::ParseCommandLineByKey(Tool<OwnConfig>::FilesKey, SelfConfig->Files, true);
	}

	//FAutomatedGitConfig
	template <>
	bool CommandLineArgumentToAutomatedConfig<FAutomatedGitConfig>(TSharedPtr<FAutomatedGitConfig> SelfConfig)
	{
		using OwnConfig = FAutomatedGitConfig;
		ClearConfig(SelfConfig);
		
		if (AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::ProjectPathKey, SelfConfig->ProjectPath))
		{
			FPaths::NormalizeFilename(SelfConfig->ProjectPath);
			FPaths::RemoveDuplicateSlashes(SelfConfig->ProjectPath);
			AutomationToolCommonMethod::RecognizePathSyntax(SelfConfig->ProjectPath);
		}
		else
		{
			return false;
		}

		if (!AutomationToolCommonMethod::ParseCommandLineByKey(Tool<OwnConfig>::GitCommandsKey, SelfConfig->GitCommands, false))
		{
			return false;
		}

		return SelfConfig->GitCommands.Num() > 0;
	}

	//FAutomatedHTTPConfig
	template <>
	bool CommandLineArgumentToAutomatedConfig<FAutomatedHTTPConfig>(TSharedPtr<FAutomatedHTTPConfig> SelfConfig)
	{
		using OwnConfig = FAutomatedHTTPConfig;
		ClearConfig(SelfConfig);

		bool Result = true;
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::URLKey, SelfConfig->URL);
		AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::Sync_BooleanKey, SelfConfig->bSync);
		AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::Binaries_BooleanKey, SelfConfig->bBinaries);
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(EnumTool<decltype(SelfConfig->VerbType)>::GetEnumNameKey(), SelfConfig->VerbType);
		AutomationToolCommonMethod::ParseCommandLineByKey(Tool<OwnConfig>::CustomMetaDataKey, SelfConfig->CustomMetaData, false);
		AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::ContentBodyKey, SelfConfig->ContentBody);
		AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::Timeout_FloatKey, SelfConfig->Timeout);
		AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::SavePathKey, SelfConfig->SavePath);

		if (Result)
		{
			FPaths::NormalizeDirectoryName(SelfConfig->SavePath);
			FPaths::RemoveDuplicateSlashes(SelfConfig->SavePath);
			AutomationToolCommonMethod::RecognizePathSyntax(SelfConfig->SavePath);
			if (SelfConfig->bBinaries)
			{
				//二进制文件的情况下，ContentBody为文件路径
				FPaths::NormalizeFilename(SelfConfig->ContentBody);
				FPaths::RemoveDuplicateSlashes(SelfConfig->ContentBody);
				AutomationToolCommonMethod::RecognizePathSyntax(SelfConfig->ContentBody);
			}
			return true;
		}
		else
		{
			return false;
		}
	}

	//FAutomatedMysqlConfig
	template <>
	bool CommandLineArgumentToAutomatedConfig<FAutomatedMysqlConfig>(TSharedPtr<FAutomatedMysqlConfig> SelfConfig)
	{
		using OwnConfig = FAutomatedMysqlConfig;
		ClearConfig(SelfConfig);

		bool Result = true;
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::UserKey, SelfConfig->User);
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::HostKey, SelfConfig->Host);
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::Port_IntKey, SelfConfig->Port);
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::DataBaseKey, SelfConfig->DataBase);
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::SqlKey, SelfConfig->Sql);
		AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::PasswordKey, SelfConfig->Password);
		AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::MethodKey, SelfConfig->Method);
		AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::SavePathKey, SelfConfig->SavePath);

		if (Result)
		{
			if (!SelfConfig->SavePath.IsEmpty())
			{
				FPaths::NormalizeDirectoryName(SelfConfig->SavePath);
				FPaths::RemoveDuplicateSlashes(SelfConfig->SavePath);
				AutomationToolCommonMethod::RecognizePathSyntax(SelfConfig->SavePath);
			}
			return true;
		}
		return false;
	}

	//FAutomatedOSSConfig
	template <>
	bool CommandLineArgumentToAutomatedConfig<FAutomatedOSSConfig>(TSharedPtr<FAutomatedOSSConfig> SelfConfig)
	{
		using OwnConfig = FAutomatedOSSConfig;
		ClearConfig(SelfConfig);
		return false;
	}

	//FAutomatedUEPackagingConfig
	template <>
	bool CommandLineArgumentToAutomatedConfig<FAutomatedUEPackagingConfig>(TSharedPtr<FAutomatedUEPackagingConfig> SelfConfig)
	{
		using OwnConfig = FAutomatedUEPackagingConfig;
		ClearConfig(SelfConfig);

		bool Result = true;
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::EngineDirKey, SelfConfig->EngineDir);
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::UProjectPathKey, SelfConfig->UProjectPath);
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::PlatformKey, SelfConfig->Platform);
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::BuildStateKey, SelfConfig->BuildState);
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::BuildTargetKey, SelfConfig->BuildTarget);
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::ArchiveDirectoryKey, SelfConfig->ArchiveDirectory);

		if (Result)
		{
			FPaths::NormalizeDirectoryName(SelfConfig->EngineDir);
			FPaths::NormalizeDirectoryName(SelfConfig->UProjectPath);
			FPaths::NormalizeDirectoryName(SelfConfig->ArchiveDirectory);
			FPaths::RemoveDuplicateSlashes(SelfConfig->EngineDir);
			FPaths::RemoveDuplicateSlashes(SelfConfig->UProjectPath);
			FPaths::RemoveDuplicateSlashes(SelfConfig->ArchiveDirectory);
			AutomationToolCommonMethod::RecognizePathSyntax(SelfConfig->EngineDir);
			AutomationToolCommonMethod::RecognizePathSyntax(SelfConfig->UProjectPath);
			AutomationToolCommonMethod::RecognizePathSyntax(SelfConfig->ArchiveDirectory);
			return true;
		}
		else
		{
			return false;
		}
	}

	//FAutomatedUEPluginPackagingConfig
	template <>
	bool CommandLineArgumentToAutomatedConfig<FAutomatedUEPluginPackagingConfig>(TSharedPtr<FAutomatedUEPluginPackagingConfig> SelfConfig)
	{
		using OwnConfig = FAutomatedUEPluginPackagingConfig;
		ClearConfig(SelfConfig);

		bool Result = true;
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::EngineDirKey, SelfConfig->EngineDir);
		Result &= AutomationToolCommonMethod::ParseCommandLineByKey(Tool<OwnConfig>::PathOfUPluginToTargetKey, SelfConfig->PathOfUPluginToTarget, true);
		if (Result)
		{
			FPaths::NormalizeFilename(SelfConfig->EngineDir);
			FPaths::RemoveDuplicateSlashes(SelfConfig->EngineDir);
			AutomationToolCommonMethod::RecognizePathSyntax(SelfConfig->EngineDir);
			return true;
		}
		else
		{
			return false;
		}
	}

	//FAutomatedVSCompileConfig
	template <>
	bool CommandLineArgumentToAutomatedConfig<FAutomatedVSCompileConfig>(TSharedPtr<FAutomatedVSCompileConfig> SelfConfig)
	{
		using OwnConfig = FAutomatedVSCompileConfig;
		ClearConfig(SelfConfig);

		bool Result = true;
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::CallPathKey, SelfConfig->CallPath);
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::SlnProjectPathKey, SelfConfig->SlnProjectPath);
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::BuildStateKey, SelfConfig->BuildState);
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine(Tool<OwnConfig>::ProjectKey, SelfConfig->Project);

		if (Result)
		{
			FPaths::NormalizeFilename(SelfConfig->CallPath);
			FPaths::RemoveDuplicateSlashes(SelfConfig->CallPath);
			FPaths::NormalizeFilename(SelfConfig->SlnProjectPath);
			FPaths::RemoveDuplicateSlashes(SelfConfig->SlnProjectPath);
			AutomationToolCommonMethod::RecognizePathSyntax(SelfConfig->CallPath);
			AutomationToolCommonMethod::RecognizePathSyntax(SelfConfig->SlnProjectPath);
			return true;
		}
		else
		{
			return false;
		}
	}


	//FAutomatedVSCompileConfig
	template <>
	bool CommandLineArgumentToAutomatedConfig<FAutomatedHTTPServerConfig>(TSharedPtr<FAutomatedHTTPServerConfig> SelfConfig)
	{
		using OwnConfig = FAutomatedHTTPServerConfig;
		ClearConfig(SelfConfig);

		AutomationToolCommonMethod::GetValueFromCommandLine<bool>(Tool<FAutomatedHTTPServerConfig>::Https_BooleanKey, SelfConfig->bHttps);

		if (SelfConfig->bHttps)
		{
			bool SubResult = true;
			SubResult &= AutomationToolCommonMethod::GetValueFromCommandLine<FString>(Tool<FAutomatedHTTPServerConfig>::CertificateKey, SelfConfig->Certificate);
			SubResult &= AutomationToolCommonMethod::GetValueFromCommandLine<FString>(Tool<FAutomatedHTTPServerConfig>::KeyKey, SelfConfig->Key);
			if (!SubResult)
			{
				UE_LOG(SimpleAutomatedToolCommonLog, Error, (TEXT("If bHttps is enabled, Certificate and Key must be provided.")));
				return false;
			}
		}

		bool Result = true;
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine<FString>(Tool<FAutomatedHTTPServerConfig>::IPKey, SelfConfig->IP);
		Result &= AutomationToolCommonMethod::GetValueFromCommandLine<int32>(Tool<FAutomatedHTTPServerConfig>::Port_IntKey, SelfConfig->Port);
		AutomationToolCommonMethod::GetValueFromCommandLine<float>(Tool<FAutomatedHTTPServerConfig>::Timeout_FloatKey, SelfConfig->Timeout);
	
		if (Result && SelfConfig->bHttps)
		{
			FPaths::NormalizeFilename(SelfConfig->Certificate);
			FPaths::NormalizeFilename(SelfConfig->Key);
		}
		return Result;
	}
}