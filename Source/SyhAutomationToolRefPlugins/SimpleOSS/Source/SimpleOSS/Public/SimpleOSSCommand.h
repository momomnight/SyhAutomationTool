#pragma once

//该类为自动化考虑

#include "CoreMinimal.h"
#include "Json.h"
#include "SimpleOSSCommand.generated.h"

//命令
UENUM(BlueprintType)
enum class ESimpleOSSCommand :uint8
{
	OSS_INIT,
	OSS_BUCKET_EXIST,
	OSS_OBJECT_EXIST,
	OSS_COPY_OBJECT,
	OSS_DELETE_OBJECT,
	OSS_GET_OBJECT,
	OSS_RESUMABLE_DOWNLOAD_OBJECT,
	OSS_PUT_OBJECT,
	OSS_RESUMABLE_UPLOAD_OBJECT,
	OSS_UPLOAD_PART,
};

namespace SimpleOSSCommand
{
	struct SIMPLEOSS_API FOSSCommand
	{
		//指定命令类型
		ESimpleOSSCommand CommandType;

		//对应参数
		TMap<FString, FString> Param;
	};

	//通过命令执行OSS操作
	bool SIMPLEOSS_API Exec(const SimpleOSSCommand::FOSSCommand &InCommand);
	bool SIMPLEOSS_API Exec(const TArray<FOSSCommand> &InCommands);
	void SIMPLEOSS_API Exec(const TArray<FOSSCommand>& InCommands,TMultiMap<ESimpleOSSCommand,bool> &OutResult);
	void SIMPLEOSS_API PrintOSSCommand(const TArray<FOSSCommand>& InCommands);

	//OSS协议
	FString SIMPLEOSS_API ToOSSCommandString(ESimpleOSSCommand InOSSCommand);
	ESimpleOSSCommand SIMPLEOSS_API GetOSSCommandByName(const FString& InJsonName);

	//Json解析
	bool SIMPLEOSS_API JsonStringToOSSCommand(const FString& InString, TArray<SimpleOSSCommand::FOSSCommand>& OutConfig);
	bool SIMPLEOSS_API JsonObjectToOSSCommand(TSharedPtr<FJsonObject> InJsonObject, SimpleOSSCommand::FOSSCommand& OutConfig);
	bool SIMPLEOSS_API JsonObjectToOSSCommand(TSharedPtr<FJsonObject> InJsonObject, SimpleOSSCommand::FOSSCommand& OutConfig);

	//用于反序列化
	TSharedPtr<FJsonObject> SIMPLEOSS_API OSSCommandConfigToJsonObject(const TArray<SimpleOSSCommand::FOSSCommand>& InConfig);
	bool SIMPLEOSS_API OSSCommandConfigToJsonObject(const TArray<SimpleOSSCommand::FOSSCommand>& InConfig,TArray<TSharedPtr<FJsonValue>> &OutArray);

	//构建配置
	bool SIMPLEOSS_API BuildConfig(TArray<SimpleOSSCommand::FOSSCommand>& OutConfig);
}