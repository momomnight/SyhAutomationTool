#include "PropertyWidget/SBoolPropertyWidget.h"
#include "Widgets/Input/SCheckBox.h"

SBoolPropertyWidget::SBoolPropertyWidget() : Super()
{
}


void SBoolPropertyWidget::Construct(const FArguments& InArgs)
{
	OnBoolValueChanged = InArgs._OnBoolValueChanged;
	OnGetBoolValue = InArgs._OnGetBoolValue;


	ChildSlot[
		SNew(SCheckBox)
			.OnCheckStateChanged(FOnCheckStateChanged::CreateSP(this, &SBoolPropertyWidget::OnCheckStateChanged))
			.IsChecked(TAttribute<ECheckBoxState>::Create(TAttribute<ECheckBoxState>::FGetter::CreateSP(this, &SBoolPropertyWidget::GetCheckState)))
	];
}

void SBoolPropertyWidget::OnCheckStateChanged(ECheckBoxState InCheckState)
{
	if(OnBoolValueChanged.IsBound() && InCheckState != ECheckBoxState::Undetermined)
	{
		OnBoolValueChanged.Execute(ECheckBoxState::Checked == InCheckState ? true : false);
	}
}

ECheckBoxState SBoolPropertyWidget::GetCheckState()
{
	if (OnGetBoolValue.IsBound())
	{
		return OnGetBoolValue.Execute() ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
	}
	return ECheckBoxState::Undetermined;
}
