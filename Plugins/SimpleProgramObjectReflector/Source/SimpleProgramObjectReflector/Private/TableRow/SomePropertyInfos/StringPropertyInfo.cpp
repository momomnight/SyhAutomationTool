#include "TableRow/StringPropertyInfo.h"
#include "PropertyWidget/STextPropertyWidget.h"

#define LOCTEXT_NAMESPACE "StringPropertyInfo"

TSharedPtr<SPropertyWidget> IStringPropertyInfo::MakePropertyWidget()
{
	check(IsValid());

	TSharedRef<STextPropertyWidget> TextPropertyWidget = SNew(STextPropertyWidget);
	TextPropertyWidget->GetOnGetTextValue().BindSP(this, &IStringPropertyInfo::OnGetDisplayText);
	TextPropertyWidget->GetOnTextValueCommitted().BindSP(this, &IStringPropertyInfo::OnTextCommitted);
	return TextPropertyWidget;
}

bool FStringPropertyInfo::IsValid() const
{
	return Super::IsValid() && CastField<FStrProperty>(GetProperty());
}

FText FStringPropertyInfo::OnGetDisplayText() const
{
	if(ensure(IsValid()))
	{
		FString String;
		if (FPropertyMethod::GetPropertyValue<FString>(GetProperty(), GetContainerDescription()->GetRawPtr(), String))
		{
			return FText::FromString(String);
		}
		else
		{
			UE_LOG(LogSimpleProgramObjectReflector, Warning, TEXT("FStringPropertyInfo::OnGetDisplayText Failed!"));
		}
	}
	return FText::GetEmpty();
}

void FStringPropertyInfo::OnTextCommitted(const FText& InText, ETextCommit::Type InType)
{
	if (ensure(IsValid()) && InType == ETextCommit::Type::OnEnter)
	{
		FString String = InText.ToString();
		if (!FPropertyMethod::SetPropertyValue<FString>(GetProperty(), GetContainerDescription()->GetRawPtr(), String))
		{
			UE_LOG(LogSimpleProgramObjectReflector, Warning, TEXT("FStringPropertyInfo::OnTextCommitted Failed!"));
		}
	}
}

bool FNamePropertyInfo::IsValid() const
{
	return Super::IsValid() && CastField<FNameProperty>(GetProperty());
}

FText FNamePropertyInfo::OnGetDisplayText() const
{
	if (ensure(IsValid()))
	{
		FName Name;
		if (FPropertyMethod::GetPropertyValue<FName>(GetProperty(), GetContainerDescription()->GetRawPtr(), Name))
		{
			return FText::FromName(Name);
		}
		else
		{
			UE_LOG(LogSimpleProgramObjectReflector, Warning, TEXT("FNamePropertyInfo::OnGetDisplayText Failed!"));
		}
	}
	return FText::GetEmpty();
}

void FNamePropertyInfo::OnTextCommitted(const FText& InText, ETextCommit::Type InType)
{
	if (ensure(IsValid()) && InType == ETextCommit::Type::OnEnter)
	{
		FName Name = FName(InText.ToString());
		if (!FPropertyMethod::SetPropertyValue<FName>(GetProperty(), GetContainerDescription()->GetRawPtr(), Name))
		{
			UE_LOG(LogSimpleProgramObjectReflector, Warning, TEXT("FNamePropertyInfo::OnTextCommitted Failed!"));
		}
	}
}

bool FTextPropertyInfo::IsValid() const
{
	return Super::IsValid() && CastField<FTextProperty>(GetProperty());
}

FText FTextPropertyInfo::OnGetDisplayText() const
{
	if (ensure(IsValid()))
	{
		FText Text;
		if (FPropertyMethod::GetPropertyValue<FText>(GetProperty(), GetContainerDescription()->GetRawPtr(), Text))
		{
			return Text;
		}
		else
		{
			UE_LOG(LogSimpleProgramObjectReflector, Warning, TEXT("FTextPropertyInfo::OnGetDisplayText Failed!"));
		}
	}
	return FText::GetEmpty();
}

void FTextPropertyInfo::OnTextCommitted(const FText& InText, ETextCommit::Type InType)
{
	if (ensure(IsValid()) && InType == ETextCommit::Type::OnEnter)
	{
		FText Text;
		if (!FPropertyMethod::SetPropertyValue<FText>(GetProperty(), GetContainerDescription()->GetRawPtr(), Text))
		{
			UE_LOG(LogSimpleProgramObjectReflector, Warning, TEXT("FTextPropertyInfo::OnTextCommitted Failed!"));
		}
	}
}

#undef LOCTEXT_NAMESPACE


