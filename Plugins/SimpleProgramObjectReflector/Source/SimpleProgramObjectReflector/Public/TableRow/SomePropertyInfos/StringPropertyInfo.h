#pragma once
#include "TableRow/PropertyInfoInterface.h"
#include "PropertyWidget/STextPropertyWidget.h"

class  SIMPLEPROGRAMOBJECTREFLECTOR_API IStringPropertyInfo : public ISingleItemPropertyInfo
{
public:
	using Super = ISingleItemPropertyInfo;
	IStringPropertyInfo(){}

protected:
	//~Begin IPropertyInfoBase
	virtual TSharedPtr<class SPropertyWidget> MakePropertyWidget() override;
	//~End IPropertyInfoBase

	virtual FText OnGetDisplayText() const = 0;
	virtual void OnTextCommitted(const FText&, ETextCommit::Type) = 0;
};


class SIMPLEPROGRAMOBJECTREFLECTOR_API FStringPropertyInfo : public IStringPropertyInfo
{
public:
	using Super = IStringPropertyInfo;

	FStringPropertyInfo(){}

	//~Begin IPropertyInfoBase
	virtual bool IsValid() const override;
	//~End IPropertyInfoBase

	//~Begin IStringPropertyInfo
	virtual FText OnGetDisplayText() const override;
	virtual void OnTextCommitted(const FText&, ETextCommit::Type) override;
	//~End IStringPropertyInfo
};

class SIMPLEPROGRAMOBJECTREFLECTOR_API FNamePropertyInfo : public IStringPropertyInfo
{
public:
	using Super = IStringPropertyInfo;

	FNamePropertyInfo() {}

	//~Begin IPropertyInfoBase
	virtual bool IsValid() const override;
	//~End IPropertyInfoBase

	//~Begin IStringPropertyInfo
	virtual FText OnGetDisplayText() const override;
	virtual void OnTextCommitted(const FText&, ETextCommit::Type) override;
	//~End IStringPropertyInfo
};

class SIMPLEPROGRAMOBJECTREFLECTOR_API FTextPropertyInfo : public IStringPropertyInfo
{
public:
	using Super = IStringPropertyInfo;

	FTextPropertyInfo() {}

	//~Begin IPropertyInfoBase
	virtual bool IsValid() const override;
	//~End IPropertyInfoBase

	//~Begin IStringPropertyInfo
	virtual FText OnGetDisplayText() const override;
	virtual void OnTextCommitted(const FText&, ETextCommit::Type) override;
	//~End IStringPropertyInfo
};