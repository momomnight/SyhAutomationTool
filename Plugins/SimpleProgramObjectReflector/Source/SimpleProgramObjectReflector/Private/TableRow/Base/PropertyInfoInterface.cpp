#include "TableRow/Base/PropertyInfoInterface.h"
#include "TableRow/Base/PropertyInfoRoot.h"
#include "PropertyWidget/SPropertyWidget.h"


const EPropertyInfoType EPropertyInfoType::IsInvalid	= EPropertyInfoType{ FPropertyInfoType::IsInvalid };
const EPropertyInfoType EPropertyInfoType::IsValid		= EPropertyInfoType{ FPropertyInfoType::IsValid };
const EPropertyInfoType EPropertyInfoType::HasChild		= EPropertyInfoType{ FPropertyInfoType::HasChild };
const EPropertyInfoType EPropertyInfoType::HasProperty	= EPropertyInfoType{ FPropertyInfoType::HasProperty };

void IPropertyInfoBase::AddChildren(const TArray<TSharedPtr<IPropertyInfoBase>>& InChildren)
{
	for (auto& Child : InChildren)
	{
		if(Child.IsValid())
		{
			AddChild(Child);
		}
	}
}

void IPropertyInfoBase::SetParent(TSharedPtr<IPropertyInfoBase> InParent)
{
	if (InParent.IsValid() && ensure(!InParent->IsLeaf()))
	{
		Parent = InParent;
	}
}

TSharedPtr<IPropertyInfoBase> IPropertyInfoBase::GetParent() const
{
	return Parent.Pin();
}

void IPropertyInfoBase::SetRoot(TSharedPtr<FPropertyInfoRoot> InRoot)
{
	Root = InRoot;
}

TSharedPtr<FPropertyInfoRoot> IPropertyInfoBase::GetRoot() const
{
	return Root.Pin();
}

FPropertyInfoSettings& IPropertyInfoBase::GetSettings()
{
	return Settings;
}

TSharedPtr<IContainerDescription> IPropertyInfoBase::GetContainerDescription() const
{
	TSharedPtr<FPropertyInfoRoot> Root = GetRoot();
	return Root.IsValid() && Root->IsValid() ? Root->GetContainerDescription() : nullptr;
}

TSharedPtr<SPropertyWidget> IPropertyInfoBase::MakePropertyWidget()
{
	return nullptr;
}

bool ISingleItemPropertyInfo::IsValid() const
{
	if (Super::IsValid() && Index >= 0)
	{
		//带索引的SingleItemPropertyInfo的属性与其Parent的属性应当相同
		return GetProperty() == GetParent()->GetProperty() && Index < GetProperty()->ArrayDim;
	}
	return false;
}

FName ISingleItemPropertyInfo::GetFName() const
{
	if(Index != INDEX_NONE)
	{
		return FName(FString::Printf(TEXT("Index [%d]"), Index));
	}
	else
	{
		Super::GetFName();
	}
}
