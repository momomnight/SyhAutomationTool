#include "TableRow/PropertyInfoCategory.h"

void FPropertyInfoCategory::AddChild(TSharedPtr<IPropertyInfoBase> InChild)
{
	if(InChild.IsValid() && InChild->IsValid())
	{
		Children.Add(InChild);
	}
}