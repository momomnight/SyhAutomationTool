#include "TableRow/BoolPropertyInfo.h"
#include "PropertyWidget/SBoolPropertyWidget.h"

FBoolPropertyInfo::FBoolPropertyInfo() : Super()
{
}

TSharedPtr<SPropertyWidget> FBoolPropertyInfo::MakePropertyWidget()
{
	check(IsValid());
	TSharedRef<SBoolPropertyWidget> BoolPropertyWidget = SNew(SBoolPropertyWidget);
	BoolPropertyWidget->GetOnBoolValueChanged().BindSP(this, &FBoolPropertyInfo::SetBoolValue);
	BoolPropertyWidget->GetOnGetBoolValue().BindSP(this, &FBoolPropertyInfo::GetBoolValue);
	return BoolPropertyWidget;
}

bool FBoolPropertyInfo::IsValid() const
{
	if (Super::IsValid())
	{
		FBoolProperty* BoolProperty = CastField<FBoolProperty>(GetProperty());
		return BoolProperty;
	}
	return false;
}

void FBoolPropertyInfo::SetBoolValue(bool InValue)
{
	if (!FPropertyMethod::SetPropertyValue<bool>(GetProperty(), GetContainerDescription()->GetRawPtr(), InValue))
	{
		UE_LOG(LogSimpleProgramObjectReflector, Warning, TEXT("SetBoolValue Failed!"));
	}
}

bool FBoolPropertyInfo::GetBoolValue() const
{
	bool Value = false;

	if (!FPropertyMethod::GetPropertyValue<bool>(GetProperty(), GetContainerDescription()->GetRawPtr(), Value))
	{
		UE_LOG(LogSimpleProgramObjectReflector, Warning, TEXT("GetBoolValue Failed!"));
	}		
	return Value;
}
