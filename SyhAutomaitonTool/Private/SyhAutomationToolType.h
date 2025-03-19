#pragma once
#include "CoreMinimal.h"
#include "SimpleOSSCommand.h"
#include "SimpleHTTPType.h"
#include "SyhAutomationToolType.generated.h"

// 添加自己命令时:
// 需要修改SyhAutomationToolType.h和SyhAutomationToolType.cpp文件
// 需要修改AutomationJson.h和AutomationJson.cpp文件

/// <summary>
/// Related Some things;
/// </summary>
struct FCommandProtocolRelated
{
	static const FString ProtocolStringPrefix;
	static const int32 ProtocolStringPrefixLength;
	static const FString CommandKey;
	
	static constexpr const TCHAR* CommandName[sizeof(uint8) * 256] =
	{
	TEXT("None"),					//0
	TEXT("Call"),					//1
	TEXT("Call_Custom_Content"),	//2
	TEXT("UE_Project_Refresh"),		//3
	TEXT("Command_Nesting"),		//4
	TEXT("Deployment_Copy"),		//5
	TEXT("Deployment_Delete"),		//6
	TEXT("VS_Compile"),				//7
	TEXT("Git"),					//8
	TEXT("UE_Packaging"),			//9
	TEXT("UE_Plugin_Packaging"),	//10
	TEXT("Condition_Command"),		//11
	TEXT("OSS"),					//12
	TEXT("HTTP"),					//13
	TEXT("HTTP_Server"),			//14
	TEXT("Web_Socket"),				//15


	TEXT("Max")
	};
	
	static FString GetProtocolFullName(const FString& InShortName);
};

struct FAutomatedCallRelated
{
	static const FString CallTypeKey;
	static const FString CallPathKey;
	static const FString ParametersKey;
};

struct FAutomatedCallCustomContentRelated : public FAutomatedCallRelated
{
	static const FString ContentKey;
	static const FString WaitTime_IntKey;
};

struct FAutomatedUEProjectRefreshRelated : public FAutomatedCallRelated
{
	static const FString UnrealBuildToolPathKey;
	static const FString ProjectUProjectPathKey;


	static FString GetUnrealBuildToolPath(const FString& InEnginePath);
	static FString GetProjectUProjectPath(const FString& InProjectPath);
};

struct FAutomatedCommandNestingRelated
{
	static const FString CommandListKey;
	static const FString ComparisionTypeKey;
	static const FString ComparisionTypeStringPrefix;
	static const int32  ComparisionTypeStringPrefixLength;
	static const TArray<FString> ComparisionTypeName;
	static FString GetComparisionTypeFullName(const FString& InShortName);
};

struct FAutomatedDeploymentRelated
{
	static const FString  FilesKey;
};

struct FAutomatedDeploymentCopyRelated : public FAutomatedDeploymentRelated
{
	static const FString  DeleteMovedFiles_BooleanKey;
	static const FString  SourceKey;
	static const FString  DestinationKey;
};

struct FAutomatedDeploymentDeleteRelated : public FAutomatedDeploymentRelated
{
};

struct FAutomatedVSCompileRelated : public FAutomatedCallRelated
{
	static const FString  BuildStateKey;
	static const FString  SlnProjectPathKey;
	static const FString  ProjectKey;
};

struct FAutomatedGitRelated : public FAutomatedCallRelated
{
	static const FString  ProjectPathKey;
	static const FString  GitCommandsKey;
};

struct FAutomatedUEPackagingBaseRelated : public FAutomatedCallRelated
{
	static const FString EngineDirKey;
};

struct FAutomatedUEPackagingRelated : public FAutomatedUEPackagingBaseRelated
{
	static const FString UProjectPathKey;
	static const FString PlatformKey;
	static const FString BuildStateKey;
	static const FString BuildTargetKey;
	static const FString ArchiveDirectoryKey;
};

struct FAutomatedUEPluginPackagingRelated : public FAutomatedUEPackagingBaseRelated
{
	static const FString PathOfUPluginToTargetKey;
	static const FString SourceKey;
	static const FString TargetKey;
};

struct FAutomatedConditionCommandRelated : public FAutomatedCommandNestingRelated
{
	static const FString TrueCommandListKey;
	static const FString FalseCommandListKey;
};

struct FAutomatedOSSRelated
{
	static const FString OSSComandsKey;
};

struct FAutomatedHTTPRelated
{
	static const FString URLKey;
	static const FString VerbTypeKey;
	static const FString CustomMetaDataKey;
	static const FString Sync_BooleanKey;
	static const FString Binaries_BooleanKey;
	static const FString ContentBodyKey;
	static const FString Timeout_FloatKey;
	static const FString SavePathKey;

	static const TArray<FString> VerbTypeName;
	static const FString VerbTypeStringPrefix;
	static const int32  VerbTypeStringPrefixLength;
	static FString GetHttpVerbTypeFullName(const FString& InShortName);
};

//命令协议枚举
UENUM(BlueprintType)
enum class ECommandProtocol : uint8
{
	CMD_None = 0				UMETA(DisplayName = "None"),
	CMD_Call					UMETA(DisplayName = "Call"),	//用于呼叫某些程序
	CMD_Call_Custom_Content		UMETA(DisplayName = "Call Custom Content"),
	CMD_UE_Project_Refresh		UMETA(DisplayName = "UE Project Refresh"),
	CMD_Command_Nesting			UMETA(DisplayName = "Command Nesting"),
	CMD_Deployment_Copy			UMETA(DisplayName = "Deployment Copy"),
	CMD_Deployment_Delete		UMETA(DisplayName = "Deployment Delete"),
	CMD_VS_Compile				UMETA(DisplayName = "VS Compile"),
	CMD_Git						UMETA(DisplayName = "Git"),
	CMD_UE_Packaging			UMETA(DisplayName = "UE Packaging"),
	CMD_UE_Plugin_Packaging		UMETA(DisplayName = "UE Plugin Packaging"),
	CMD_Condition_Command		UMETA(DisplayName = "Condition Command"),
	CMD_OSS						UMETA(DisplayName = "OSS"),
	CMD_HTTP					UMETA(DisplayName = "HTTP"),
	//CMD_HTTP_Server				UMETA(DisplayName = "HTTP Server"),
	//CMD_Web_Socket				UMETA(DisplayName = "Web Socket"),


	CMD_Max						UMETA(DisplayName = "Max"),
};

UENUM(BlueprintType)
enum class EComparisionType : uint8
{
	COMPARISION_None = 0					UMETA(DisplayName = "Sequence"),//最后评估，全部成功视为成功
	COMPARISION_Sequence					UMETA(DisplayName = "Sequence"),//最后评估，全部成功视为成功
	COMPARISION_Break						UMETA(DisplayName = "Select"),	//出现错误即中断返回
};

// FAutomatedConfigBase总的基类
USTRUCT(BlueprintType)
struct FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	FAutomatedConfigBase(){}
};

//呼叫指定脚本
USTRUCT(BlueprintType)
struct FAutomatedCallConfig : public FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedConfigBase Super;
	typedef FAutomatedCallRelated RelatedString;

	FAutomatedCallConfig()
	{
		CallType = TEXT("bat、exe、sh");
		Parameters = TEXT("some input program parameters");
		CallPath = TEXT("the path of the file of bat or exe.");
	}
	
	UPROPERTY()
	FString CallType;

	UPROPERTY()
	FString Parameters;

	UPROPERTY()
	FString CallPath;

};

//输入脚本内容，自动生成bat脚本，并执行
USTRUCT(BlueprintType)
struct FAutomatedCallCustomContentConfig : public FAutomatedCallConfig
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedCallConfig Super;
	typedef FAutomatedCallCustomContentRelated RelatedString;

	FAutomatedCallCustomContentConfig()
	{
		CallType = TEXT("bat");
		CallPath = TEXT("autofill");
		Parameters = TEXT("autofill");
		Content = TEXT("Generate automatedly a bat file and call it. In content, input batch processing language you need.");
		WaitTime = 10;
	}

	UPROPERTY()
	FString Content;

	UPROPERTY()
	int32 WaitTime;
};

//
USTRUCT(BlueprintType)
struct FAutomatedUEProjectRefreshConfig : public FAutomatedCallConfig
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedCallConfig Super;
	typedef FAutomatedUEProjectRefreshRelated RelatedString;

	FAutomatedUEProjectRefreshConfig() 
	{
		CallType = TEXT("autofill");
		CallPath = TEXT("autofill");
		Parameters = TEXT("autofill");
		UnrealBuildToolPath = RelatedString::GetUnrealBuildToolPath(FPaths::EngineDir());
		ProjectUProjectPath = RelatedString::GetProjectUProjectPath(FPaths::ProjectDir());
	}

	UPROPERTY()
	FString UnrealBuildToolPath;

	UPROPERTY()
	FString ProjectUProjectPath;
};

USTRUCT(BlueprintType)
struct FAutomatedCommandNestingConfig : public FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedConfigBase Super;
	typedef FAutomatedCommandNestingRelated RelatedString;

	FAutomatedCommandNestingConfig() 
	{
		ComparisionType = EComparisionType::COMPARISION_Sequence;
		CommandList.Add(TEXT("CommandFile1.json"));
		CommandList.Add(TEXT("CommandFile2"));
	}

	UPROPERTY()
	EComparisionType ComparisionType;

	UPROPERTY()
	TArray<FString> CommandList;
};

USTRUCT(BlueprintType)
struct FAutomatedDeploymentCopyConfig : public FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedConfigBase Super;
	typedef FAutomatedDeploymentCopyRelated RelatedString;

	FAutomatedDeploymentCopyConfig() : bDeleteMovedFiles(true)
	{
		Files.Add(TEXT("SourcePath_1"), TEXT("DestinationPath_1"));
		Files.Add(TEXT("SourcePath_2"), TEXT("DestinationPath_2"));
	}

	UPROPERTY()
	bool bDeleteMovedFiles;			//是否删除Source文件

	UPROPERTY()
	TMap<FString, FString> Files;	//<dest, src>
};

USTRUCT(BlueprintType)
struct FAutomatedDeploymentDeleteConfig : public FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedConfigBase Super;
	typedef FAutomatedDeploymentDeleteRelated RelatedString;

	FAutomatedDeploymentDeleteConfig()
	{
		Files.Add(TEXT("Path_1"));
		Files.Add(TEXT("Path_2"));
	}

	UPROPERTY()
	TArray<FString> Files;	//<src>
};

USTRUCT(BlueprintType)
struct FAutomatedVSCompileConfig : public FAutomatedCallConfig
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedCallConfig Super;
	typedef FAutomatedVSCompileRelated RelatedString;

	FAutomatedVSCompileConfig()
	{
		CallType = TEXT("autofill");
		CallPath = TEXT("the path of devenv.exe");
		Parameters = TEXT("autofill");
		BuildState = TEXT("development or others");
		SlnProjectPath = TEXT(".sln file path");
		Project = TEXT("project name");
	}

	UPROPERTY()
	FString BuildState;

	UPROPERTY()
	FString SlnProjectPath;

	UPROPERTY()
	FString Project;//子项

};

USTRUCT(BlueprintType)
struct FAutomatedGitConfig : public FAutomatedCallConfig
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedCallConfig Super;
	typedef FAutomatedGitRelated RelatedString;

	FAutomatedGitConfig()
	{
		CallType = TEXT("bat");
		CallPath = TEXT("autofill");
		Parameters = TEXT("autofill");
		ProjectPath = TEXT("");
		GitCommands.Add(TEXT("command 1"));
		GitCommands.Add(TEXT("command 2"));
		GitCommands.Add(TEXT("please use String(xxx) to replace \"xxx xxx\", when use the method of command argument"));
	}

	UPROPERTY()
	FString ProjectPath;

	UPROPERTY()
	TArray<FString> GitCommands;


};

USTRUCT(BlueprintType)
struct FAutomatedUEPackagingConfig : public FAutomatedCallConfig
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedCallConfig Super;
	typedef FAutomatedUEPackagingRelated RelatedString;

	FAutomatedUEPackagingConfig()
	{
		CallType = TEXT("bat");
		CallPath = TEXT("autofill");
		Parameters = TEXT("autofill");
		EngineDir = TEXT("the path of engine");
		UProjectPath = TEXT("the path of .uproject file");
		Platform = TEXT("Win64 or Linux ...");
		BuildState = TEXT("Debug or Shipping ...");
		BuildTarget = TEXT("Server or Client");
		ArchiveDirectory = TEXT("the path that save pak file to ");

	}
	UPROPERTY()
	FString EngineDir;

	UPROPERTY()
	FString UProjectPath;

	UPROPERTY()
	FString Platform;

	UPROPERTY()
	FString BuildState;

	UPROPERTY()
	FString ArchiveDirectory;

	UPROPERTY()
	FString BuildTarget;
};

USTRUCT(BlueprintType)
struct FAutomatedUEPluginPackagingConfig : public FAutomatedCallConfig
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedCallConfig Super;
	typedef FAutomatedUEPluginPackagingRelated RelatedString;

	FAutomatedUEPluginPackagingConfig()
	{
		CallType = TEXT("bat");
		CallPath = TEXT("autofill");
		Parameters = TEXT("autofill");
		EngineDir = TEXT("the path of engine");
		PathOfUPluginToTarget.Add(TEXT(".uplugin file path"), TEXT("target file path"));
	}
	UPROPERTY()
	FString EngineDir;

	//批量打包
	UPROPERTY()
	TMap<FString, FString> PathOfUPluginToTarget;

};

USTRUCT(BlueprintType)
struct FAutomatedConditionCommandConfig : public FAutomatedCommandNestingConfig
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedCommandNestingConfig Super;
	typedef FAutomatedConditionCommandRelated RelatedString;

	FAutomatedConditionCommandConfig()
	{
		TrueCommandList.Add(TEXT("command list when the result is True"));
		FalseCommandList.Add(TEXT("command list when the result is False"));
	}

	UPROPERTY()
	TArray<FString> TrueCommandList;

	UPROPERTY()
	TArray<FString> FalseCommandList;
};

USTRUCT(BlueprintType)
struct FAutomatedOSSConfig : public FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedConfigBase Super;
	typedef FAutomatedOSSRelated RelatedString;

	FAutomatedOSSConfig()
	{
		SimpleOSSCommand::FOSSCommand InitFunc;
		InitFunc.CommandType = ESimpleOSSCommand::OSS_INIT;
		InitFunc.Param.Add(TEXT("-AccessKeyId="), TEXT(""));
		InitFunc.Param.Add(TEXT("-AccessKeySecret="), TEXT(""));
		InitFunc.Param.Add(TEXT("-EndPoint="), TEXT(""));
		OSSCommands.Add(InitFunc);

		SimpleOSSCommand::FOSSCommand BucketExistFunc;
		BucketExistFunc.CommandType = ESimpleOSSCommand::OSS_BUCKET_EXIST;
		BucketExistFunc.Param.Add(TEXT("-BucketName="), TEXT(""));
		OSSCommands.Add(BucketExistFunc);

		SimpleOSSCommand::FOSSCommand ObjectExistFunc;
		ObjectExistFunc.CommandType = ESimpleOSSCommand::OSS_OBJECT_EXIST;
		ObjectExistFunc.Param.Add(TEXT("-BucketName="), TEXT(""));
		ObjectExistFunc.Param.Add(TEXT("-ObjectName="), TEXT(""));
		OSSCommands.Add(ObjectExistFunc);

		SimpleOSSCommand::FOSSCommand CopyObjecttFunc;
		CopyObjecttFunc.CommandType = ESimpleOSSCommand::OSS_COPY_OBJECT;
		CopyObjecttFunc.Param.Add(TEXT("-SourceBucketName="), TEXT(""));
		CopyObjecttFunc.Param.Add(TEXT("-SourceObjectName="), TEXT(""));
		CopyObjecttFunc.Param.Add(TEXT("-CopyBucketName="), TEXT(""));
		CopyObjecttFunc.Param.Add(TEXT("-CopyObjectName="), TEXT(""));
		OSSCommands.Add(CopyObjecttFunc);

		SimpleOSSCommand::FOSSCommand DeleteObjectFunc;
		DeleteObjectFunc.CommandType = ESimpleOSSCommand::OSS_DELETE_OBJECT;
		DeleteObjectFunc.Param.Add(TEXT("-BucketName="), TEXT(""));
		DeleteObjectFunc.Param.Add(TEXT("-ObjectName="), TEXT(""));
		OSSCommands.Add(DeleteObjectFunc);

		SimpleOSSCommand::FOSSCommand GetObjectFunc;
		GetObjectFunc.CommandType = ESimpleOSSCommand::OSS_GET_OBJECT;
		GetObjectFunc.Param.Add(TEXT("-BucketName="), TEXT(""));
		GetObjectFunc.Param.Add(TEXT("-ObjectName="), TEXT(""));
		GetObjectFunc.Param.Add(TEXT("-LocalPaths="), TEXT(""));
		OSSCommands.Add(GetObjectFunc);

		SimpleOSSCommand::FOSSCommand ResumableDownloadObjectFunc;
		ResumableDownloadObjectFunc.CommandType = ESimpleOSSCommand::OSS_RESUMABLE_DOWNLOAD_OBJECT;
		ResumableDownloadObjectFunc.Param.Add(TEXT("-BucketName="), TEXT(""));
		ResumableDownloadObjectFunc.Param.Add(TEXT("-ObjectName="), TEXT(""));
		ResumableDownloadObjectFunc.Param.Add(TEXT("-LocalPaths="), TEXT(""));
		OSSCommands.Add(ResumableDownloadObjectFunc);

		SimpleOSSCommand::FOSSCommand ResumableUploadObjectFunc;
		ResumableUploadObjectFunc.CommandType = ESimpleOSSCommand::OSS_RESUMABLE_UPLOAD_OBJECT;
		ResumableUploadObjectFunc.Param.Add(TEXT("-BucketName="), TEXT(""));
		ResumableUploadObjectFunc.Param.Add(TEXT("-ObjectName="), TEXT(""));
		ResumableUploadObjectFunc.Param.Add(TEXT("-LocalPaths="), TEXT(""));
		OSSCommands.Add(ResumableUploadObjectFunc);

		SimpleOSSCommand::FOSSCommand PutObjectFunc;
		PutObjectFunc.CommandType = ESimpleOSSCommand::OSS_PUT_OBJECT;
		PutObjectFunc.Param.Add(TEXT("-BucketName="), TEXT(""));
		PutObjectFunc.Param.Add(TEXT("-ObjectName="), TEXT(""));
		PutObjectFunc.Param.Add(TEXT("-LocalPaths="), TEXT(""));
		OSSCommands.Add(PutObjectFunc);

		SimpleOSSCommand::FOSSCommand UploadObjectFunc;
		UploadObjectFunc.CommandType = ESimpleOSSCommand::OSS_UPLOAD_PART;
		UploadObjectFunc.Param.Add(TEXT("-UploadId="), TEXT(""));
		UploadObjectFunc.Param.Add(TEXT("-BucketName="), TEXT(""));
		UploadObjectFunc.Param.Add(TEXT("-ObjectName="), TEXT(""));
		UploadObjectFunc.Param.Add(TEXT("-LocalPaths="), TEXT(""));
		OSSCommands.Add(UploadObjectFunc);

	}

	TArray<SimpleOSSCommand::FOSSCommand> OSSCommands;
		
};

USTRUCT(BlueprintType)
struct FAutomatedHTTPConfig : public FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedConfigBase Super;
	typedef FAutomatedHTTPRelated RelatedString;

	FAutomatedHTTPConfig()
	{
		URL = TEXT("http://127.0.0.1");
		VerbType = ESimpleHTTPVerbType::SIMPLE_POST;
		bSync = true;
		bBinaries = false;
		ContentBody = TEXT("ContentBody may include a piece of normal text or binary data, depending on its relation to bBinaries.");
		Timeout = 100.f;
		SavePath = TEXT("For GET, it is not empty.");
		CustomMetaData.Add(TEXT("Key"), TEXT("Value"));
	}

	UPROPERTY()
	FString URL;

	UPROPERTY()
	ESimpleHTTPVerbType VerbType;

	UPROPERTY()
	TMap<FString, FString> CustomMetaData;

	UPROPERTY()
	bool bSync;//是否同步，默认同步

	UPROPERTY()
	bool bBinaries;

	UPROPERTY()
	FString ContentBody;//Json-string, Binaries-Path

	UPROPERTY()
	float Timeout;

	UPROPERTY()
	FString SavePath;//For get;
};


/// <summary>
///	Traits
/// </summary>

//如果有配置类型，我们能拿到什么
template <class ConfigType> struct FCommandProtocol_ConfigType	{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_None; };
template <> struct FCommandProtocol_ConfigType<FAutomatedCallConfig>				{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Call; };
template <> struct FCommandProtocol_ConfigType<FAutomatedCallCustomContentConfig>	{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Call_Custom_Content;};
template <> struct FCommandProtocol_ConfigType<FAutomatedUEProjectRefreshConfig>	{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_UE_Project_Refresh; };
template <> struct FCommandProtocol_ConfigType<FAutomatedCommandNestingConfig>		{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Command_Nesting; };
template <> struct FCommandProtocol_ConfigType<FAutomatedDeploymentCopyConfig>		{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Deployment_Copy; };
template <> struct FCommandProtocol_ConfigType<FAutomatedDeploymentDeleteConfig>	{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Deployment_Delete; };
template <> struct FCommandProtocol_ConfigType<FAutomatedVSCompileConfig>			{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_VS_Compile; };
template <> struct FCommandProtocol_ConfigType<FAutomatedGitConfig>					{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Git; };
template <> struct FCommandProtocol_ConfigType<FAutomatedUEPackagingConfig>			{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_UE_Packaging; };
template <> struct FCommandProtocol_ConfigType<FAutomatedUEPluginPackagingConfig>	{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_UE_Plugin_Packaging; };
template <> struct FCommandProtocol_ConfigType<FAutomatedConditionCommandConfig>	{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Condition_Command; };
template <> struct FCommandProtocol_ConfigType<FAutomatedOSSConfig>					{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_OSS; };
template <> struct FCommandProtocol_ConfigType<FAutomatedHTTPConfig>				{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_HTTP; };


//如果有枚举号，我们能拿到什么
template <ECommandProtocol Protocol> struct FCommandProtocol_EnumType{ using ConfigType = FAutomatedConfigBase; };
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Call>				{ using ConfigType = FAutomatedCallConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Call_Custom_Content>	{ using ConfigType = FAutomatedCallCustomContentConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_UE_Project_Refresh>	{ using ConfigType = FAutomatedUEProjectRefreshConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Command_Nesting>		{ using ConfigType = FAutomatedCommandNestingConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Deployment_Copy>		{ using ConfigType = FAutomatedDeploymentCopyConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Deployment_Delete>	{ using ConfigType = FAutomatedDeploymentDeleteConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_VS_Compile>			{ using ConfigType = FAutomatedVSCompileConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Git>					{ using ConfigType = FAutomatedGitConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_UE_Packaging>		{ using ConfigType = FAutomatedUEPackagingConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_UE_Plugin_Packaging>	{ using ConfigType = FAutomatedUEPluginPackagingConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Condition_Command>	{ using ConfigType = FAutomatedConditionCommandConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_OSS>					{ using ConfigType = FAutomatedOSSConfig; };
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_HTTP>				{ using ConfigType = FAutomatedHTTPConfig; };


