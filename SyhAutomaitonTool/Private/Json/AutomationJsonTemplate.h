#pragma once

#include "CoreMinimal.h"

#include "SyhAutomationToolType.h"
#include "Json.h"

namespace AutomationJson
{
	//用于标识传递
	struct Transfer
	{
		constexpr Transfer() {}
	};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>
	/// JsonObjectToAutomatedConfig函数模板用于配置非通用项, 仅配置自己, 无向上传递
	/// </summary>
	/// <param name="InJsonObject"> 传入的Json对象 </param>
	/// <param name="InConfig"> 具体配置类型 </param>
	template<class AutomatedConfigType>
	void JsonObjectToAutomatedConfig(TSharedPtr<FJsonObject> InJsonObject, AutomatedConfigType& InConfig);

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedConfigBase>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedConfigBase& InConfig)
	{
	}

	/// <summary>
	/// JsonObjectToAutomatedConfig函数模板用于配置非通用项, 向上传递
	/// </summary>
	/// <param name="InJsonObject"> 传入的Json对象 </param>
	/// <param name="InConfig"> 具体配置类型 </param>
	/// <param name="Trans"> 标志，用于函数匹配 </param>
	template<class AutomatedConfigType>
	bool JsonObjectToAutomatedConfig(TSharedPtr<FJsonObject> InJsonObject, AutomatedConfigType& InConfig, Transfer Trans)
	{
		if(InJsonObject.IsValid())
		{
			//配置父类
			JsonObjectToAutomatedConfig<typename AutomatedConfigType::Super>(InJsonObject, static_cast<typename AutomatedConfigType::Super&>(InConfig), Trans);
			//配置自己
			JsonObjectToAutomatedConfig<AutomatedConfigType>(InJsonObject, InConfig);
			return true;
		}
		return false;
	}

	template<>
	bool JsonObjectToAutomatedConfig<FAutomatedConfigBase>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedConfigBase& InConfig, Transfer Trans)
	{
		if (InJsonObject.IsValid())
		{
			JsonObjectToAutomatedConfig<FAutomatedConfigBase>(InJsonObject, InConfig);
			return true;
		}
		return false;
	}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	template<class AutomatedConfigType>
	/// <summary>
	/// ConfigureOthers函数模板用于配置非通用项, 仅配置自己, 无向上传递
	/// </summary>
	/// <param name="InJsonObject"> 传入的Json对象 </param>
	/// <param name="InConfig"> 具体配置类型 </param>
	template<class AutomatedConfigType>
	void AutomatedConfigToJsonObject(TSharedPtr<FJsonObject> InJsonObject, const AutomatedConfigType& InConfig);

	template<>
	void AutomatedConfigToJsonObject<FAutomatedConfigBase>(TSharedPtr<FJsonObject> InJsonObject, const FAutomatedConfigBase& InConfig)
	{
	}

	/// <summary>
	/// ConfigureOthers函数模板用于配置非通用项, 向上传递
	/// </summary>
	/// <param name="InJsonObject"> 传入的Json对象 </param>
	/// <param name="InConfig"> 具体配置类型 </param>
	/// <param name="Trans"> 标志，用于函数匹配 </param>
	template<class AutomatedConfigType>
	void AutomatedConfigToJsonObject(TSharedPtr<FJsonObject> InJsonObject, const AutomatedConfigType& InConfig, Transfer Trans)
	{
		//配置父类
		AutomatedConfigToJsonObject<typename AutomatedConfigType::Super>(InJsonObject, static_cast<const AutomatedConfigType::Super&>(InConfig), Trans);
		//配置自己
		AutomatedConfigToJsonObject<AutomatedConfigType>(InJsonObject, InConfig);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedConfigBase>(TSharedPtr<FJsonObject> InJsonObject, const FAutomatedConfigBase& InConfig, Transfer Trans)
	{
		AutomatedConfigToJsonObject<FAutomatedConfigBase>(InJsonObject, InConfig);
	}
}