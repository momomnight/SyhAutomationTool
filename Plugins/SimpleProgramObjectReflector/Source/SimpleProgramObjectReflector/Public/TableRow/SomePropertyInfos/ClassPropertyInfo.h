#pragma once
#include "TableRow/PropertyInfoInterface.h"


class SIMPLEPROGRAMOBJECTREFLECTOR_API FClassPropertyInfo : public ISingleItemPropertyInfo
{
public:
	using Super = ISingleItemPropertyInfo;

	typedef SEnumerationTypePropertyWidget<TWeakObjectPtr<UClass>> SClassPropertyWidget;

	FClassPropertyInfo();

	struct IClassFilter : public TSharedFromThis<IClassFilter>
	{
		virtual bool operator()(UClass*) const = 0;
		virtual ~IClassFilter(){}
	};

	struct FBaseClassFilter : public IClassFilter
	{
		virtual bool operator()(UClass* InClass) const;
	};

public:
	//~Begin IPropertyInfoBase
	virtual bool IsValid() const override;

protected:
	virtual TSharedPtr<SPropertyWidget> MakePropertyWidget() override;

	//~Begin IPropertyInfoBase

	void SetExtraClassFilter(TSharedPtr<FBaseClassFilter> InExtraClassFilter)
	{
		ExtraClassFilter = InExtraClassFilter;
	}

protected:
	TArray<TWeakObjectPtr<UClass>> CollectClassTypes();
	void OnChangeClassTypeValue(TWeakObjectPtr<UClass> InClass);
	TWeakObjectPtr<UClass> OnGetCurrentClassType();
	FText OnGetClassTypeDisplayName(TWeakObjectPtr<UClass> InClass);

protected:
	UClass* FindClass(FClassProperty* InClassProperty) const;
	bool CheckClassArrayValid() const;

	bool FillWeakClassArray();
	TArray<UClass*> RecollectClasses(UClass* InBaseClass);

	TSharedRef<FBaseClassFilter> ClassFilter;
	TSharedPtr<FBaseClassFilter> ExtraClassFilter;

	TWeakObjectPtr<UClass> PropertyBaseClass;
	TArray<TWeakObjectPtr<UClass>> WeakClassArray; 
};