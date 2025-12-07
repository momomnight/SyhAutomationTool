#pragma once
#include "Delegates/DelegateCombinations.h"
#include "UObject/UnrealType.h"
#include "UObject/NameTypes.h"

struct FPropertyTreeInquiryParams
{

};

struct FPropertyTreeSettings
{
	FPropertyTreeSettings(){}
	FPropertyTreeSettings(const FPropertyTreeInquiryParams& InInquiryParam){}
};

struct FPropertyInquiryParam
{
	FPropertyInquiryParam(FProperty* InProperty) : Property(InProperty){}

	FName CategoryName{NAME_None};	//0 - 11, 
	bool bShow = true;				//12
	FProperty* Property{nullptr};	//16 - 23
};

struct FPropertyInfoSettings
{
	FPropertyInfoSettings() {}
	FPropertyInfoSettings(const FPropertyInquiryParam& InInquiryParam)
		: bShow(InInquiryParam.bShow)
	{
	}
	bool bShow = true;
};

//用于设置属性树的相关信息
DECLARE_DELEGATE_OneParam(FOnInquiryPropertyTree, FPropertyTreeInquiryParams&);

//用于询问单个属性的相关信息
DECLARE_DELEGATE_OneParam(FOnInquiryProperty, FPropertyInquiryParam&);