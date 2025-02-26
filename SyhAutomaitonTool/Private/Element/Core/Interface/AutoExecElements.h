#pragma once

#include "CoreMinimal.h"
#include "Templates/SharedPointer.h"
#include "Json/AutomationJson.h"


//所有自动化元素的基类
class FAutoExecElements : public TSharedFromThis<FAutoExecElements>
{

public:
	FAutoExecElements(){}

	//抽象基类的析构应该为虚函数，但是必须提供定义
	virtual ~FAutoExecElements(){};

	virtual bool Init() = 0;

	//通过Json构建参数
	virtual bool BuildParameter(const class FString& InJsonStr) = 0;

	//通过命令行参数传入
	virtual bool BuildParameter() = 0;

	virtual bool Execute() = 0;

	virtual bool Exit() = 0;

	virtual uint32 GetType() const = 0;

public:
	void HandleTimePath(class FString& InPath);

};