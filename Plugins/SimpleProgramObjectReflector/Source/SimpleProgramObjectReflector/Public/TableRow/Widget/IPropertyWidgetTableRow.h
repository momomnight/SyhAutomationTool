#pragma once
#include "TableRow/PropertyInfo.h"
#include "PropertyWidget/SPropertyWidget.h"

class SPropertyWidget;

class SIMPLEPROGRAMOBJECTREFLECTOR_API IPropertyWidgetTableRow : public STableRow<TSharedPtr<FPropertyInfo>>
{
public:
	using Super = STableRow<TSharedPtr<FPropertyInfo>>;

	IPropertyWidgetTableRow(){}

	void Construct(const TSharedRef<STableViewBase>& InOwnerTableView, TSharedPtr<FPropertyInfo> InPropertyInfo);
	void ConstructTableRow(TSharedPtr<FUICommandList> InCommandList, TSharedPtr<FExtender> InExtender,
		TSharedPtr<SPropertyWidget> InPropertyWidget);

	FName GetFName() const { return PropertyInfo.IsValid() ? PropertyInfo->GetName() : NAME_None; }
	FText GetDisplayName() const { return PropertyInfo.IsValid() ? PropertyInfo->GetDisplayName() : FText::GetEmpty(); }

	//用于派生类绑定命令，InCommandList由IPropertyWidgetTableRow提供
	virtual void BindCommands(TSharedPtr<FUICommandList> InCommandList) {}
	TSharedPtr<FUICommandList> GetCommandList() const { return CommandList; }

	virtual TSharedPtr<SPropertyWidget> GetPropertyWidget() const { return nullptr; }


protected:
	//IPropertyWidgetTableRow/PropertyWidget由PropertyInfo创建，IPropertyWidgetTableRow持有PropertyWidget，可通过该Widget调用PropertyInfo相应函数
	//PropertyInfo中设有相应函数可调用PropertyInfo中函数
	TSharedPtr<FPropertyInfo> PropertyInfo;

	TSharedPtr<FUICommandList> CommandList;
};