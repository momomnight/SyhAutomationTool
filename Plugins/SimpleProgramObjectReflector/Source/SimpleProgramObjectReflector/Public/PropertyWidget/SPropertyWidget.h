#pragma once

#include "Widgets/SCompoundWidget.h"

class SIMPLEPROGRAMOBJECTREFLECTOR_API SPropertyWidget : public SCompoundWidget
{
public:
	SPropertyWidget();
};

//template <class InVariableType, class InDelegateParams>
//class SIMPLEPROGRAMOBJECTREFLECTOR_API SPropertyWidget_Template : public SPropertyWidget
//{
//public:
//	static_assert(std::is_base_of_v<FDelegateParamsBase, InDelegateParams>, "InDelegateParams must be derived from FDelegateParamsBase.");
//	static_assert(IsValidDelegateParams<InDelegateParams>());
//	
//	using Super = SPropertyWidget;
//	using Self = SPropertyWidget_Template;
//	using FDelegateParams = InDelegateParams;	
//
//	using Type = std::remove_cvref_t<InVariableType>;
//	using TypePtr = Type*;
//	using TypeRef = Type&;
//	using ConstTypePtr = const Type*;
//	using ConstTypeRef = const Type&;
//
//public:
//	SLATE_BEGIN_ARGS(Self)
//		{
//
//		}
//
//	SLATE_ARGUMENT(FDelegateParams, Delegates)
//
//	SLATE_END_ARGS()
//
//	//1. 构造时传参
//	//2. 编译时直接获取
//	//3. 运行时绑定
//
//	void Construct(const FArguments& InArgs)
//	{
//		Delegates = InArgs._Delegates;
//	}
//
//protected:
//	FDelegateParams Delegates;
//
//public:
//	FDelegateParams& GetOnGetDelegateParams() { return Delegates; }
//
//	virtual void BindDelegate(const FDelegateParamsBase& InDelegates) override
//	{
//		InDelegates.Bind(Delegates);
//	}
//
//public:
//	SPropertyWidget_Template() : SPropertyWidget(){}
//};
//
//template <class InVariableType>
//using SPropertyWidget_Value = SPropertyWidget_Template<InVariableType, TDelegateParams_Value<InVariableType>>;
//
//
//template <class InVariableType>
//using SPropertyWidget_Enum = SPropertyWidget_Template<InVariableType, TDelegateParams_Enum<InVariableType>>;