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
	using Super = FAutoExecElements;
	using Self = FAutoExecElements;
	using OwnConfig = FAutomatedConfigBase;

public:
	//将Config存放在最底层，具体类型通过构造的模板参数传入
	//需要自己类型的Config时，临时转换
	//具体想法，减少需要写的代码
	FAutoExecElements(){}

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

	//抽象基类的析构应该为虚函数，但是必须提供定义
	virtual ~FAutoExecElements(){};

	virtual void Init() = 0;

	//通过Json构建参数
	virtual bool BuildParameter(const class FString& InJsonStr) = 0;

	//通过命令行参数传入
	virtual bool BuildParameter() = 0;

	virtual bool Execute() = 0;

	virtual bool Exit() = 0;

	virtual uint32 GetType() const = 0;

public:
	void HandleTimePath(class FString& InPath);

protected:
	//Config，如此命名为的是在代码提示中隐藏
	TSharedPtr<FAutomatedConfigBase> Z_C_o_n_f_i_g;
};