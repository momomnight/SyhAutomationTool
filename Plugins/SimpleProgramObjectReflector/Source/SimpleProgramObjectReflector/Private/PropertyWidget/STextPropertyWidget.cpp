#include "PropertyWidget/STextPropertyWidget.h"
#include "Widgets/Input/SEditableTextBox.h"

STextPropertyWidget::STextPropertyWidget()
{
}

void STextPropertyWidget::Construct(const FArguments& InArgs)
{
	OnGetTextValue = InArgs._OnGetTextValue;
	OnTextValueCommitted = InArgs._OnTextValueCommitted;

	ChildSlot
	[
		SNew(SEditableTextBox)
			.Text(TAttribute<FText>::Create(TAttribute<FText>::FGetter::CreateSP(this, &STextPropertyWidget::GetDisplayText)))
			.OnTextCommitted(FOnTextCommitted::CreateSP(this, &STextPropertyWidget::OnTextCommitted))
	];
}

FText STextPropertyWidget::GetDisplayText() const
{
	if(OnGetTextValue.IsBound())
	{
		return OnGetTextValue.Execute();
	}
	return FText::GetEmpty();
}
void STextPropertyWidget::OnTextCommitted(const FText& NewText, ETextCommit::Type CommitType)
{
	if (OnTextValueCommitted.IsBound())
	{
		OnTextValueCommitted.Execute(NewText, CommitType);
	}
}