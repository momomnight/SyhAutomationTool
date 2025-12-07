#pragma once
#include "TableRow/Base/PropertyInfoInterface.h"


class FPropertyInfoCategory : public IPropertyInfoWithStoredName
{
public:
	FPropertyInfoCategory() {}
	FPropertyInfoCategory(const FName& InName) : IPropertyInfoWithStoredName(InName) {}

	//~Begin IPropertyInfoBase
	virtual bool IsValid() const override { return true; }
	virtual bool IsLeaf() const override { return false; }
	virtual TArray<TSharedPtr<IPropertyInfoBase>> GetChildren() const override { return Children;}
	virtual void ClearChildren() override { Children.Empty(Children.Max()); }
	virtual void AddChild(TSharedPtr<IPropertyInfoBase> InChild) override;

	virtual FProperty* GetProperty() const override { return nullptr; };
	virtual EPropertyInfoType GetPropertyInfoType() const override { return EPropertyInfoType::IsValid | EPropertyInfoType::HasChild;}
	//~End IPropertyInfoBase
	
private:
	TArray<TSharedPtr<IPropertyInfoBase>> Children;

};