#pragma once
#include "TableRow/PropertyInfoInterface.h"

class SIMPLEPROGRAMOBJECTREFLECTOR_API FArrayPropertyInfo : public IContainerItemPropertyInfo
{
public:
	using Super = IContainerItemPropertyInfo;

	FArrayPropertyInfo() {};

	bool CheckChildren() const;
public:
	//~Begin IPropertyInfoBase
	virtual void Initialize() override;

	virtual bool IsValid() const override;

	virtual TArray<TSharedPtr<IPropertyInfoBase>> GetChildren() const override;

protected:
	virtual TSharedPtr<SPropertyWidget> MakePropertyWidget() override;

	//~Begin IPropertyInfoBase
};