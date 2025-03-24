#pragma once
#include "Json/AutomationJsonTemplate.h"
#include "SyhAutomationToolCommon.h"

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
	void ConfigureEnum(TSharedPtr<FJsonObject> InJsonObject, EnumType InProtocol)
	{
		static_assert(std::is_enum_v<EnumType>, "EnumType must be enum type.");
		InJsonObject->SetStringField(EnumTool<EnumType>::GetEnumNameKey(), EnumTool<EnumType>::GetShortName(InProtocol));
	}
	template void ConfigureEnum<ECommandProtocol>(TSharedPtr<FJsonObject> InJsonObject, ECommandProtocol InProtocol);
	template void ConfigureEnum<ESimpleOSSCommand>(TSharedPtr<FJsonObject> InJsonObject, ESimpleOSSCommand InProtocol);
	template void ConfigureEnum<ESimpleHTTPVerbType>(TSharedPtr<FJsonObject> InJsonObject, ESimpleHTTPVerbType InProtocol);
	template void ConfigureEnum<EComparisionType>(TSharedPtr<FJsonObject> InJsonObject, EComparisionType InProtocol);

	template<class EnumType>
	EnumType GetEnum(TSharedPtr<FJsonObject> InJsonObject)
	{
		static_assert(std::is_enum_v<EnumType>, "EnumType must be enum type.");
		return EnumTool<EnumType>::GetEnumValue(InJsonObject->GetStringField(EnumTool<EnumType>::GetEnumNameKey()));
	}
	template ECommandProtocol GetEnum<ECommandProtocol>(TSharedPtr<FJsonObject> InJsonObject);
	template ESimpleOSSCommand GetEnum<ESimpleOSSCommand>(TSharedPtr<FJsonObject> InJsonObject);
	template ESimpleHTTPVerbType GetEnum<ESimpleHTTPVerbType>(TSharedPtr<FJsonObject> InJsonObject);
	template EComparisionType GetEnum<EComparisionType>(TSharedPtr<FJsonObject> InJsonObject);


	//从Json对象中提取命令
	ECommandProtocol GetCommandProtocol(TSharedPtr<FJsonObject> InJsonObject);

	//从Json字符串中提取命令
	ECommandProtocol GetCommandProtocol(const FString& InJsonString);

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	EComparisionType GetComparisionType(TSharedPtr<FJsonObject> InJsonObject);

	EComparisionType GetComparisionType(const FString& InJsonString);

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	template <class AutomatedConfigType>
	void FillJsonValue(TArray<TSharedPtr<FJsonValue>>& InCommandArray);

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
			EnumTool<decltype(InConfig.ComparisionType)>::GetShortName(InConfig.ComparisionType));

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
			TempJsonObject->SetStringField(Tool<FAutomatedDeploymentCopyConfig>::DestinationKey, Temp.Value);
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
		OutJsonObject->SetStringField(EnumTool<decltype(InConfig.VerbType)>::GetEnumNameKey(), EnumTool<decltype(InConfig.VerbType)>::GetShortName(InConfig.VerbType));
		
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
		FPaths::NormalizeFilename(OutConfig.UnrealBuildToolPath);
		FPaths::NormalizeFilename(OutConfig.ProjectUProjectPath);
		FPaths::RemoveDuplicateSlashes(OutConfig.UnrealBuildToolPath);
		FPaths::RemoveDuplicateSlashes(OutConfig.ProjectUProjectPath);
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedCommandNestingConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedCommandNestingConfig& OutConfig)
	{
		OutConfig.ComparisionType = EnumTool<decltype(OutConfig.ComparisionType)>::GetEnumValue(
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
				FString Destination = TempObject->GetStringField(Tool<FAutomatedDeploymentCopyConfig>::DestinationKey);
				FPaths::NormalizeFilename(Source);
				FPaths::NormalizeFilename(Destination);
				FPaths::RemoveDuplicateSlashes(Source);
				FPaths::RemoveDuplicateSlashes(Destination);
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
			FPaths::NormalizeFilename(Str);
			FPaths::RemoveDuplicateSlashes(Str);
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
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedGitConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedGitConfig& OutConfig)
	{
		OutConfig.ProjectPath = InJsonObject->GetStringField(Tool<FAutomatedGitConfig>::ProjectPathKey);
		FPaths::NormalizeFilename(OutConfig.ProjectPath);
		FPaths::RemoveDuplicateSlashes(OutConfig.ProjectPath);
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
		FPaths::NormalizeFilename(OutConfig.UProjectPath);
		FPaths::NormalizeDirectoryName(OutConfig.ArchiveDirectory);
		FPaths::RemoveDuplicateSlashes(OutConfig.EngineDir);
		FPaths::RemoveDuplicateSlashes(OutConfig.UProjectPath);
		FPaths::RemoveDuplicateSlashes(OutConfig.ArchiveDirectory);
	}
	
	template<>
	void JsonObjectToAutomatedConfig<FAutomatedUEPluginPackagingConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedUEPluginPackagingConfig& OutConfig)
	{
		OutConfig.EngineDir = InJsonObject->GetStringField(Tool<FAutomatedUEPluginPackagingConfig>::EngineDirKey);
		FPaths::NormalizeDirectoryName(OutConfig.EngineDir);
		FPaths::RemoveDuplicateSlashes(OutConfig.EngineDir);

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

		OutConfig.VerbType = EnumTool<decltype(OutConfig.VerbType)>::GetEnumValue(
			InJsonObject->GetStringField(EnumTool<decltype(OutConfig.VerbType)>::GetEnumNameKey()));

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

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//用于序列化
	void SerializeAllCommand(FString& OutString);

	//用于反序列化
	void DeserializeAllCommand(const FString& InString, TMultiMap<ECommandProtocol, FString>& OutCommand);

}