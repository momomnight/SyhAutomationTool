#include "Framework/AutomationMainFramework.h"
#include "SyhAutomationToolLog.h"
#include "Global/SimpleNetGlobalInfo.h"
#include "SimpleNetManage.h"
#include "SNCObject/ListenServerObject.h"
#include "Element/AutoExecElementsManage.h"
#include "Core/SimpleAutomationTool.h"
#include "Server/AutomatedHttp_HttpServer.h"

//UE_BUILD_DEBUG、UE_BUILD_DEVELOPMENT、UE_BUILD_TEST、UE_BUILD_SHIPPING

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


int64 TimeSlotDateTime = 0;
FSimpleNetManage* ListenServer = nullptr;
bool bEnabledServer = false;	


namespace AutomationMainFramework
{
	bool ValidateTimePerDay(int32 H, int32 M, int32 S)
	{
		return (H < 24 && H >= 0) && (M < 60 && M >= 0) && (S < 60 && S >= 0);
	}

	bool BuildTimePerDay()
	{
		if (FParse::Param(FCommandLine::Get(), TEXT("-TimeLoop")))
		{
			FString TimeSlotPerDay;
			if (FParse::Value(FCommandLine::Get(), TEXT("-TimeSlotPerDay="), TimeSlotPerDay))
			{
				//22.33.44 22-33-44 22/33/44 22:33:44
				FString TimeSeparator = TEXT(":");
				if (TimeSlotPerDay.Contains(TEXT(".")))
				{
					TimeSeparator = TEXT(".");
				}
				else if (TimeSlotPerDay.Contains(TEXT("/")))
				{
					TimeSeparator = TEXT("/");
				}
				else if (TimeSlotPerDay.Contains(TEXT("-")))
				{
					TimeSeparator = TEXT("-");
				}

				//获取给定一天中时间的Ticks
				{
					TArray<FString> Tokens;
					TimeSlotPerDay.ParseIntoArray(Tokens, *TimeSeparator);
					if (Tokens.Num() == 3)
					{
						int32 H = FCString::Atoi(*Tokens[0]);
						int32 M = FCString::Atoi(*Tokens[1]);
						int32 S = FCString::Atoi(*Tokens[2]);
						
						if (!ValidateTimePerDay(H, M, S))
						{
							UE_LOG(SyhAutomaitonToolLog, Error, TEXT("-TimeSlotPerDay = Wrong time range, please use the time within the correct range. "));
							return false;
						}

						TimeSlotDateTime = 
							ETimespan::TicksPerHour * H +
							ETimespan::TicksPerMinute * M +
							ETimespan::TicksPerSecond * S;
					}
					else
					{
						UE_LOG(SyhAutomaitonToolLog, Error, TEXT("-TimeSlotPerDay = Wrong time format, please use the correct time format such as 22.33.44 22-33-44 22/33/44 22:33:44."));
						return false;
					}
				}
			

				//获取当前年月日的Ticks
				if (TimeSlotDateTime != 0)
				{
					FString CurrentYMDString = FDateTime::Now().ToString(TEXT("%Y.%m.%d.%H.%M.%S"));
					FDateTime CurrentYMDDateTime;
					{
						TArray<FString> Tokens;
						CurrentYMDString.ParseIntoArray(Tokens, TEXT("."));
						if (Tokens.Num() > 3)
						{
							CurrentYMDDateTime = FDateTime(
								FCString::Atoi(*Tokens[0]),
								FCString::Atoi(*Tokens[1]),
								FCString::Atoi(*Tokens[2]));
						}
					}

					//合并Ticks
					TimeSlotDateTime += CurrentYMDDateTime.GetTicks();
					FDateTime MyTimeSlotDateTime = FDateTime(TimeSlotDateTime);
					UE_LOG(SyhAutomaitonToolLog, Display, TEXT("-TimeSlotPerDay = Set a time [%s]"), *MyTimeSlotDateTime.ToString());
					return true;
				}
				else
				{
					UE_LOG(SyhAutomaitonToolLog, Error, TEXT("-TimeSlotPerDay = Parse time error [%s]"), *TimeSlotPerDay);
				}
			}
		}
		return false;
	}

	void RunServer(double LastTime)
	{
		if (FAutomatedHttp_HttpServer::Get()->IsValid() || ListenServer)
		{
			//http服务器有自己的检查

			double Now = FPlatformTime::Seconds();
			float DeltaSeconds = Now - LastTime;

			//SNC, 每帧检查链接
			if (ListenServer)
			{
				ListenServer->Tick(DeltaSeconds);
			}

			//http server
			if (FAutomatedHttp_HttpServer::Get()->IsValid())
			{
				FAutomatedHttp_HttpServer::Get()->Tick(DeltaSeconds);
			}

			FPlatformProcess::Sleep(0.03f);
		}
		else
		{
			FPlatformProcess::Sleep(1.f);
		}
	}

	void RunTask()
	{
		bool Result = false;

		//初始化,以读取最新的任务
		Result = FAutoExecElementsManage::Get()->Init();
		if (!Result)
		{
			UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Failed to Init"));
		}

		//执行自动化任务
		Result = FAutoExecElementsManage::Get()->HandleTask();
		if (!Result)
		{
			UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Handle tasks successfully"));
		}

		UE_LOG(SyhAutomaitonToolLog, Display, TEXT("The next time handling task is [%s]"), *FDateTime(TimeSlotDateTime).ToString());
	}

	int32 RunLoop()
	{
		double LastTime = FPlatformTime::Seconds();

		while (!IsEngineExitRequested())
		{

			FDateTime CurrentDateTime = FDateTime::Now();
			if (TimeSlotDateTime != 0)
			{
				if (CurrentDateTime >= TimeSlotDateTime)
				{
					//向前递进一天
					TimeSlotDateTime += ETimespan::TicksPerDay;

					RunTask();
				}
			}
			RunServer(LastTime);		
		}
		return 0;
	}

	int32 Run()
	{
		double LastTime = FPlatformTime::Seconds();

		if (bEnabledServer)
		{
			if (FAutomatedHttp_HttpServer::Get()->IsValid() || ListenServer)
			{
				while (!IsEngineExitRequested())
				{
					RunServer(LastTime);
				}
			}
			else
			{
				SyhLogError(TEXT("Server did not start successfully."));
			}
		}
		else
		{
			RunTask();
		}
		return 0;
	}

	int32 RunAutomatedBuild()
	{
		//注：FParse::Param 命令参数传入时，分析的字符串的位置不能是第一个位置
		//	  且输入的参数前要有空格，且必须是"-xxxx" 或 "/xxxx"形式
		//	 FParse::Value没有这个要求
		if (FParse::Param(FCommandLine::Get(), TEXT("Helper")))
		{
			SimpleAutomationTool::GenerateAllCommandsFile();
			UE_LOG(SyhAutomaitonToolLog, Display, TEXT("-TimeLoop //Check start"));
			UE_LOG(SyhAutomaitonToolLog, Display, TEXT("-TimeSlotPerDay=%%H.%%M.%%S //Set a time"));
			UE_LOG(SyhAutomaitonToolLog, Display, TEXT("-CommandScript=new script command name"));
			UE_LOG(SyhAutomaitonToolLog, Display, TEXT("-SNCListen open SNC"));
			UE_LOG(SyhAutomaitonToolLog, Display, TEXT("-HTTPServer open HTTP Server"));
			UE_LOG(SyhAutomaitonToolLog, Display, TEXT("-WebSocketServer open Web Socket Server"));
			return 0;
		}
		else
		{
			FString CommandString;
			if (FParse::Value(FCommandLine::Get(), TEXT("-Command="), CommandString))
			{
				//从外部传入单条命令
				UE_LOG(SyhAutomaitonToolLog, Display, TEXT("-Command=%s"), *CommandString);

				//
				SimpleAutomationTool::BuildConfig();

				//执行
				SimpleAutomationTool::HandleTask(CommandString);
				return 0;
			}
			else
			{
				//从Json执行多条命令
				//1.初始化SNC全局配置
				FSimpleNetGlobalInfo::Get()->Init();
				if (FParse::Param(FCommandLine::Get(), TEXT("SNCListen")))
				{
					bEnabledServer = true;

					//2.创建服务器实例
					ListenServer = FSimpleNetManage::CreateManage(ESimpleNetLinkState::LINKSTATE_LISTEN,
						ESimpleSocketType::SIMPLESOCKETTYPE_UDP);//应该修改，以增加更多选择

					//3.注册反射类
					FSimpleChannel::SimpleControllerDelegate.BindLambda(
						[]()->UClass*
						{
							return UListenServerObject::StaticClass();
						}
					);
					//4.初始化监听服务器
					if (!ListenServer->Init())
					{
						delete ListenServer;
						UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Listen server is failure to init."));

						return INDEX_NONE;
					}

				}

				if (FParse::Param(FCommandLine::Get(), TEXT("HttpServer")))
				{
					bEnabledServer = true;	
					FAutomatedHttp_HttpServer::Get()->Init();
				}

				if (FParse::Param(FCommandLine::Get(), TEXT("WebSocketServer")))
				{
					bEnabledServer = true;
				}

				if (BuildTimePerDay())
				{
					return RunLoop();
				}
				else
				{
					return Run();
				}
			}
		}
	}

}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
