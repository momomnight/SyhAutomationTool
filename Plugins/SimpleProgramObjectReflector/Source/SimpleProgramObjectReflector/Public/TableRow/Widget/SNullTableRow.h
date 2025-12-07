#pragma once

#include "TableRow/Widget/IPropertyWidgetTableRow.h"
#include "Templates/SharedPointer.h"

class SIMPLEPROGRAMOBJECTREFLECTOR_API SNullTableRow : public IPropertyWidgetTableRow
{
public:
	using Super = IPropertyWidgetTableRow;

	SNullTableRow()
	{

	}

	SLATE_BEGIN_ARGS(SNullTableRow)
		{

		}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, const TSharedRef<STableViewBase>& InOwnerTableView, TSharedPtr<FPropertyInfo> InPropertyInfo);

	static TSharedRef<SNullTableRow> NullTableRow;
};