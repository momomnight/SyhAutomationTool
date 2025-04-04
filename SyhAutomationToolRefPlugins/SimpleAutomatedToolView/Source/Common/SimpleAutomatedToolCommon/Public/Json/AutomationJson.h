#pragma once
#include "Json/AutomationJsonTemplate.h"
#include "Misc/AutomationToolCommonMethod.h"


//FAutomatedCallConfig
//FAutomatedCallCustomContentConfig
//FAutomatedUEProjectRefreshConfig
//FAutomatedCommandNestingConfig
//FAutomatedDeploymentCopyConfig
//FAutomatedDeploymentDeleteConfig
//FAutomatedVSCompileConfig
//FAutomatedGitConfig
//FAutomatedUEPackagingConfig
//FAutomatedUEPluginPackagingConfig
//FAutomatedConditionCommandConfig
//FAutomatedOSSConfig
//FAutomatedHTTPConfig
//FAutomatedCompressConfig
//FAutomatedMysqlConfig
//	Example:
//	[
//		{
//			"Command": "Call",
//			"CallType" : "bat",
//			"CallPath" : "C:/MyProgram/UnrealEngine-5.3.2-release/SyhAutomaitonTool/1.bat",
//			"Parameters" : ""
//		},
//		{
//			"Command": "Call",
//			"CallType" : "bat",
//			"CallPath" : "C:/MyProgram/UnrealEngine-5.3.2-release/SyhAutomaitonTool/2.bat",
//			"Parameters" : ""
//		}
//	]

namespace AutomationJson
{
	//用于配置枚举字段
	template<class EnumType>
	void ConfigureEnum(TSharedPtr<FJsonObject> InJsonObject, EnumType InEnumValue)
	{
		static_assert(std::is_enum_v<EnumType>, "EnumType must be enum type.");
		InJsonObject->SetStringField(EnumTool<EnumType>::GetEnumNameKey(), EnumTool<EnumType>::GetEnumMemberShortName(InEnumValue));
	}
	template void ConfigureEnum<ECommandProtocol>(TSharedPtr<FJsonObject> InJsonObject, ECommandProtocol InEnumValue);
	template void ConfigureEnum<ESimpleOSSCommand>(TSharedPtr<FJsonObject> InJsonObject, ESimpleOSSCommand InEnumValue);
	template void ConfigureEnum<ESimpleHTTPVerbType>(TSharedPtr<FJsonObject> InJsonObject, ESimpleHTTPVerbType InEnumValue);
	template void ConfigureEnum<EComparisionType>(TSharedPtr<FJsonObject> InJsonObject, EComparisionType InEnumValue);
	template void ConfigureEnum<ECompressType>(TSharedPtr<FJsonObject> InJsonObject, ECompressType InEnumValue);
	template void ConfigureEnum<EMysqlMethodType>(TSharedPtr<FJsonObject> InJsonObject, EMysqlMethodType InEnumValue);

	template<class EnumType>
	EnumType GetEnum(TSharedPtr<FJsonObject> InJsonObject)
	{
		static_assert(std::is_enum_v<EnumType>, "EnumType must be enum type.");
		return EnumTool<EnumType>::GetEnumMemberValue(InJsonObject->GetStringField(EnumTool<EnumType>::GetEnumNameKey()));
	}
	template ECommandProtocol GetEnum<ECommandProtocol>(TSharedPtr<FJsonObject> InJsonObject);
	template ESimpleOSSCommand GetEnum<ESimpleOSSCommand>(TSharedPtr<FJsonObject> InJsonObject);
	template ESimpleHTTPVerbType GetEnum<ESimpleHTTPVerbType>(TSharedPtr<FJsonObject> InJsonObject);
	template EComparisionType GetEnum<EComparisionType>(TSharedPtr<FJsonObject> InJsonObject);
	template ECompressType GetEnum<ECompressType>(TSharedPtr<FJsonObject> InJsonObject);
	template EMysqlMethodType GetEnum<EMysqlMethodType>(TSharedPtr<FJsonObject> InJsonObject);
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	/// <summary>
	/// 增加模块时，只需特化AutomatedConfigToJsonObject
	/// </summary>
	/// <param name="InJsonObject"> 传入的Json对象 </param>
	/// <param name="InConfig"> 具体配置类型 </param>
	template<>
	void AutomatedConfigToJsonObject<FAutomatedCallConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedCallConfig& InConfig)
	{
		OutJsonObject->SetStringField(Tool<FAutomatedCallConfig>::CallTypeKey, InConfig.CallType);
		OutJsonObject->SetStringField(Tool<FAutomatedCallConfig>::CallPathKey, InConfig.CallPath);
		OutJsonObject->SetStringField(Tool<FAutomatedCallConfig>::ParametersKey, InConfig.Parameters);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedCallCustomContentConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedCallCustomContentConfig& InConfig)
	{
		OutJsonObject->SetNumberField(Tool<FAutomatedCallCustomContentConfig>::WaitTime_IntKey, InConfig.WaitTime);
		OutJsonObject->SetStringField(Tool<FAutomatedCallCustomContentConfig>::ContentKey, InConfig.Content);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedUEProjectRefreshConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedUEProjectRefreshConfig& InConfig)
	{
		OutJsonObject->SetStringField(Tool<FAutomatedUEProjectRefreshConfig>::UnrealBuildToolPathKey, InConfig.UnrealBuildToolPath);
		OutJsonObject->SetStringField(Tool<FAutomatedUEProjectRefreshConfig>::ProjectUProjectPathKey, InConfig.ProjectUProjectPath);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedCommandNestingConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedCommandNestingConfig& InConfig)
	{
		OutJsonObject->SetStringField(EnumTool<decltype(InConfig.ComparisionType)>::GetEnumNameKey(), 
			EnumTool<decltype(InConfig.ComparisionType)>::GetEnumMemberShortName(InConfig.ComparisionType));

		//上面的命令对于配置无需更多处理
		TArray<TSharedPtr<FJsonValue>> Array;
		for (auto& Temp : InConfig.CommandList)
		{
			Array.Add(MakeShareable<FJsonValueString>(new FJsonValueString(Temp)));
		}
		OutJsonObject->SetArrayField(Tool<FAutomatedCommandNestingConfig>::CommandListKey, Array);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedDeploymentCopyConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedDeploymentCopyConfig& InConfig)
	{
		OutJsonObject->SetBoolField(Tool<FAutomatedDeploymentCopyConfig>::DeleteMovedFiles_BooleanKey, InConfig.bDeleteMovedFiles);
		
		/*"Files": [
			{
				"Src": "xx",
				"Dest" : "YY"
			},
			{
				"Src": "xx",
				"Dest" : "YY"
			}
		]*/
		TArray<TSharedPtr<FJsonValue>> JsonArray;

		for (auto& Temp : InConfig.Files)
		{
			TSharedPtr<FJsonObject> TempJsonObject = MakeShareable<FJsonObject>(new FJsonObject);
			TempJsonObject->SetStringField(Tool<FAutomatedDeploymentCopyConfig>::SourceKey, Temp.Key);
			TempJsonObject->SetStringField(Tool<FAutomatedDeploymentCopyConfig>::TargetKey, Temp.Value);
			JsonArray.Add(MakeShareable<FJsonValueObject>(new FJsonValueObject(TempJsonObject)));
		}

		OutJsonObject->SetArrayField(Tool<FAutomatedDeploymentCopyConfig>::FilesKey, JsonArray);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedDeploymentDeleteConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedDeploymentDeleteConfig& InConfig)
	{
		/*"Files": [
				"xx",
				"yy",
		]*/
		TArray<TSharedPtr<FJsonValue>> JsonArray;

		for (auto& Temp : InConfig.Files)
		{
			JsonArray.Add(MakeShareable<FJsonValueString>(new FJsonValueString(Temp)));
		}
		OutJsonObject->SetArrayField(Tool<FAutomatedDeploymentDeleteConfig>::FilesKey, JsonArray);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedVSCompileConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedVSCompileConfig& InConfig)
	{
		OutJsonObject->SetStringField(Tool<FAutomatedVSCompileConfig>::BuildStateKey, InConfig.BuildState);
		OutJsonObject->SetStringField(Tool<FAutomatedVSCompileConfig>::SlnProjectPathKey, InConfig.SlnProjectPath);
		OutJsonObject->SetStringField(Tool<FAutomatedVSCompileConfig>::ProjectKey, InConfig.Project);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedGitConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedGitConfig& InConfig)
	{
		
		OutJsonObject->SetStringField(Tool<FAutomatedGitConfig>::ProjectPathKey, InConfig.ProjectPath);

		TArray<TSharedPtr<FJsonValue>> Array;
		for (auto& Temp : InConfig.GitCommands)
		{
			Array.Add(MakeShareable<FJsonValueString>(new FJsonValueString(Temp)));
		}

		OutJsonObject->SetArrayField(Tool<FAutomatedGitConfig>::GitCommandsKey, Array);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedUEPackagingConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedUEPackagingConfig& InConfig)
	{
		OutJsonObject->SetStringField(Tool<FAutomatedUEPackagingConfig>::EngineDirKey, InConfig.EngineDir);
		OutJsonObject->SetStringField(Tool<FAutomatedUEPackagingConfig>::UProjectPathKey, InConfig.UProjectPath);
		OutJsonObject->SetStringField(Tool<FAutomatedUEPackagingConfig>::PlatformKey, InConfig.Platform);
		OutJsonObject->SetStringField(Tool<FAutomatedUEPackagingConfig>::BuildStateKey, InConfig.BuildState);
		OutJsonObject->SetStringField(Tool<FAutomatedUEPackagingConfig>::BuildTargetKey, InConfig.BuildTarget);
		OutJsonObject->SetStringField(Tool<FAutomatedUEPackagingConfig>::ArchiveDirectoryKey, InConfig.ArchiveDirectory);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedUEPluginPackagingConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedUEPluginPackagingConfig& InConfig)
	{
		OutJsonObject->SetStringField(Tool<FAutomatedUEPluginPackagingConfig>::EngineDirKey, InConfig.EngineDir);

		TArray<TSharedPtr<FJsonValue>> Array;
		for (auto& Temp : InConfig.PathOfUPluginToTarget)
		{
			TSharedPtr<FJsonObject> Object = MakeShareable<FJsonObject>(new FJsonObject);
			Object->SetStringField(Tool<FAutomatedUEPluginPackagingConfig>::SourceKey, Temp.Key);
			Object->SetStringField(Tool<FAutomatedUEPluginPackagingConfig>::TargetKey, Temp.Value);
			Array.Add(MakeShareable<FJsonValueObject>(new FJsonValueObject(Object)));
		}
		OutJsonObject->SetArrayField(Tool<FAutomatedUEPluginPackagingConfig>::PathOfUPluginToTargetKey, Array);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedConditionCommandConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedConditionCommandConfig& InConfig)
	{
		TArray<TSharedPtr<FJsonValue>> TrueArray;
		for (auto& Temp : InConfig.TrueCommandList)
		{
			TrueArray.Add(MakeShareable<FJsonValueString>(new FJsonValueString(Temp)));
		}
		OutJsonObject->SetArrayField(Tool<FAutomatedConditionCommandConfig>::TrueCommandListKey, TrueArray);

		TArray<TSharedPtr<FJsonValue>> FalseArray;
		for (auto& Temp : InConfig.FalseCommandList)
		{
			FalseArray.Add(MakeShareable<FJsonValueString>(new FJsonValueString(Temp)));
		}
		OutJsonObject->SetArrayField(Tool<FAutomatedConditionCommandConfig>::FalseCommandListKey, FalseArray);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedOSSConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedOSSConfig& InConfig)
	{
		TArray<TSharedPtr<FJsonValue>> Array;
		//SimpleOSSCommand::OSSCommandConfigToJsonObject(InConfig.OSSCommands, Array);
		for (auto& Temp : InConfig.OSSCommands)
		{
			TSharedPtr<FJsonObject> TempJsonObject = MakeShareable<FJsonObject>(new FJsonObject);
			ConfigureEnum<ESimpleOSSCommand>(TempJsonObject, Temp.CommandType);
			TArray<TSharedPtr<FJsonValue>> ParamArray;
			{	
				for (auto& SubTemp : Temp.Param)
				{
					TSharedPtr<FJsonObject> ParamJsonObject = MakeShareable<FJsonObject>(new FJsonObject);
					ParamJsonObject->SetStringField(TEXT("Key"), SubTemp.Key);
					ParamJsonObject->SetStringField(TEXT("Value"), SubTemp.Value);
					ParamArray.Add(MakeShareable<FJsonValueObject>(new FJsonValueObject(ParamJsonObject)));
				}

			}
			TempJsonObject->SetArrayField(Tool<FAutomatedOSSConfig>::OSSComandParameterKey, ParamArray);
			Array.Add(MakeShareable<FJsonValueObject>(new FJsonValueObject(TempJsonObject)));
		}

		OutJsonObject->SetArrayField(Tool<FAutomatedOSSConfig>::OSSComandsKey, Array);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedHTTPConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedHTTPConfig& InConfig)
	{
		OutJsonObject->SetStringField(Tool<FAutomatedHTTPConfig>::URLKey, InConfig.URL);
		OutJsonObject->SetStringField(EnumTool<decltype(InConfig.VerbType)>::GetEnumNameKey(), EnumTool<decltype(InConfig.VerbType)>::GetEnumMemberShortName(InConfig.VerbType));
		
		OutJsonObject->SetBoolField(Tool<FAutomatedHTTPConfig>::Sync_BooleanKey, InConfig.bSync);
		OutJsonObject->SetBoolField(Tool<FAutomatedHTTPConfig>::Binaries_BooleanKey, InConfig.bBinaries);
		OutJsonObject->SetNumberField(Tool<FAutomatedHTTPConfig>::Timeout_FloatKey, InConfig.Timeout);
		OutJsonObject->SetStringField(Tool<FAutomatedHTTPConfig>::SavePathKey, InConfig.SavePath);

		TArray<TSharedPtr<FJsonValue>> JsonArray;
		for (auto& Temp : InConfig.CustomMetaData)
		{
			TSharedPtr<FJsonObject> TempJsonObject = MakeShareable<FJsonObject>(new FJsonObject);
			TempJsonObject->SetStringField(TEXT("Key"), Temp.Key);
			TempJsonObject->SetStringField(TEXT("Value"), Temp.Value);
			JsonArray.Add(MakeShareable<FJsonValueObject>(new FJsonValueObject(TempJsonObject)));
		}
		OutJsonObject->SetArrayField(Tool<FAutomatedHTTPConfig>::CustomMetaDataKey, JsonArray);
		OutJsonObject->SetStringField(Tool<FAutomatedHTTPConfig>::ContentBodyKey, InConfig.ContentBody);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedCompressConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedCompressConfig& InConfig)
	{
		OutJsonObject->SetBoolField(Tool<FAutomatedCompressConfig>::Compress_BooleanKey, InConfig.bCompress);
		OutJsonObject->SetBoolField(Tool<FAutomatedCompressConfig>::CompressEachFileUnderPath_BooleanKey, InConfig.bCompressEachFileUnderPath);
		OutJsonObject->SetStringField(Tool<FAutomatedCompressConfig>::CompressMethodKey, EnumTool<decltype(InConfig.CompressMethod)>::GetEnumMemberShortName(InConfig.CompressMethod));
		OutJsonObject->SetStringField(Tool<FAutomatedCompressConfig>::PasswordKey, InConfig.Password);

		TArray<TSharedPtr<FJsonValue>> Array;

		for (auto& Temp : InConfig.PathOfSourceToTarget)
		{
			TSharedPtr<FJsonObject> TempObject = MakeShareable(new FJsonObject);
			TempObject->SetStringField(Tool<FAutomatedCompressConfig>::SourceKey, Temp.Key);
			TempObject->SetStringField(Tool<FAutomatedCompressConfig>::TargetKey, Temp.Value);
			Array.Add(MakeShareable<FJsonValueObject>(new FJsonValueObject(TempObject)));
		}
		OutJsonObject->SetArrayField(Tool<FAutomatedCompressConfig>::PathOfSourceToTargetKey, Array);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedMysqlConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedMysqlConfig& InConfig)
	{
		OutJsonObject->SetStringField(Tool<FAutomatedMysqlConfig>::UserKey, InConfig.User);
		OutJsonObject->SetStringField(Tool<FAutomatedMysqlConfig>::HostKey, InConfig.Host);
		OutJsonObject->SetNumberField(Tool<FAutomatedMysqlConfig>::Port_IntKey, InConfig.Port);
		OutJsonObject->SetStringField(Tool<FAutomatedMysqlConfig>::DataBaseKey, InConfig.DataBase);
		OutJsonObject->SetStringField(Tool<FAutomatedMysqlConfig>::PasswordKey, InConfig.Password);
		ConfigureEnum<decltype(InConfig.Method)>(OutJsonObject, InConfig.Method);
		OutJsonObject->SetStringField(Tool<FAutomatedMysqlConfig>::SqlKey, InConfig.Sql);
		OutJsonObject->SetStringField(Tool<FAutomatedMysqlConfig>::SavePathKey, InConfig.SavePath);
	}



	/// <summary>
	/// 增加模块时，只需特化JsonObjectToAutomatedConfig
	/// </summary>
	/// <param name="InJsonObject"> 传入的Json对象 </param>
	/// <param name="InConfig"> 具体配置类型 </param>
	template<>
	void JsonObjectToAutomatedConfig<FAutomatedCallConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedCallConfig& OutConfig)
	{
		OutConfig.CallPath = InJsonObject->GetStringField(Tool<FAutomatedCallConfig>::CallPathKey);
		OutConfig.CallType = InJsonObject->GetStringField(Tool<FAutomatedCallConfig>::CallTypeKey);
		OutConfig.Parameters = InJsonObject->GetStringField(Tool<FAutomatedCallConfig>::ParametersKey);

		//某些程序需要标准路径
		//从Json字符中读取的路径格式可能不对
		FPaths::NormalizeFilename(OutConfig.CallPath);
		FPaths::RemoveDuplicateSlashes(OutConfig.CallPath);
		AutomationToolCommonMethod::RecognizePathSyntax(OutConfig.CallPath);
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedCallCustomContentConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedCallCustomContentConfig& OutConfig)
	{
		OutConfig.WaitTime = InJsonObject->GetNumberField(Tool<FAutomatedCallCustomContentConfig>::WaitTime_IntKey);
		OutConfig.Content = InJsonObject->GetStringField(Tool<FAutomatedCallCustomContentConfig>::ContentKey);
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedUEProjectRefreshConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedUEProjectRefreshConfig& OutConfig)
	{
		OutConfig.UnrealBuildToolPath = InJsonObject->GetStringField(Tool<FAutomatedUEProjectRefreshConfig>::UnrealBuildToolPathKey);
		OutConfig.ProjectUProjectPath = InJsonObject->GetStringField(Tool<FAutomatedUEProjectRefreshConfig>::ProjectUProjectPathKey);
		
		//某些程序需要标准路径
		//从Json字符中读取的路径格式可能不对
		FPaths::NormalizeDirectoryName(OutConfig.UnrealBuildToolPath);
		FPaths::NormalizeDirectoryName(OutConfig.ProjectUProjectPath);
		FPaths::RemoveDuplicateSlashes(OutConfig.UnrealBuildToolPath);
		FPaths::RemoveDuplicateSlashes(OutConfig.ProjectUProjectPath);
		AutomationToolCommonMethod::RecognizePathSyntax(OutConfig.UnrealBuildToolPath);
		AutomationToolCommonMethod::RecognizePathSyntax(OutConfig.ProjectUProjectPath);
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedCommandNestingConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedCommandNestingConfig& OutConfig)
	{
		OutConfig.ComparisionType = EnumTool<decltype(OutConfig.ComparisionType)>::GetEnumMemberValue(
			InJsonObject->GetStringField(EnumTool<decltype(OutConfig.ComparisionType)>::GetEnumNameKey()));
		const TArray<TSharedPtr<FJsonValue>>& InArrayObject = InJsonObject->GetArrayField(Tool<FAutomatedCommandNestingConfig>::CommandListKey);
		OutConfig.CommandList.Empty();
		for (auto& Temp : InArrayObject)
		{
			OutConfig.CommandList.Add(Temp->AsString());
		}
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedDeploymentCopyConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedDeploymentCopyConfig& OutConfig)
	{
		OutConfig.bDeleteMovedFiles = InJsonObject->GetBoolField(Tool<FAutomatedDeploymentCopyConfig>::DeleteMovedFiles_BooleanKey);
		OutConfig.Files.Empty();
		const TArray<TSharedPtr<FJsonValue>>& ObjectArray = InJsonObject->GetArrayField(Tool<FAutomatedDeploymentCopyConfig>::FilesKey);
		for (auto& Temp : ObjectArray)
		{
			if (TSharedPtr<FJsonObject> TempObject = Temp->AsObject())
			{
				FString Source = TempObject->GetStringField(Tool<FAutomatedDeploymentCopyConfig>::SourceKey);
				FString Destination = TempObject->GetStringField(Tool<FAutomatedDeploymentCopyConfig>::TargetKey);
				FPaths::NormalizeDirectoryName(Source);
				FPaths::NormalizeDirectoryName(Destination);
				FPaths::RemoveDuplicateSlashes(Source);
				FPaths::RemoveDuplicateSlashes(Destination);
				AutomationToolCommonMethod::RecognizePathSyntax(Source);
				AutomationToolCommonMethod::RecognizePathSyntax(Destination);
				OutConfig.Files.Emplace(Source, Destination);
			}
		}
	
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedDeploymentDeleteConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedDeploymentDeleteConfig& OutConfig)
	{
		const TArray<TSharedPtr<FJsonValue>>& ObjectArray = InJsonObject->GetArrayField(Tool<FAutomatedDeploymentDeleteConfig>::FilesKey);
		OutConfig.Files.Empty();
		for (auto& Temp : ObjectArray)
		{
			FString Str = Temp->AsString();
			FPaths::NormalizeDirectoryName(Str);
			FPaths::RemoveDuplicateSlashes(Str);
			AutomationToolCommonMethod::RecognizePathSyntax(Str);
			OutConfig.Files.Add(Str);
		}
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedVSCompileConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedVSCompileConfig& OutConfig)
	{
		OutConfig.BuildState = InJsonObject->GetStringField(Tool<FAutomatedVSCompileConfig>::BuildStateKey);
		OutConfig.SlnProjectPath = InJsonObject->GetStringField(Tool<FAutomatedVSCompileConfig>::SlnProjectPathKey);
		OutConfig.Project = InJsonObject->GetStringField(Tool<FAutomatedVSCompileConfig>::ProjectKey);
		FPaths::NormalizeFilename(OutConfig.SlnProjectPath);
		FPaths::RemoveDuplicateSlashes(OutConfig.SlnProjectPath);
		AutomationToolCommonMethod::RecognizePathSyntax(OutConfig.SlnProjectPath);
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedGitConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedGitConfig& OutConfig)
	{
		OutConfig.ProjectPath = InJsonObject->GetStringField(Tool<FAutomatedGitConfig>::ProjectPathKey);
		FPaths::NormalizeFilename(OutConfig.ProjectPath);
		FPaths::RemoveDuplicateSlashes(OutConfig.ProjectPath);
		AutomationToolCommonMethod::RecognizePathSyntax(OutConfig.ProjectPath);
		const TArray<TSharedPtr<FJsonValue>>& Array = InJsonObject->GetArrayField(Tool<FAutomatedGitConfig>::GitCommandsKey);
		OutConfig.GitCommands.Empty();
		for (auto& Temp : Array)
		{
			OutConfig.GitCommands.Add(Temp->AsString());
		}
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedUEPackagingConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedUEPackagingConfig& OutConfig)
	{
		OutConfig.EngineDir = InJsonObject->GetStringField(Tool<FAutomatedUEPackagingConfig>::EngineDirKey);
		OutConfig.UProjectPath = InJsonObject->GetStringField(Tool<FAutomatedUEPackagingConfig>::UProjectPathKey);
		OutConfig.Platform = InJsonObject->GetStringField(Tool<FAutomatedUEPackagingConfig>::PlatformKey);
		OutConfig.BuildState = InJsonObject->GetStringField(Tool<FAutomatedUEPackagingConfig>::BuildStateKey);
		OutConfig.BuildTarget = InJsonObject->GetStringField(Tool<FAutomatedUEPackagingConfig>::BuildTargetKey);
		OutConfig.ArchiveDirectory = InJsonObject->GetStringField(Tool<FAutomatedUEPackagingConfig>::ArchiveDirectoryKey);
		FPaths::NormalizeDirectoryName(OutConfig.EngineDir);
		FPaths::NormalizeDirectoryName(OutConfig.UProjectPath);
		FPaths::NormalizeDirectoryName(OutConfig.ArchiveDirectory);
		FPaths::RemoveDuplicateSlashes(OutConfig.EngineDir);
		FPaths::RemoveDuplicateSlashes(OutConfig.UProjectPath);
		FPaths::RemoveDuplicateSlashes(OutConfig.ArchiveDirectory);
		AutomationToolCommonMethod::RecognizePathSyntax(OutConfig.EngineDir);
		AutomationToolCommonMethod::RecognizePathSyntax(OutConfig.UProjectPath);
		AutomationToolCommonMethod::RecognizePathSyntax(OutConfig.ArchiveDirectory);
	}
	
	template<>
	void JsonObjectToAutomatedConfig<FAutomatedUEPluginPackagingConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedUEPluginPackagingConfig& OutConfig)
	{
		OutConfig.EngineDir = InJsonObject->GetStringField(Tool<FAutomatedUEPluginPackagingConfig>::EngineDirKey);
		FPaths::NormalizeDirectoryName(OutConfig.EngineDir);
		FPaths::RemoveDuplicateSlashes(OutConfig.EngineDir);
		AutomationToolCommonMethod::RecognizePathSyntax(OutConfig.EngineDir);
		OutConfig.PathOfUPluginToTarget.Empty();
		const TArray<TSharedPtr<FJsonValue>>& Array = InJsonObject->GetArrayField(Tool<FAutomatedUEPluginPackagingConfig>::PathOfUPluginToTargetKey);
	
		for (auto& Temp : Array)
		{
			TSharedPtr<FJsonObject> Object = Temp->AsObject();
			FString Source = Object->GetStringField(Tool<FAutomatedUEPluginPackagingConfig>::SourceKey);
			FString Target = Object->GetStringField(Tool<FAutomatedUEPluginPackagingConfig>::TargetKey);
			FPaths::NormalizeDirectoryName(Source);
			FPaths::RemoveDuplicateSlashes(Source);
			FPaths::NormalizeDirectoryName(Target);
			FPaths::RemoveDuplicateSlashes(Target);
			AutomationToolCommonMethod::RecognizePathSyntax(Source);
			AutomationToolCommonMethod::RecognizePathSyntax(Target);
			OutConfig.PathOfUPluginToTarget.Add(Source, Target);
		}
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedConditionCommandConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedConditionCommandConfig& OutConfig)
	{
		const TArray<TSharedPtr<FJsonValue>>& TrueArrayObject = InJsonObject->GetArrayField(Tool<FAutomatedConditionCommandConfig>::TrueCommandListKey);
		OutConfig.TrueCommandList.Empty();
		for (auto& Temp : TrueArrayObject)
		{
			OutConfig.TrueCommandList.Add(Temp->AsString());
		}
		const TArray<TSharedPtr<FJsonValue>>& FalseArrayObject = InJsonObject->GetArrayField(Tool<FAutomatedConditionCommandConfig>::FalseCommandListKey);
		OutConfig.FalseCommandList.Empty();
		for (auto& Temp : FalseArrayObject)
		{
			OutConfig.FalseCommandList.Add(Temp->AsString());
		}
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedOSSConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedOSSConfig& OutConfig)
	{
		const TArray<TSharedPtr<FJsonValue>>& Array = InJsonObject->GetArrayField(Tool<FAutomatedOSSConfig>::OSSComandsKey);
		OutConfig.OSSCommands.Empty();
		for (auto& Temp : Array)
		{
			if (const TSharedPtr<FJsonObject> Object = Temp->AsObject())
			{
				ESimpleOSSCommand CommandType = GetEnum<ESimpleOSSCommand>(Object);

				TMap<FString, FString> Param;
				{
					const TArray<TSharedPtr<FJsonValue>>& ParamArray = Object->GetArrayField(Tool<FAutomatedOSSConfig>::OSSComandParameterKey);
					for (auto& SubTemp : ParamArray)
					{
						if (const TSharedPtr<FJsonObject> SubObject = SubTemp->AsObject())
						{
							FString Key = SubObject->GetStringField(TEXT("Key"));
							FString Value = SubObject->GetStringField(TEXT("Value"));
							Param.Emplace(Key, Value);
						}
					}
				}
				OutConfig.OSSCommands.Add({ CommandType, Param });
			}
		}
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedHTTPConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedHTTPConfig& OutConfig)
	{
		OutConfig.URL = InJsonObject->GetStringField(Tool<FAutomatedHTTPConfig>::URLKey);
		OutConfig.VerbType = GetEnum<decltype(OutConfig.VerbType)>(InJsonObject);
		OutConfig.bSync = InJsonObject->GetBoolField(Tool<FAutomatedHTTPConfig>::Sync_BooleanKey);
		OutConfig.bBinaries = InJsonObject->GetBoolField(Tool<FAutomatedHTTPConfig>::Binaries_BooleanKey);
		OutConfig.Timeout = InJsonObject->GetNumberField(Tool<FAutomatedHTTPConfig>::Timeout_FloatKey);
		OutConfig.SavePath = InJsonObject->GetStringField(Tool<FAutomatedHTTPConfig>::SavePathKey);

		OutConfig.ContentBody = InJsonObject->GetStringField(Tool<FAutomatedHTTPConfig>::ContentBodyKey);

		OutConfig.CustomMetaData.Empty();
		const TArray<TSharedPtr<FJsonValue>>& ObjectArray = InJsonObject->GetArrayField(Tool<FAutomatedHTTPConfig>::CustomMetaDataKey);
		for (auto& Temp : ObjectArray)
		{
			if (TSharedPtr<FJsonObject> TempObject = Temp->AsObject())
			{
				FString Key = TempObject->GetStringField(TEXT("Key"));
				FString Value = TempObject->GetStringField(TEXT("Value"));
				OutConfig.CustomMetaData.Emplace(Key, Value);
			}
		}
		if(!OutConfig.SavePath.IsEmpty())
		{
			FPaths::NormalizeDirectoryName(OutConfig.SavePath);
			FPaths::RemoveDuplicateSlashes(OutConfig.SavePath);
			AutomationToolCommonMethod::RecognizePathSyntax(OutConfig.SavePath);
		}

		if (OutConfig.bBinaries && !OutConfig.ContentBody.IsEmpty())
		{
			//二进制文件的情况下，ContentBody为文件路径
			FPaths::NormalizeDirectoryName(OutConfig.ContentBody);
			FPaths::RemoveDuplicateSlashes(OutConfig.ContentBody);
			AutomationToolCommonMethod::RecognizePathSyntax(OutConfig.ContentBody);
		}
		
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedCompressConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedCompressConfig& OutConfig)
	{
		OutConfig.bCompress = InJsonObject->GetBoolField(Tool<FAutomatedCompressConfig>::Compress_BooleanKey);
		OutConfig.bCompressEachFileUnderPath = InJsonObject->GetBoolField(Tool<FAutomatedCompressConfig>::CompressEachFileUnderPath_BooleanKey);
		OutConfig.CompressMethod = EnumTool<decltype(OutConfig.CompressMethod)>::GetEnumMemberValue(InJsonObject->GetStringField(Tool<FAutomatedCompressConfig>::CompressMethodKey));
		OutConfig.Password = InJsonObject->GetStringField(Tool<FAutomatedCompressConfig>::PasswordKey);
		
		OutConfig.PathOfSourceToTarget.Empty();
		const TArray<TSharedPtr<FJsonValue>>& Array = InJsonObject->GetArrayField(Tool<FAutomatedCompressConfig>::PathOfSourceToTargetKey);
		for (auto Temp : Array)
		{
			if (TSharedPtr<FJsonObject> TempObject = Temp->AsObject())
			{
				FString Source = TempObject->GetStringField(Tool<FAutomatedCompressConfig>::SourceKey);
				FString Target = TempObject->GetStringField(Tool<FAutomatedCompressConfig>::TargetKey);

				FPaths::NormalizeDirectoryName(Source);
				FPaths::RemoveDuplicateSlashes(Source);
				FPaths::NormalizeDirectoryName(Target);
				FPaths::RemoveDuplicateSlashes(Target);
				AutomationToolCommonMethod::RecognizePathSyntax(Source);
				AutomationToolCommonMethod::RecognizePathSyntax(Target);
				OutConfig.PathOfSourceToTarget.Emplace(Source, Target);
			}
		}
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedMysqlConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedMysqlConfig& OutConfig)
	{
		InJsonObject->TryGetStringField(Tool<FAutomatedMysqlConfig>::UserKey, OutConfig.User);
		InJsonObject->TryGetStringField(Tool<FAutomatedMysqlConfig>::HostKey, OutConfig.Host);
		InJsonObject->TryGetNumberField(Tool<FAutomatedMysqlConfig>::Port_IntKey, OutConfig.Port);
		InJsonObject->TryGetStringField(Tool<FAutomatedMysqlConfig>::DataBaseKey, OutConfig.DataBase);
		InJsonObject->TryGetStringField(Tool<FAutomatedMysqlConfig>::PasswordKey, OutConfig.Password);
		OutConfig.Method = GetEnum<decltype(OutConfig.Method)>(InJsonObject);
		InJsonObject->TryGetStringField(Tool<FAutomatedMysqlConfig>::SqlKey, OutConfig.Sql);
		InJsonObject->TryGetStringField(Tool<FAutomatedMysqlConfig>::SavePathKey, OutConfig.SavePath);
		if (!OutConfig.SavePath.IsEmpty())
		{
			FPaths::NormalizeDirectoryName(OutConfig.SavePath);
			FPaths::RemoveDuplicateSlashes(OutConfig.SavePath);
			AutomationToolCommonMethod::RecognizePathSyntax(OutConfig.SavePath);
		}

	}

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	template<class AutomatedConfigType>
	TSharedPtr<FJsonObject> AutomatedConfigToJsonObject(const AutomatedConfigType& InConfig)
	{
		if constexpr (FCommandProtocol_ConfigType<AutomatedConfigType>::Value != ECommandProtocol::CMD_None)
		{
			TSharedPtr<FJsonObject> RootObject = MakeShareable<FJsonObject>(new FJsonObject);
			ConfigureEnum<ECommandProtocol>(RootObject, FCommandProtocol_ConfigType<AutomatedConfigType>::Value);
			AutomatedConfigToJsonObject<AutomatedConfigType>(RootObject, InConfig, Transfer{});
			return RootObject;
		}
		else
		{
			return nullptr;
		}
	}

	template <class AutomatedConfigType>
	bool JsonStringToAutomatedConfig(const FString& InString, AutomatedConfigType& OutConfig)
	{
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(InString);
		TSharedPtr<FJsonObject> ReadRoot;
		if (FJsonSerializer::Deserialize(Reader, ReadRoot))
		{
			return JsonObjectToAutomatedConfig<AutomatedConfigType>(ReadRoot, OutConfig, Transfer{});
		}

		return false;
	}

}