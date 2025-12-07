#include "TableRow/PropertyInfoFactory.h"
#include "TableRow/PropertyInfoRoot.h"

TSharedPtr<FPropertyInfo> FPropertyInfoFactory::CreatePropertyInfo(FProperty* InProperty)
{
	bool bRoot = !InParent.IsValid() && !InProperty;

	if (bRoot)
	{
		//创建Root节点
		TSharedPtr<FPropertyInfoRoot> Root = MakeShareable(new FPropertyInfoRoot);
		return Root;
	}
	else
	{
		TSharedPtr<FPropertyInfoRoot> Root = InParent->GetRoot();
		
	}
}