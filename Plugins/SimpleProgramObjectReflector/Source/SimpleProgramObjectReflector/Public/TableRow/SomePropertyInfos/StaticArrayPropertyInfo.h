#pragma once
#include "TableRow/PropertyInfoInterface.h"
#include "Containers/Array.h"


//数量固定，不可删除添加
class SIMPLEPROGRAMOBJECTREFLECTOR_API FStaticArrayPropertyInfo : public IContainerItemPropertyInfo
{
public:
	using Super = IContainerItemPropertyInfo;

	FStaticArrayPropertyInfo() {}

	bool CheckChildren() const;
public:
	//~Begin IPropertyInfoBase
	virtual void Initialize() override;

	virtual bool IsValid() const override;

	virtual TArray<TSharedPtr<IPropertyInfoBase>> GetChildren() const override;

protected:
	virtual TSharedPtr<SPropertyWidget> MakePropertyWidget() override;

	//~Begin IPropertyInfoBase

	TArray<TSharedPtr<IPropertyInfoBase>> FixedArray;
};