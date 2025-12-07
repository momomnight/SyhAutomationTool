#pragma once
#include "TableRow/PropertyInfoInterface.h"
#include "PropertyWidget/SEnumerationTypePropertyWidget.h"

class SIMPLEPROGRAMOBJECTREFLECTOR_API FEnumPropertyInfo : public ISingleItemPropertyInfo
{
public:
	using Super = ISingleItemPropertyInfo;

	typedef SEnumerationTypePropertyWidget<FName> SEnumPropertyWidget;

	FEnumPropertyInfo();

public:
	//~Begin IPropertyInfoBase
	virtual bool IsValid() const override;

protected:
	virtual TSharedPtr<SPropertyWidget> MakePropertyWidget() override;

	//~Begin IPropertyInfoBase
protected:
	bool IsByteEnum() const;
	bool IsEnumClass() const;

protected:
	TArray<FName> CollectEnumItem();
	void OnChangeEnumItem(FName InEnumName);
	FName OnGetCurrentEnum();
	FText OnGetEnumText(FName InEnumName);
};