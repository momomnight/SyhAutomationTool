#pragma once
#include "Json/AutomationJsonTemplate.h"

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

	//从Json对象中提取命令
	ECommandProtocol GetCommandProtocol(TSharedPtr<FJsonObject> InJsonObject);

	//从Json字符串中提取命令
	ECommandProtocol GetCommandProtocol(const FString& InJsonString);

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	EComparisionType GetComparisionType(TSharedPtr<FJsonObject> InJsonObject);

	EComparisionType GetComparisionType(const FString& InJsonString);

	EComparisionType StringToComparisionType(const FString& InShortCommandName);

	FString ComparisionTypeToString(EComparisionType InProtocol);


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
		OutJsonObject->SetStringField(RelatedString<FAutomatedCallConfig>::CallTypeKey, InConfig.CallType);
		OutJsonObject->SetStringField(RelatedString<FAutomatedCallConfig>::CallPathKey, InConfig.CallPath);
		OutJsonObject->SetStringField(RelatedString<FAutomatedCallConfig>::ParametersKey, InConfig.Parameters);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedCallCustomContentConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedCallCustomContentConfig& InConfig)
	{
		OutJsonObject->SetNumberField(RelatedString<FAutomatedCallCustomContentConfig>::WaitTimeKey, InConfig.WaitTime);
		OutJsonObject->SetStringField(RelatedString<FAutomatedCallCustomContentConfig>::ContentKey, InConfig.Content);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedUEProjectRefreshConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedUEProjectRefreshConfig& InConfig)
	{
		OutJsonObject->SetStringField(RelatedString<FAutomatedUEProjectRefreshConfig>::UnrealBuildToolPathKey, InConfig.UnrealBuildToolPath);
		OutJsonObject->SetStringField(RelatedString<FAutomatedUEProjectRefreshConfig>::ProjectUProjectPathKey, InConfig.ProjectUProjectPath);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedCommandNestingConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedCommandNestingConfig& InConfig)
	{
		OutJsonObject->SetStringField(RelatedString<FAutomatedCommandNestingConfig>::ComparisionTypeKey, ComparisionTypeToString(InConfig.ComparisionType));

		//上面的命令对于配置无需更多处理
		TArray<TSharedPtr<FJsonValue>> Array;
		for (auto& Temp : InConfig.CommandList)
		{
			Array.Add(MakeShareable<FJsonValueString>(new FJsonValueString(Temp)));
		}
		OutJsonObject->SetArrayField(RelatedString<FAutomatedCommandNestingConfig>::CommandListKey, Array);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedDeploymentCopyConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedDeploymentCopyConfig& InConfig)
	{
		OutJsonObject->SetBoolField(RelatedString<FAutomatedDeploymentCopyConfig>::DeleteMovedFiles_BooleanKey, InConfig.bDeleteMovedFiles);
		
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
			TempJsonObject->SetStringField(RelatedString<FAutomatedDeploymentCopyConfig>::SourceKey, Temp.Key);
			TempJsonObject->SetStringField(RelatedString<FAutomatedDeploymentCopyConfig>::DestinationKey, Temp.Value);
			JsonArray.Add(MakeShareable<FJsonValueObject>(new FJsonValueObject(TempJsonObject)));
		}

		OutJsonObject->SetArrayField(RelatedString<FAutomatedDeploymentCopyConfig>::FilesKey, JsonArray);
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
		OutJsonObject->SetArrayField(RelatedString<FAutomatedDeploymentDeleteConfig>::FilesKey, JsonArray);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedVSCompileConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedVSCompileConfig& InConfig)
	{
		OutJsonObject->SetStringField(RelatedString<FAutomatedVSCompileConfig>::BuildStateKey, InConfig.BuildState);
		OutJsonObject->SetStringField(RelatedString<FAutomatedVSCompileConfig>::SlnProjectPathKey, InConfig.SlnProjectPath);
		OutJsonObject->SetStringField(RelatedString<FAutomatedVSCompileConfig>::ProjectKey, InConfig.Project);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedGitConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedGitConfig& InConfig)
	{
		
		OutJsonObject->SetStringField(RelatedString<FAutomatedGitConfig>::ProjectPathKey, InConfig.ProjectPath);

		TArray<TSharedPtr<FJsonValue>> Array;
		for (auto& Temp : InConfig.GitCommands)
		{
			Array.Add(MakeShareable<FJsonValueString>(new FJsonValueString(Temp)));
		}

		OutJsonObject->SetArrayField(RelatedString<FAutomatedGitConfig>::GitCommandsKey, Array);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedUEPackagingConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedUEPackagingConfig& InConfig)
	{
		OutJsonObject->SetStringField(RelatedString<FAutomatedUEPackagingConfig>::EngineDirKey, InConfig.EngineDir);
		OutJsonObject->SetStringField(RelatedString<FAutomatedUEPackagingConfig>::UProjectPathKey, InConfig.UProjectPath);
		OutJsonObject->SetStringField(RelatedString<FAutomatedUEPackagingConfig>::PlatformKey, InConfig.Platform);
		OutJsonObject->SetStringField(RelatedString<FAutomatedUEPackagingConfig>::BuildStateKey, InConfig.BuildState);
		OutJsonObject->SetStringField(RelatedString<FAutomatedUEPackagingConfig>::BuildTargetKey, InConfig.BuildTarget);
		OutJsonObject->SetStringField(RelatedString<FAutomatedUEPackagingConfig>::ArchiveDirectoryKey, InConfig.ArchiveDirectory);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedUEPluginPackagingConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedUEPluginPackagingConfig& InConfig)
	{
		OutJsonObject->SetStringField(RelatedString<FAutomatedUEPluginPackagingConfig>::EngineDirKey, InConfig.EngineDir);

		TArray<TSharedPtr<FJsonValue>> Array;
		for (auto& Temp : InConfig.PathOfUPluginToTarget)
		{
			TSharedPtr<FJsonObject> Object = MakeShareable<FJsonObject>(new FJsonObject);
			Object->SetStringField(RelatedString<FAutomatedUEPluginPackagingConfig>::SourceKey, Temp.Key);
			Object->SetStringField(RelatedString<FAutomatedUEPluginPackagingConfig>::TargetKey, Temp.Value);
			Array.Add(MakeShareable<FJsonValueObject>(new FJsonValueObject(Object)));
		}
		OutJsonObject->SetArrayField(RelatedString<FAutomatedUEPluginPackagingConfig>::PathOfUPluginToTargetKey, Array);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedConditionCommandConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedConditionCommandConfig& InConfig)
	{
		TArray<TSharedPtr<FJsonValue>> TrueArray;
		for (auto& Temp : InConfig.TrueCommandList)
		{
			TrueArray.Add(MakeShareable<FJsonValueString>(new FJsonValueString(Temp)));
		}
		OutJsonObject->SetArrayField(RelatedString<FAutomatedConditionCommandConfig>::TrueCommandListKey, TrueArray);

		TArray<TSharedPtr<FJsonValue>> FalseArray;
		for (auto& Temp : InConfig.FalseCommandList)
		{
			FalseArray.Add(MakeShareable<FJsonValueString>(new FJsonValueString(Temp)));
		}
		OutJsonObject->SetArrayField(RelatedString<FAutomatedConditionCommandConfig>::FalseCommandListKey, FalseArray);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedOSSConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedOSSConfig& InConfig)
	{
		TArray<TSharedPtr<FJsonValue>> Array;
		SimpleOSSCommand::OSSCommandConfigToJsonObject(InConfig.OSSCommands, Array);
		OutJsonObject->SetArrayField(RelatedString<FAutomatedOSSConfig>::OSSComandsKey, Array);
	}


	//用于配置命令字段
	void ConfigureCommandProtocol(TSharedPtr<FJsonObject> InJsonObject, ECommandProtocol InProtocol);

	template<class AutomatedConfigType>
	TSharedPtr<FJsonObject> AutomatedConfigToJsonObject(const AutomatedConfigType& InConfig)
	{
		if constexpr (FCommandProtocol_ConfigType<AutomatedConfigType>::Value != ECommandProtocol::CMD_None)
		{
			TSharedPtr<FJsonObject> RootObject = MakeShareable<FJsonObject>(new FJsonObject);
			ConfigureCommandProtocol(RootObject, FCommandProtocol_ConfigType<AutomatedConfigType>::Value);
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
		using RelatedString = FAutomatedCallConfig::RelatedString;
		OutConfig.CallPath = InJsonObject->GetStringField(RelatedString::CallPathKey);
		OutConfig.CallType = InJsonObject->GetStringField(RelatedString::CallTypeKey);
		OutConfig.Parameters = InJsonObject->GetStringField(RelatedString::ParametersKey);

		//某些程序需要标准路径
		//从Json字符中读取的路径格式可能不对
		FPaths::NormalizeFilename(OutConfig.CallPath);
		FPaths::RemoveDuplicateSlashes(OutConfig.CallPath);
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedCallCustomContentConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedCallCustomContentConfig& OutConfig)
	{
		OutConfig.WaitTime = InJsonObject->GetNumberField(RelatedString<FAutomatedCallCustomContentConfig>::WaitTimeKey);
		OutConfig.Content = InJsonObject->GetStringField(RelatedString<FAutomatedCallCustomContentConfig>::ContentKey);
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedUEProjectRefreshConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedUEProjectRefreshConfig& OutConfig)
	{
		OutConfig.UnrealBuildToolPath = InJsonObject->GetStringField(RelatedString<FAutomatedUEProjectRefreshConfig>::UnrealBuildToolPathKey);
		OutConfig.ProjectUProjectPath = InJsonObject->GetStringField(RelatedString<FAutomatedUEProjectRefreshConfig>::ProjectUProjectPathKey);
		
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
		FString TypeStr = InJsonObject->GetStringField(RelatedString<FAutomatedCommandNestingConfig>::ComparisionTypeKey);
		OutConfig.ComparisionType = StringToComparisionType(TypeStr);
		const TArray<TSharedPtr<FJsonValue>>& InArrayObject = InJsonObject->GetArrayField(RelatedString<FAutomatedCommandNestingConfig>::CommandListKey);
		OutConfig.CommandList.Empty();
		for (auto& Temp : InArrayObject)
		{
			OutConfig.CommandList.Add(Temp->AsString());
		}
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedDeploymentCopyConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedDeploymentCopyConfig& OutConfig)
	{
		OutConfig.bDeleteMovedFiles = InJsonObject->GetBoolField(RelatedString<FAutomatedDeploymentCopyConfig>::DeleteMovedFiles_BooleanKey);
		OutConfig.Files.Empty();
		const TArray<TSharedPtr<FJsonValue>>& ObjectArray = InJsonObject->GetArrayField(RelatedString<FAutomatedDeploymentCopyConfig>::FilesKey);
		for (auto& Temp : ObjectArray)
		{
			if (TSharedPtr<FJsonObject> TempObject = Temp->AsObject())
			{
				FString Source = TempObject->GetStringField(RelatedString<FAutomatedDeploymentCopyConfig>::SourceKey);
				FString Destination = TempObject->GetStringField(RelatedString<FAutomatedDeploymentCopyConfig>::DestinationKey);
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
		const TArray<TSharedPtr<FJsonValue>>& ObjectArray = InJsonObject->GetArrayField(RelatedString<FAutomatedDeploymentDeleteConfig>::FilesKey);
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
		OutConfig.BuildState = InJsonObject->GetStringField(RelatedString<FAutomatedVSCompileConfig>::BuildStateKey);
		OutConfig.SlnProjectPath = InJsonObject->GetStringField(RelatedString<FAutomatedVSCompileConfig>::SlnProjectPathKey);
		OutConfig.Project = InJsonObject->GetStringField(RelatedString<FAutomatedVSCompileConfig>::ProjectKey);
		FPaths::NormalizeFilename(OutConfig.SlnProjectPath);
		FPaths::RemoveDuplicateSlashes(OutConfig.SlnProjectPath);
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedGitConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedGitConfig& OutConfig)
	{
		OutConfig.ProjectPath = InJsonObject->GetStringField(RelatedString<FAutomatedGitConfig>::ProjectPathKey);
		FPaths::NormalizeFilename(OutConfig.ProjectPath);
		FPaths::RemoveDuplicateSlashes(OutConfig.ProjectPath);
		const TArray<TSharedPtr<FJsonValue>>& Array = InJsonObject->GetArrayField(RelatedString<FAutomatedGitConfig>::GitCommandsKey);
		OutConfig.GitCommands.Empty();
		for (auto& Temp : Array)
		{
			OutConfig.GitCommands.Add(Temp->AsString());
		}
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedUEPackagingConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedUEPackagingConfig& OutConfig)
	{
		OutConfig.EngineDir = InJsonObject->GetStringField(RelatedString<FAutomatedUEPackagingConfig>::EngineDirKey);
		OutConfig.UProjectPath = InJsonObject->GetStringField(RelatedString<FAutomatedUEPackagingConfig>::UProjectPathKey);
		OutConfig.Platform = InJsonObject->GetStringField(RelatedString<FAutomatedUEPackagingConfig>::PlatformKey);
		OutConfig.BuildState = InJsonObject->GetStringField(RelatedString<FAutomatedUEPackagingConfig>::BuildStateKey);
		OutConfig.BuildTarget = InJsonObject->GetStringField(RelatedString<FAutomatedUEPackagingConfig>::BuildTargetKey);
		OutConfig.ArchiveDirectory = InJsonObject->GetStringField(RelatedString<FAutomatedUEPackagingConfig>::ArchiveDirectoryKey);
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
		OutConfig.EngineDir = InJsonObject->GetStringField(RelatedString<FAutomatedUEPluginPackagingConfig>::EngineDirKey);
		FPaths::NormalizeDirectoryName(OutConfig.EngineDir);
		FPaths::RemoveDuplicateSlashes(OutConfig.EngineDir);

		OutConfig.PathOfUPluginToTarget.Empty();
		const TArray<TSharedPtr<FJsonValue>>& Array = InJsonObject->GetArrayField(RelatedString<FAutomatedUEPluginPackagingConfig>::PathOfUPluginToTargetKey);
	
		for (auto& Temp : Array)
		{
			TSharedPtr<FJsonObject> Object = Temp->AsObject();
			FString Source = Object->GetStringField(RelatedString<FAutomatedUEPluginPackagingConfig>::SourceKey);
			FString Target = Object->GetStringField(RelatedString<FAutomatedUEPluginPackagingConfig>::TargetKey);
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
		const TArray<TSharedPtr<FJsonValue>>& TrueArrayObject = InJsonObject->GetArrayField(RelatedString<FAutomatedConditionCommandConfig>::TrueCommandListKey);
		OutConfig.TrueCommandList.Empty();
		for (auto& Temp : TrueArrayObject)
		{
			OutConfig.TrueCommandList.Add(Temp->AsString());
		}
		const TArray<TSharedPtr<FJsonValue>>& FalseArrayObject = InJsonObject->GetArrayField(RelatedString<FAutomatedConditionCommandConfig>::FalseCommandListKey);
		OutConfig.FalseCommandList.Empty();
		for (auto& Temp : FalseArrayObject)
		{
			OutConfig.FalseCommandList.Add(Temp->AsString());
		}
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedOSSConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedOSSConfig& OutConfig)
	{
		const TArray<TSharedPtr<FJsonValue>>& Array = InJsonObject->GetArrayField(RelatedString<FAutomatedOSSConfig>::OSSComandsKey);
		OutConfig.OSSCommands.Empty();
		for (auto& Temp : Array)
		{
			if (const TSharedPtr<FJsonObject> Object = Temp->AsObject())
			{
				SimpleOSSCommand::JsonObjectToOSSCommand(Object, OutConfig.OSSCommands.AddDefaulted_GetRef());
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