#pragma once
#include "CoreMinimal.h"
#include "SimpleAutomatedToolTypeFwd.h"
#include "SimpleAutomatedToolType.generated.h"

//命令协议枚举
UENUM(BlueprintType)
enum class ECommandProtocol : uint8
{
	CMD_None = 0					UMETA(DisplayName = "None"),
	CMD_Call						UMETA(DisplayName = "Call"),	//用于呼叫某些程序
	CMD_Call_Custom_Content			UMETA(DisplayName = "Call Custom Content"),
	CMD_UE_Project_Refresh			UMETA(DisplayName = "UE Project Refresh"),
	CMD_Command_Nesting				UMETA(DisplayName = "Command Nesting"),
	CMD_Deployment_Copy				UMETA(DisplayName = "Deployment Copy"),
	CMD_Deployment_Delete			UMETA(DisplayName = "Deployment Delete"),
	CMD_VS_Compile					UMETA(DisplayName = "VS Compile"),
	CMD_Git							UMETA(DisplayName = "Git"),
	CMD_UE_Packaging				UMETA(DisplayName = "UE Packaging"),
	CMD_UE_Plugin_Packaging			UMETA(DisplayName = "UE Plugin Packaging"),
	CMD_Condition_Command			UMETA(DisplayName = "Condition Command"),
	CMD_OSS							UMETA(DisplayName = "OSS"),
	CMD_HTTP						UMETA(DisplayName = "HTTP"),
	CMD_Compress					UMETA(DisplayName = "Compress"),
	CMD_Mysql						UMETA(DisplayName = "Mysql"),
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


UENUM(BlueprintType)
enum class ECompressType : uint8
{
	COMPRESS_None = 0				UMETA(DisplayName = "None"),
	COMPRESS_Zip					UMETA(DisplayName = "Zip"),
	COMPRESS_RZ						UMETA(DisplayName = "Custom Format RZ"),
};

UENUM(BlueprintType)
enum class EMysqlMethodType : uint8
{
	MYSQLMETHOD_None = 0				UMETA(DisplayName = "None"),
	MYSQLMETHOD_Get						UMETA(DisplayName = "Get"),
	MYSQLMETHOD_Post					UMETA(DisplayName = "Post"),
};

// FAutomatedConfigBase总的基类
USTRUCT(BlueprintType)
struct SIMPLEAUTOMATEDTOOLCOMMON_API FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	FAutomatedConfigBase() {}
};


//呼叫指定脚本
USTRUCT(BlueprintType)
struct SIMPLEAUTOMATEDTOOLCOMMON_API FAutomatedCallConfig : public FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedConfigBase Super;

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
struct SIMPLEAUTOMATEDTOOLCOMMON_API FAutomatedCallCustomContentConfig : public FAutomatedCallConfig
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedCallConfig Super;

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
struct SIMPLEAUTOMATEDTOOLCOMMON_API FAutomatedUEProjectRefreshConfig : public FAutomatedCallConfig
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedCallConfig Super;

	FAutomatedUEProjectRefreshConfig()
	{
		CallType = TEXT("autofill");
		CallPath = TEXT("autofill");
		Parameters = TEXT("autofill");
		UnrealBuildToolPath = TEXT("UBT Path");
		ProjectUProjectPath = TEXT(".uproject Path");
	}

	UPROPERTY()
	FString UnrealBuildToolPath;

	UPROPERTY()
	FString ProjectUProjectPath;
};

//
USTRUCT(BlueprintType)
struct SIMPLEAUTOMATEDTOOLCOMMON_API FAutomatedCommandNestingConfig : public FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedConfigBase Super;

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

//
USTRUCT(BlueprintType)
struct SIMPLEAUTOMATEDTOOLCOMMON_API FAutomatedDeploymentCopyConfig : public FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedConfigBase Super;

	FAutomatedDeploymentCopyConfig() : bDeleteMovedFiles(true)
	{
		Files.Add(TEXT("SourcePath_1"), TEXT("Target_1"));
		Files.Add(TEXT("SourcePath_2"), TEXT("Target_2"));
	}

	UPROPERTY()
	bool bDeleteMovedFiles;			//是否删除Source文件

	UPROPERTY()
	TMap<FString, FString> Files;	//<dest, src>
};

//
USTRUCT(BlueprintType)
struct SIMPLEAUTOMATEDTOOLCOMMON_API FAutomatedDeploymentDeleteConfig : public FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedConfigBase Super;

	FAutomatedDeploymentDeleteConfig()
	{
		Files.Add(TEXT("Path_1"));
		Files.Add(TEXT("Path_2"));
	}

	UPROPERTY()
	TArray<FString> Files;	//<src>
};

//
USTRUCT(BlueprintType)
struct SIMPLEAUTOMATEDTOOLCOMMON_API FAutomatedVSCompileConfig : public FAutomatedCallConfig
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedCallConfig Super;

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

//
USTRUCT(BlueprintType)
struct SIMPLEAUTOMATEDTOOLCOMMON_API FAutomatedGitConfig : public FAutomatedCallConfig
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedCallConfig Super;

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

//
USTRUCT(BlueprintType)
struct SIMPLEAUTOMATEDTOOLCOMMON_API FAutomatedUEPackagingConfig : public FAutomatedCallConfig
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedCallConfig Super;

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

//
USTRUCT(BlueprintType)
struct SIMPLEAUTOMATEDTOOLCOMMON_API FAutomatedUEPluginPackagingConfig : public FAutomatedCallConfig
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedCallConfig Super;

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

//
USTRUCT(BlueprintType)
struct SIMPLEAUTOMATEDTOOLCOMMON_API FAutomatedConditionCommandConfig : public FAutomatedCommandNestingConfig
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedCommandNestingConfig Super;

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

//
USTRUCT(BlueprintType)
struct SIMPLEAUTOMATEDTOOLCOMMON_API FAutomatedOSSConfig : public FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedConfigBase Super;

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

//
USTRUCT(BlueprintType)
struct SIMPLEAUTOMATEDTOOLCOMMON_API FAutomatedHTTPConfig : public FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedConfigBase Super;

	FAutomatedHTTPConfig()
	{
		URL = TEXT("http://127.0.0.1");
		VerbType = ESimpleHTTPVerbType::SIMPLE_POST;
		bSync = true;
		bBinaries = false;
		ContentBody = TEXT("ContentBody may include a piece of normal text or binary data, depending on its relation to bBinaries.");
		Timeout = 200;
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

//
USTRUCT(BlueprintType)
struct SIMPLEAUTOMATEDTOOLCOMMON_API FAutomatedCompressConfig : public FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedConfigBase Super;

	FAutomatedCompressConfig()
	{
		bCompress = true;
		CompressMethod = ECompressType::COMPRESS_Zip;
		bCompressEachFileUnderPath = true;
		PathOfSourceToTarget.Emplace(TEXT("source_file1"), TEXT("target1.zip"));
		PathOfSourceToTarget.Emplace(TEXT("source_file2"), TEXT("target2.rz"));
		PathOfSourceToTarget.Emplace(TEXT("source_file3"), TEXT("a key-value represent a compression operation."));
	}
	UPROPERTY()
	bool bCompress;//是否是压缩

	UPROPERTY()
	ECompressType CompressMethod;

	UPROPERTY()
	bool bCompressEachFileUnderPath;//是否对路径下的每个文件进行压缩，需要文件夹路径

	UPROPERTY()
	FString Password;

	UPROPERTY()
	TMap<FString, FString> PathOfSourceToTarget;//每一个键值对对应一次压缩或解压缩

};

//
USTRUCT(BlueprintType)
struct SIMPLEAUTOMATEDTOOLCOMMON_API FAutomatedMysqlConfig : public FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedConfigBase Super;

	FAutomatedMysqlConfig()
	{
		Method = EMysqlMethodType::MYSQLMETHOD_None;
		SavePath = TEXT("If has the result of GET, please provide a save path.");
		Port = 3306;
	}
	UPROPERTY()
	FString User;

	UPROPERTY()
	FString Host;

	UPROPERTY()
	int32 Port;

	UPROPERTY()
	FString Password;

	UPROPERTY()
	FString DataBase;

	UPROPERTY()
	EMysqlMethodType Method;

	UPROPERTY()
	FString Sql;//自定义语句

	UPROPERTY()
	FString SavePath;
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//不与Elements产生关联，不使用Json，从命令行参数传入解析
USTRUCT(BlueprintType)
struct SIMPLEAUTOMATEDTOOLCOMMON_API FAutomatedHTTPServerConfig : public FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	FAutomatedHTTPServerConfig()
	{
		IP = TEXT("127.0.0.1");
		Port = 15922;
		bHttps = false;
		Certificate = TEXT("If bHttps is true, Certificate file must be provided.");
		Key = TEXT("If bHttps is true, Key file must be provided.");
		Timeout = 120.f;
	}

	UPROPERTY()
	FString IP;

	UPROPERTY()
	int32 Port;

	UPROPERTY()
	bool bHttps;//http or https

	UPROPERTY()
	FString Certificate;//证书

	UPROPERTY()
	FString Key;

	UPROPERTY()
	float Timeout;
};