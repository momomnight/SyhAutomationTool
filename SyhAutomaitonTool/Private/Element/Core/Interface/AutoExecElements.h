#pragma once

#include "CoreMinimal.h"
#include "SimpleAutomatedToolTypeRelated.h"
#include "DllExports/AutomationJson.h"
#include "DllExports/AutomationCommandLine.h"
#include "DllExports/AutomatedExecutionPath.h"
#include "DllExports/AutomationToolCommonMethod.h"
#include "SyhAutomationToolLog.h"


// 所有自动化元素的基类
// 每一个命令元素对应一个Json对象，所有命令组成Json数组
// Json对象内部相关Key和Value可自定义

class FAutoExecElements : public TSharedFromThis<FAutoExecElements>
{
public:
	using Base = FAutoExecElements;
	using Self = FAutoExecElements;
	using OwnConfig = FAutomatedConfigBase;
	
public:

	template <class AutomatedConfigType>
	TSharedPtr<AutomatedConfigType> GetSelfConfig()
	{
		return StaticCastSharedPtr<AutomatedConfigType>(Z_C_o_n_f_i_g);
	}

	template <class AutomatedCommandType>
	static constexpr const TCHAR* GetCommandName()
	{
		static_assert(std::is_base_of<FAutoExecElements, AutomatedCommandType>::value, "This type is not derived of FAutoExecElements.");
		return EnumTool<ECommandProtocol>::ToCString<FCommandProtocol_ConfigType<AutomatedCommandType>::Value>();
	}

	template <class AutomatedCommandType>
	static void CreateAutoExecElement(TSharedPtr<FAutoExecElements> SelfPtr)
	{
		static_assert(std::is_base_of<FAutoExecElements, AutomatedCommandType>::value, "This type is not derived of FAutoExecElements.");
		if (!SelfPtr->Z_C_o_n_f_i_g.IsValid())
		{
			SelfPtr->Z_C_o_n_f_i_g = MakeShareable<typename AutomatedCommandType::OwnConfig>(new typename AutomatedCommandType::OwnConfig);
		}
	}

	//将Config存放在最底层，具体类型通过构造的模板参数传入
	//需要自己类型的Config时，临时转换
	//具体想法，减少需要写的代码
	FAutoExecElements() {}

	//抽象基类的析构应该为虚函数，但是必须提供定义
	virtual ~FAutoExecElements(){};

	//可以在此处清理Config的初始值
	virtual void Init() = 0;

	//通过Json构建参数
	virtual bool BuildParameter(const class FString& InJsonStr) = 0;

	//通过命令行参数传入
	virtual bool BuildParameter() = 0;

	virtual bool Execute() = 0;

	virtual bool Exit(){return true;}

	virtual ECommandProtocol GetType() const { return ECommandProtocol::CMD_None; };

protected:

	//Config，如此命名为的是在代码提示中隐藏
	TSharedPtr<FAutomatedConfigBase> Z_C_o_n_f_i_g;

};