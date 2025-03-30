#include "Element/Mysql/AutomatedMysql.h"
#include "SimpleMySQLibrary.h"
#include "Json/SimpleMySQLJson.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

FAutomatedCode_Mysql::FAutomatedCode_Mysql()
{
	MysqlObjectRead = nullptr;
	MysqlObjectWrite = nullptr;
}

FAutomatedCode_Mysql::~FAutomatedCode_Mysql()
{
}

void FAutomatedCode_Mysql::Init()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	TArray<ESimpleClientFlags> ClientFlag;
	MysqlObjectRead = USimpleMySQLLibrary::CreateMysqlObject(
		nullptr,
		SelfConfig->User,
		SelfConfig->Host,
		SelfConfig->Password,
		SelfConfig->DataBase,
		SelfConfig->Port,
		ClientFlag
	);
	MysqlObjectWrite = USimpleMySQLLibrary::CreateMysqlObject(
		nullptr,
		SelfConfig->User,
		SelfConfig->Host,
		SelfConfig->Password,
		SelfConfig->DataBase,
		SelfConfig->Port,
		ClientFlag
	);

	if(MysqlObjectRead && MysqlObjectWrite)
	{
		return;
	}
	else
	{
		SyhLogError(TEXT("MysqlObject is failure to create."));
	}
}

bool FAutomatedCode_Mysql::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig(InJsonStr, *GetSelfConfig<OwnConfig>());
}

bool FAutomatedCode_Mysql::BuildParameter()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	bool Result = true;
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(Tool<OwnConfig>::UserKey, SelfConfig->User);
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(Tool<OwnConfig>::HostKey, SelfConfig->Host);
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(Tool<OwnConfig>::Port_IntKey, SelfConfig->Port);
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(Tool<OwnConfig>::DataBaseKey, SelfConfig->DataBase);
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(Tool<OwnConfig>::SqlKey, SelfConfig->Sql);
	SimpleAutomationToolCommon::GetValueFromCommandLine(Tool<OwnConfig>::PasswordKey, SelfConfig->Password);
	SimpleAutomationToolCommon::GetValueFromCommandLine(Tool<OwnConfig>::MethodKey, SelfConfig->Method);

	SimpleAutomationToolCommon::GetValueFromCommandLine(Tool<OwnConfig>::SavePathKey, SelfConfig->SavePath);
	
	if (Result)
	{
		if (!SelfConfig->SavePath.IsEmpty())
		{
			FPaths::NormalizeDirectoryName(SelfConfig->SavePath);
			FPaths::RemoveDuplicateSlashes(SelfConfig->SavePath);
			SimpleAutomationToolCommon::RecognizePathSyntax(SelfConfig->SavePath);
		}
		return true;
	}

	SyhLogError(TEXT("BuildParameter is failure to execute. Locate in %s"), GetCommandName<Self>());
	return false;
}

bool FAutomatedCode_Mysql::Execute()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	bool bExecResult = true;
	switch (SelfConfig->Method)
	{
	case EMysqlMethodType::MYSQLMETHOD_Get:
	{
		TArray<FSimpleMysqlResult> Result;
		bExecResult = Get(SelfConfig->Sql, Result);
		if(bExecResult)
		{
			if (!SelfConfig->SavePath.IsEmpty())
			{
				FString ResultString;
				if (SimpleMySQLJson::ArrayMysqlArrayResultToString(Result, ResultString))
				{
					FFileHelper::SaveStringToFile(ResultString,*SelfConfig->SavePath);
					SyhLogDisplay(TEXT("Has been to writen in %s"), *SelfConfig->SavePath);
				}
			}
		}
		break;
	}
	case EMysqlMethodType::MYSQLMETHOD_Post:
	{
		bExecResult = Post(SelfConfig->Sql);
		break;
	}
	case EMysqlMethodType::MYSQLMETHOD_None:
	default:
		break;
	}

	//执行脚本
	if (bExecResult)
	{

	}

	//
	return bExecResult;
}

bool FAutomatedCode_Mysql::Post(const FString InSql)
{
	if (!InSql.IsEmpty())
	{
		if (MysqlObjectWrite)
		{
			FString ErrorMsg;
			USimpleMySQLLibrary::QueryLink(MysqlObjectWrite, InSql, ErrorMsg);
			if (ErrorMsg.IsEmpty())
			{
				return true;
			}
			else
			{
				SyhLogError(TEXT("POST msg [%s] %s [line:%s]"), *ErrorMsg, __FILE__, __LINE__);
			}
		}
	}

	return false;
}

bool FAutomatedCode_Mysql::Get(const FString InSql, TArray<FSimpleMysqlResult>& Result)
{
	if (!InSql.IsEmpty())
	{
		if (MysqlObjectRead)
		{
			FSimpleMysqlDebugResult DebugResult;
			DebugResult.bPrintToLog = true;
			FString ErrorMsg;
			USimpleMySQLLibrary::QueryLinkResult(MysqlObjectRead, InSql, Result, ErrorMsg, EMysqlQuerySaveType::STORE_RESULT, DebugResult);
			if (ErrorMsg.IsEmpty())
			{
				return true;
			}
			else
			{
				SyhLogError(TEXT("GET msg [%s] %s [line:%s]"), *ErrorMsg, __FILE__, __LINE__);
			}
		}
	}
	return false;
}



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT