#pragma once

#include "TableRow/PropertyInfo.h"
#include "Templates/SharedPointer.h"
#include "TableRow/Widget/IPropertyWidgetTableRow.h"

class STableViewBase;
class SPropertyWidget;

//SPropertyWidgetTableRow调用PropertyInfoFactory, PropertyInfoFactory创建各类PropertyInfo
class SIMPLEPROGRAMOBJECTREFLECTOR_API SPropertyWidgetTableRow : public IPropertyWidgetTableRow
{
public:
	using Super = IPropertyWidgetTableRow;

	SPropertyWidgetTableRow();

	SLATE_BEGIN_ARGS(SPropertyWidgetTableRow)
		{

		}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, TSharedPtr<FPropertyInfo> InPropertyInfo,
		const TSharedRef<STableViewBase>& InOwnerTableView);

public:
	virtual TSharedPtr<SPropertyWidget> GetPropertyWidget() const override { return PropertyWidget; }

public:
	bool IsSingleItem() const;
	TAttribute<EVisibility> GetResetWidgetVisibility() const;

	//结果由PropertyInfo决定
	FReply Reset();
	bool CanReset() const;
	bool IsDefaultValue() const;

protected:
	TSharedPtr<SPropertyWidget> PropertyWidget;
};

