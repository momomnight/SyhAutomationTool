#pragma once

#include "CoreMinimal.h"
#include "Templates/SharedPointer.h"
#include "Json/AutomationJson.h"
#include "Misc/AutomatedExecutionPath.h"


// 所有自动化元素的基类
// 每一个命令元素对应一个Json对象，所有命令组成Json数组
// Json对象内部相关Key和Value可自定义

class FAutoExecElements : public TSharedFromThis<FAutoExecElements>
{
public:
	using Base = FAutoExecElements;
	using Self = FAutoExecElements;
	using OwnConfig = FAutomatedConfigBase;
protected:

	template <class AutomatedConfigType>
	TSharedPtr<AutomatedConfigType> GetSelfConfig()
	{
		return StaticCastSharedPtr<AutomatedConfigType>(Z_C_o_n_f_i_g);
	}

	template <class AutomatedCommandType>
	const FString& GetCommandName()
	{
		static_assert(std::is_base_of<FAutoExecElements, AutomatedCommandType>::value, "This type is not derived of FAutoExecElements.");
		return ::GetCommandName<static_cast<uint32>(FCommandProtocol_ConfigType<typename AutomatedCommandType::OwnConfig>::Value)>();
	}

public:

	template <class AutomatedCommandType>
	static void Init(TSharedPtr<FAutoExecElements> SelfPtr)
	{
		static_assert(std::is_base_of<FAutoExecElements, AutomatedCommandType>::value, "This type is not derived of FAutoExecElements.");
		if (!SelfPtr->Z_C_o_n_f_i_g.IsValid())
		{
			SelfPtr->Z_C_o_n_f_i_g = MakeShareable<typename AutomatedCommandType::OwnConfig>(new typename AutomatedCommandType::OwnConfig);
			SelfPtr->Init();
		}
	}

	//将Config存放在最底层，具体类型通过构造的模板参数传入
	//需要自己类型的Config时，临时转换
	//具体想法，减少需要写的代码
	FAutoExecElements() {}

	//抽象基类的析构应该为虚函数，但是必须提供定义
	virtual ~FAutoExecElements(){};

	virtual void Init() = 0;

	//通过Json构建参数
	virtual bool BuildParameter(const class FString& InJsonStr) = 0;

	//通过命令行参数传入
	virtual bool BuildParameter() = 0;

	virtual bool Execute() = 0;

	virtual bool Exit(){return true;}

	virtual uint32 GetType() const { return (uint32)ECommandProtocol::CMD_None; };

public:
	void HandleTimePath(FString& InPath);

	//xxx1&&xxx2
	bool ParseStrings(const FString& InKey, TArray<FString>& InArray, bool bPath);

	//xxx1||yyy1&&xxx2||yyy2
	bool ParseStrings(const FString& InKey, TMap<FString, FString>& InArray, bool bPath);

	bool DeletePath(const struct FFileStatData& InFileStatData, const FString& InPath);
protected:
	//String(xxxx xxxx)-> "xxxx xxxx"
	//对于.bat文件，使用"xxx/xxx xxx/xx"就可以读取
	//对于.sh文件
	void AdaptCommandArgsStringWithSpace(FString& InKey);
	void GetBatPathString(FString& InPath);
	FString GetMatchKey(const FString& InKey){return FString(TEXT("-") + InKey + TEXT("=")); }
	bool IsMatchKey(const FString& InKey);

	template<class Type>
	bool GetValueFromCommandLine(const FString& InKey, Type& OutValue)
	{
		if (FString Key = GetMatchKey(InKey);
			!FParse::Value(FCommandLine::Get(), *Key, OutValue))
		{
			UE_LOG(SyhAutomaitonToolLog, Error, TEXT("%s was not found the value."), *Key);
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
			UE_LOG(SyhAutomaitonToolLog, Error, TEXT("%s was not found the value."), *Key);
			return false;
		}
		return true;
	}

	template<>
	bool GetValueFromCommandLine<EComparisionType>(const FString& InKey, EComparisionType& OutValue)
	{
		FString Result;
		if (FString Key = GetMatchKey(InKey);
			!FParse::Value(FCommandLine::Get(), *Key, Result))
		{
			UE_LOG(SyhAutomaitonToolLog, Error, TEXT("%s was not found the value."), *Key);
			return false;
		}

		OutValue = AutomationJson::StringToComparisionType(Result);

		return true;
	}

	//Config，如此命名为的是在代码提示中隐藏
	TSharedPtr<FAutomatedConfigBase> Z_C_o_n_f_i_g;

};