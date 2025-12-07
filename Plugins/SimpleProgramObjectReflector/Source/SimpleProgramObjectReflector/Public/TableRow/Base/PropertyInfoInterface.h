#pragma once
#include "Templates/SharedPointer.h"
#include "UObject/UnrealType.h"
#include "TableRow/Delegate.h"
#include "TableRow/Template/PropertyTemplate.h"
#include "TableRow/PropertyContainerDescription.h"
#include "SimpleProgramObjectReflectorLog.h"

class FPropertyInfo;
class FPropertyInfoRoot;
class IContainerDescription;

namespace FPropertyInfoType
{
	enum Type
	{
		IsInvalid = 0,
		IsValid = 1,
		HasChild = 1 << 1,		//owns child
		HasProperty = 1 << 2, // owns Property
	};
}

struct EPropertyInfoType
{
	static const EPropertyInfoType IsInvalid;
	static const EPropertyInfoType IsValid;
	static const EPropertyInfoType HasChild;
	static const EPropertyInfoType HasProperty;

	EPropertyInfoType() : Value(0){}
	EPropertyInfoType(const EPropertyInfoType& InType) : Value(InType.Value) {}
	EPropertyInfoType(EPropertyInfoType&& InType) : Value(InType.Value){}
	EPropertyInfoType(uint64 InValue) : Value(InValue) {}

	EPropertyInfoType operator&(const EPropertyInfoType& Rhs) const
	{
		return EPropertyInfoType{ Value & Rhs.Value };
	}

	EPropertyInfoType operator|(const EPropertyInfoType& Rhs) const
	{
		return EPropertyInfoType{ Value | Rhs.Value };
	}

	EPropertyInfoType operator~() const
	{
		return EPropertyInfoType{ ~Value };
	}

	operator bool()
	{
		return !!Value;
	}

	uint64 Value;
};

//多继承会导致对象内存增加，尽量少继承
class IPropertyInfoBase : public TSharedFromThis<IPropertyInfoBase>
{
public:
	
	virtual void Initialize() {}

	virtual bool IsValid() const { return false; }

	virtual bool IsLeaf() const = 0;

	virtual TArray<TSharedPtr<IPropertyInfoBase>> GetChildren() const { return TArray<TSharedPtr<IPropertyInfoBase>>(); }
	virtual void ClearChildren() {}
	virtual void AddChild(TSharedPtr<IPropertyInfoBase>){}
	void AddChildren(const TArray<TSharedPtr<IPropertyInfoBase>>& InChildren);

	//固定名: Root -- "Root"
	//使用属性名: Container, SingleItem
	//自定义设置: Category
	//固定前缀 + 自定义设置: Container子PropertyInfo
	virtual FName GetFName() const { return FName("PropertyInfoInterface"); }
	virtual FText GetDisplayName() const { return FText::FromName(GetFName()); }

	//All, Root为nullptr
	// 除了PropertyInfoRoot，所有PropertyInfo都包含Parent
	TSharedPtr<IPropertyInfoBase> GetParent() const;
	void SetParent(TSharedPtr<IPropertyInfoBase> InParent);

	//All，Root为自己
	// 除了PropertyInfoRoot，所有PropertyInfo都包含Root
	TSharedPtr<FPropertyInfoRoot> GetRoot() const;
	void SetRoot(TSharedPtr<FPropertyInfoRoot> InRoot);

	FPropertyInfoSettings& GetSettings();

	//Container, SingleItem, Container子PropertyInfo
	virtual FProperty* GetProperty() const = 0;

	//
	virtual EPropertyInfoType GetPropertyInfoType() const { return EPropertyInfoType::IsInvalid; }

	//
	virtual TSharedPtr<IContainerDescription> GetContainerDescription() const;

protected:
	//
	virtual TSharedPtr<class SPropertyWidget> MakePropertyWidget();

private:
	TWeakPtr<IPropertyInfoBase> Parent;
	TWeakPtr<FPropertyInfoRoot> Root;

	FPropertyInfoSettings Settings;
};

class IPropertyInfoWithStoredName : public IPropertyInfoBase
{

public:
	IPropertyInfoWithStoredName(){}
	IPropertyInfoWithStoredName(const FName& InName) : Name(InName){}

	void SetName(FName InName) { Name = InName; }

	//~Begin IPropertyInfoBase
	virtual FName GetFName() const override { return Name; }
	//~End IPropertyInfoBase

private:
	FName Name;
};

class IPropertyInfoWithStoredProperty : public IPropertyInfoBase
{
public:
	using Super = IPropertyInfoBase;

	void SetProperty(FProperty* InProperty) { Property = InProperty; Initialize();}

	//~Begin IPropertyInfoBase
	virtual bool IsValid() const override { return !!Property; }
	virtual FName GetFName() const override { return GetProperty()->GetFName(); }
	virtual FText GetDisplayName() const { return GetProperty()->GetDisplayNameText(); }
	virtual FProperty* GetProperty() const override { return Property; }
	virtual EPropertyInfoType GetPropertyInfoType() const { return EPropertyInfoType::HasProperty; }
	//~End IPropertyInfoBase

private:
	FProperty* Property;
};

class ISingleItemPropertyInfo : public IPropertyInfoWithStoredProperty
{
public:
	using Super = IPropertyInfoWithStoredProperty;

	ISingleItemPropertyInfo() : Index(INDEX_NONE){}

	//~Begin IPropertyInfoBase
	virtual bool IsValid() const override;
	virtual bool IsLeaf() const override { return true; }
	virtual EPropertyInfoType GetPropertyInfoType() const override { return EPropertyInfoType::IsValid | EPropertyInfoType::HasProperty; }
	//~End IPropertyInfoBase
	
	virtual FName GetFName() const override;


	void SetIndex(int32 Index);
	int32 GetIndex() const { return Index; }

protected:
	int32 Index;
};

////名字为Index 1形式， 
//class IContainerSingleItemPropertyInfo : public IPropertyInfoWithStoredName
//{
//public:
//	IContainerSingleItemPropertyInfo() : Index(INDEX_NONE){}
//
//	//~Begin IPropertyInfoBase
//	virtual bool IsValid() const { return Index != INDEX_NONE; }
//
//	//容器的容器不支持
//	virtual bool IsLeaf() const override { return true; }
//
//
//
//	//派生类应注意Index与Property的使用
//	virtual FProperty* GetProperty() const override;
//
//	//~End IPropertyInfoBase
//
//
//};

class IContainerItemPropertyInfo : public IPropertyInfoWithStoredProperty
{
public:
	using Super = IPropertyInfoWithStoredProperty;

	//~Begin IPropertyInfoBase
	virtual bool IsLeaf() const override { return false; }
	virtual EPropertyInfoType GetPropertyInfoType() const override { return EPropertyInfoType::IsValid | EPropertyInfoType::HasChild | EPropertyInfoType::HasProperty; }
	//~End IPropertyInfoBase
};