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
	//using Super = FAutoExecElements;
	using Self = FAutoExecElements;
	using OwnConfig = FAutomatedConfigBase;

protected:
	template <class AutomatedConfigType>
	void CreateConfig()
	{
		static_assert(std::is_base_of<FAutomatedConfigBase, AutomatedConfigType>::value, "This type is not derived of FAutomatedConfigBase.");
		Z_C_o_n_f_i_g = MakeShareable<AutomatedConfigType>(new AutomatedConfigType);
	}

	template <class AutomatedConfigType>
	TSharedPtr<AutomatedConfigType> GetSelfConfig()
	{
		return StaticCastSharedPtr<AutomatedConfigType>(Z_C_o_n_f_i_g);
	}



public:
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
	bool ParseArrayStrings(const FString& InKey, TArray<FString>& InArray);

	bool DeletePath(const struct FFileStatData& InFileStatData, const FString& InPath);
protected:
	//String(xxxx xxxx)-> "xxxx xxxx"
	//对于.bat文件，使用"xxx/xxx xxx/xx"就可以读取
	//对于.sh文件
	void AdaptCommandArgsStringWithSpace(FString& InKey);
	void GetBatPathString(FString& InPath);
	FString GetMatchKey(const FString& InKey){return FString(TEXT("-") + InKey + TEXT("=")); }

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

	//Config，如此命名为的是在代码提示中隐藏
	TSharedPtr<FAutomatedConfigBase> Z_C_o_n_f_i_g;
};