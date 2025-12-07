#pragma once
#include <type_traits>
#include "Delegates/DelegateCombinations.h"
#include "Framework/Views/TableViewTypeTraits.h"


struct FDelegateParamsBase
{
	template <class InVariableType>
	struct FDelegates_Value
	{
		using Type = std::remove_cvref_t<InVariableType>;
		using TypePtr = Type*;
		using TypeRef = Type&;
		using ConstTypePtr = const Type*;
		using ConstTypeRef = const Type&;

		DECLARE_DELEGATE_RetVal(Type, FOnGetValue);
		DECLARE_DELEGATE_RetVal(TypeRef, FOnGetValue_Ref);
		DECLARE_DELEGATE_RetVal(ConstTypeRef, FOnGetValue_ConstRef);

		DECLARE_DELEGATE_OneParam(FOnSetValue, Type);
		DECLARE_DELEGATE_OneParam(FOnSetValue_ConstRef, ConstTypeRef);
	};
	
	template <class InVariableType>
	struct FDelegates_Enum
	{
		using Type = std::remove_cvref_t<InVariableType>;	
		using ListTypeTraits = TListTypeTraits<Type>;
		using NullableType = typename ListTypeTraits::NullableType;

		DECLARE_DELEGATE_RetVal(TArray<NullableType>, FOnCollectEnumerationItems);
		DECLARE_DELEGATE_RetVal_OneParam(FText, FOnGetItemText, NullableType);
	};

	virtual ~FDelegateParamsBase() {}
	virtual void Bind(FDelegateParamsBase& InOther) const = 0;
	virtual bool IsValid() const = 0;
};

//此处指明具体代理类型, 当需要使用引用或者const引用时，需要自定义继承于FDelegateParamsBase的类
//定义FOnGetValueDelegate和FOnSetValueDelegate类型，而代理类型在FDelegateParamsBase中声明
template <class InVariableType>
struct TDelegateParams_Value : public FDelegateParamsBase
{
	using Super = FDelegateParamsBase;
	using Type = std::remove_cvref_t<InVariableType>;

	//此处指明具体代理类型
	using FOnGetValueDelegate = typename Super::FDelegates_Value<Type>::FOnGetValue;
	using FOnSetValueDelegate = typename Super::FDelegates_Value<Type>::FOnSetValue;

	FOnGetValueDelegate OnGetValueDelegate;
	FOnSetValueDelegate OnSetValueDelegate;

	FOnGetValueDelegate& GetOnGetValueDelegate() { return OnGetValueDelegate;}
	FOnSetValueDelegate& GetOnSetValueDelegate() { return OnSetValueDelegate; }

	virtual void Bind(FDelegateParamsBase& InOther) const override
	{
		TDelegateParams_Value& OtherParams = static_cast<TDelegateParams_Value&>(InOther);
		OtherParams.OnGetValueDelegate = OnGetValueDelegate;
		OtherParams.OnSetValueDelegate = OnSetValueDelegate;
	}

	virtual bool IsValid() const override
	{
		return OnGetValueDelegate.IsBound() && OnSetValueDelegate.IsBound();
	}
};

template <class InVariableType>
struct TDelegateParams_Enum : public FDelegateParamsBase
{
	using Super = FDelegateParamsBase;
	using Type = std::remove_cvref_t<InVariableType>;
	using NullableType = typename FDelegateParamsBase::FDelegates_Enum<Type>::NullableType;
	using DelegateParams_Value = TDelegateParams_Value<NullableType>;


	//此处指明具体代理类型
	using FOnGetValueDelegate = typename DelegateParams_Value::FOnGetValueDelegate;
	using FOnSetValueDelegate = typename DelegateParams_Value::FOnSetValueDelegate;
	
	using FOnCollectEnumerationItemsDelegate = typename Super::FDelegates_Enum<Type>::FOnCollectEnumerationItems;
	using FOnGetItemTextDelegate = typename Super::FDelegates_Enum<Type>::FOnGetItemText;

	DelegateParams_Value ValueDelegateParams;
	FOnCollectEnumerationItemsDelegate OnCollectEnumerationItemsDelegate;
	FOnGetItemTextDelegate OnGetItemTextDelegate;
	
	FOnGetValueDelegate& GetOnGetValueDelegate() { return ValueDelegateParams.OnGetValueDelegate; }
	FOnSetValueDelegate& GetOnSetValueDelegate() { return ValueDelegateParams.OnSetValueDelegate; }
	FOnCollectEnumerationItemsDelegate& GetOnCollectEnumerationItemsDelegate() { return OnCollectEnumerationItemsDelegate; }
	FOnGetItemTextDelegate& GetOnGetItemTextDelegate() { return OnGetItemTextDelegate; }

	virtual void Bind(FDelegateParamsBase& InOther) const override
	{
		TDelegateParams_Enum& OtherParams = static_cast<TDelegateParams_Enum&>(InOther);
		ValueDelegateParams.Bind(OtherParams.ValueDelegateParams);
		OtherParams.OnCollectEnumerationItemsDelegate = OnCollectEnumerationItemsDelegate;
		OtherParams.OnGetItemTextDelegate = OnGetItemTextDelegate;
	}

	virtual bool IsValid() const override
	{
		return ValueDelegateParams.IsValid() && OnCollectEnumerationItemsDelegate.IsBound() && OnGetItemTextDelegate.IsBound();
	}
};

template <typename, typename = void>
struct HasRequiredDelegates : public std::false_type
{

};

template <class InVariableType>
struct HasRequiredDelegates <
	TDelegateParams_Value<InVariableType>, 
	std::void_t<
		typename TDelegateParams_Value<InVariableType>::FOnGetValueDelegate, 
		typename TDelegateParams_Value<InVariableType>::FOnSetValueDelegate
		>
	> : public std::true_type
{
};

template <class InVariableType>
struct HasRequiredDelegates <TDelegateParams_Enum<InVariableType>,
	std::void_t<
	typename TDelegateParams_Enum<InVariableType>::FOnGetValueDelegate,
	typename TDelegateParams_Enum<InVariableType>::FOnSetValueDelegate,
	typename TDelegateParams_Enum<InVariableType>::FOnCollectEnumerationItemsDelegate,
	typename TDelegateParams_Enum<InVariableType>::FOnGetItemTextDelegate
	>> : std::true_type{};

template <class T>
struct IsValidDelegateParams : HasRequiredDelegates<T> {};
