#pragma once
#include "Templates/SharedPointer.h"
#include "Delegates/DelegateCombinations.h"
#include "TableRow/Core/PropertyDataContainer.h"
#include "TableRow/Core/PropertyInfo.h"

//用于其他设置数据的回调
DECLARE_DELEGATE_RetVal_OneParam(FName, FOnGetPropertyCategory, FProperty*)

//类职责：
// 1. 指出存储属性数据的容器及类型
// 2. 由于无法获取元数据，该类包含获取类别回调，由容器提供者给出
// 3. 包含一下对于属性/类型的通用设置
struct FPropertyDataInitParam
{
	struct FGeneralSettings
	{
		bool bRegisterContainerClass = false;
	};

	FContainerDescription Container;
	FOnGetPropertyCategory OnGetPropertyCategory;//拿不到元数据
	//SFOnPreCreateSingleItem;//
	FGeneralSettings GeneralSettings;
	

	FPropertyDataInitParam() : Container() {}

	//适用于UClass的构造，只需要UObject*指针即可
	FPropertyDataInitParam(UObject* InClassData) : Container(InClassData)
	{
	}

	//适用于UScriptStruct的构造，需要额外传入类型
	FPropertyDataInitParam(uint8* InStructData, UScriptStruct* InScriptStruct) : Container(InStructData, InScriptStruct)
	{
	}

	void SetObject(UObject* InClassData)
	{
		Container = FContainerDescription(InClassData);
	}

	void SetStruct(uint8* InStructData, UScriptStruct* InScriptStruct)
	{
		Container = FContainerDescription(InStructData, InScriptStruct);
	}

	bool IsUClass() const
	{
		return Container.IsClassData();
	}
	bool IsUScriptStruct() const
	{
		return Container.IsStructData();
	}

	bool IsValid() const
	{
		return Container.IsValid();
	}

	UScriptStruct* GetUScriptStruct() const
	{
		return Container.GetUScriptStruct();
	}

	UClass* GetUClass() const
	{
		return Container.GetUClass();
	}

	UObject* GetObjectContainer() const
	{
		return Container.ToClassData();
	}

	uint8* GetStructContainer() const
	{
		return Container.ToStructData();
	}

	FGeneralSettings GetGeneralSettings() const
	{
		return GeneralSettings;
	}

	FGeneralSettings& GetGeneralSettings()
	{
		return GeneralSettings;
	}
};

