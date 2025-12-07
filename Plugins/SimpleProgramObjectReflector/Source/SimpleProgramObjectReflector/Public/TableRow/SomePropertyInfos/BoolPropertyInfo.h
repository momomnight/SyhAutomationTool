#pragma once
#include "TableRow/PropertyInfoInterface.h"

class SIMPLEPROGRAMOBJECTREFLECTOR_API FBoolPropertyInfo : public ISingleItemPropertyInfo
{
public:
	using Super = ISingleItemPropertyInfo;

	FBoolPropertyInfo();

public:
	//~Begin IPropertyInfoBase
	virtual bool IsValid() const override;

protected:
	virtual TSharedPtr<SPropertyWidget> MakePropertyWidget() override;

	//~Begin IPropertyInfoBase

protected:
	void SetBoolValue(bool InValue);
	bool GetBoolValue() const;
};