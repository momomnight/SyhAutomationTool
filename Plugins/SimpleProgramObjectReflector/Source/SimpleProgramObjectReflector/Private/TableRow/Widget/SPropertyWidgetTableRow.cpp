#include "TableRow/Widget/SPropertyWidgetTableRow.h"
#include "Widgets/Views/STableViewBase.h"
#include "TableRow/PropertyInfoFactory.h"
#include "SimpleProgramObjectReflectorStyle.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

SPropertyWidgetTableRow::SPropertyWidgetTableRow()
{
}


void SPropertyWidgetTableRow::Construct(const FArguments& InArgs, TSharedPtr<FPropertyInfo> InPropertyInfo, 
	const TSharedRef<STableViewBase>& InOwnerTableView)
{
	PropertyInfo = InPropertyInfo;

	Super::Construct(
		InOwnerTableView,
		PropertyInfo
	);
}

bool SPropertyWidgetTableRow::IsSingleItem() const
{
	return PropertyInfo.IsValid() && PropertyInfo->GetPropertyInfoType() == EPropertyInfoType::Item;
}

TAttribute<EVisibility> SPropertyWidgetTableRow::GetResetWidgetVisibility() const
{
	if(CanReset())
	{
		return TAttribute<EVisibility>::Create(TAttribute<EVisibility>::FGetter::CreateLambda(
			[this]()
			{
				if (this->IsDefaultValue())
				{
					return EVisibility::Hidden;
				}
				return EVisibility::Visible;
			}
		));
	}
	else
	{
		return EVisibility::Hidden;
	}
}

FReply SPropertyWidgetTableRow::Reset()
{
	if(IsSingleItem())
	{
		StaticCastSharedPtr<FPropertyInfoSingleItem>(PropertyInfo)->ResetValue();
		return FReply::Handled();
	}
	return FReply::Unhandled();
}
bool SPropertyWidgetTableRow::CanReset() const
{
	if (IsSingleItem())
	{
		return StaticCastSharedPtr<FPropertyInfoSingleItem>(PropertyInfo)->CanReset();
	}
	return false;
}

bool SPropertyWidgetTableRow::IsDefaultValue() const
{
	if (PropertyInfo.IsValid() && PropertyInfo->GetPropertyInfoType() == EPropertyInfoType::Item)
	{
		return StaticCastSharedPtr<FPropertyInfoSingleItem>(PropertyInfo)->IsDefaultValue();
	}
	return false;
}



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT