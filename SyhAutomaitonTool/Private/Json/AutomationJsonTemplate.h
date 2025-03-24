#pragma once

#include "CoreMinimal.h"
#include "SyhAutomationToolType.h"
#include "Json.h"
#include <type_traits>

namespace AutomationJson
{
	//用于标识传递
	struct Transfer
	{
		constexpr Transfer() {}
	};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// JsonObjectToAutomatedConfig用于从 自定义的Json文件 中读出配置
	
	/// <summary>
	/// JsonObjectToAutomatedConfig函数模板用于配置非通用项, 仅配置自己, 无向上传递
	/// </summary>
	/// <param name="InJsonObject"> 传入的Json对象 </param>
	/// <param name="InConfig"> 具体配置类型 </param>
	template<class AutomatedConfigType>
	void JsonObjectToAutomatedConfig(TSharedPtr<FJsonObject> InJsonObject, AutomatedConfigType& OutConfig);

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedConfigBase>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedConfigBase& OutConfig)
	{
	}

	/// <summary>
	/// JsonObjectToAutomatedConfig函数模板用于配置非通用项, 向上传递
	/// </summary>
	/// <param name="InJsonObject"> 传入的Json对象 </param>
	/// <param name="InConfig"> 具体配置类型 </param>
	/// <param name="Trans"> 标志，用于函数匹配 </param>
	template<class AutomatedConfigType>
	bool JsonObjectToAutomatedConfig(TSharedPtr<FJsonObject> InJsonObject, AutomatedConfigType& OutConfig, Transfer Trans)
	{
		if(InJsonObject.IsValid())
		{
			//配置父类
			JsonObjectToAutomatedConfig<typename AutomatedConfigType::Super>(InJsonObject, static_cast<typename AutomatedConfigType::Super&>(OutConfig), Trans);
			//配置自己
			JsonObjectToAutomatedConfig<AutomatedConfigType>(InJsonObject, OutConfig);
			return true;
		}
		return false;
	}

	template<>
	bool JsonObjectToAutomatedConfig<FAutomatedConfigBase>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedConfigBase& OutConfig, Transfer Trans)
	{
		if (InJsonObject.IsValid())
		{
			JsonObjectToAutomatedConfig<FAutomatedConfigBase>(InJsonObject, OutConfig);
			return true;
		}
		return false;
	}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	template<class AutomatedConfigType>
	
	// AutomatedConfigToJsonObject用于把默认的配置写入Json文件，Config类的默认配置在构造时初始化
	
	/// <summary>
	/// ConfigureOthers函数模板用于配置非通用项, 仅配置自己, 无向上传递
	/// </summary>
	/// <param name="InJsonObject"> 传入的Json对象 </param>
	/// <param name="InConfig"> 具体配置类型 </param>
	template<class AutomatedConfigType>
	void AutomatedConfigToJsonObject(TSharedPtr<FJsonObject> OutJsonObject, const AutomatedConfigType& InConfig);

	template<>
	void AutomatedConfigToJsonObject<FAutomatedConfigBase>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedConfigBase& InConfig)
	{
	}

	/// <summary>
	/// ConfigureOthers函数模板用于配置非通用项, 向上传递
	/// </summary>
	/// <param name="InJsonObject"> 传入的Json对象 </param>
	/// <param name="InConfig"> 具体配置类型 </param>
	/// <param name="Trans"> 标志，用于函数匹配 </param>
	template<class AutomatedConfigType>
	void AutomatedConfigToJsonObject(TSharedPtr<FJsonObject> OutJsonObject, const AutomatedConfigType& InConfig, Transfer Trans)
	{
		//配置父类
		AutomatedConfigToJsonObject<typename AutomatedConfigType::Super>(OutJsonObject, static_cast<const AutomatedConfigType::Super&>(InConfig), Trans);
		//配置自己
		AutomatedConfigToJsonObject<AutomatedConfigType>(OutJsonObject, InConfig);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedConfigBase>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedConfigBase& InConfig, Transfer Trans)
	{
		AutomatedConfigToJsonObject<FAutomatedConfigBase>(OutJsonObject, InConfig);
	}


}