#pragma once
#include "PropertyWidget/SPropertyWidget.h"
#include "Framework/Views/TableViewTypeTraits.h"


template <class OptionType>
class SIMPLEPROGRAMOBJECTREFLECTOR_API SEnumerationTypePropertyWidget : public SPropertyWidget
{
public:
	using Super = SPropertyWidget;
	typedef TListTypeTraits<OptionType> ListTypeTraits;
	typedef typename TListTypeTraits<OptionType>::NullableType NullableType;

	DECLARE_DELEGATE_RetVal(TArray<NullableType>, FOnCollectEnumerationItems);

	DECLARE_DELEGATE_RetVal(NullableType, FOnGetCurrentEnumerationItem);

	DECLARE_DELEGATE_OneParam(FOnChangeEnumerationItem, NullableType);

	DECLARE_DELEGATE_RetVal_OneParam(FText, FOnGetEnumerationItemText, NullableType);

	SEnumerationTypePropertyWidget() : ComboBox(nullptr)
	{

	}

	SLATE_BEGIN_ARGS(SEnumerationTypePropertyWidget)
		{

		}

		SLATE_EVENT(FOnCollectEnumerationItems, OnCollectEnumerationItems)
		
		SLATE_EVENT(FOnChangeEnumerationItem, OnChangeEnumerationItem)
		
		SLATE_EVENT(FOnGetCurrentEnumerationItem, OnGetCurrentEnumerationItem)

		SLATE_EVENT(FOnGetEnumerationItemText, OnGetEnumerationItemText)


	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs) 
	{
		OnCollectEnumerationItems = InArgs._OnCollectEnumerationItems;
		OnChangeEnumerationItem = InArgs._OnChangeEnumerationItem;
		OnGetCurrentEnumerationItem = InArgs._OnGetCurrentEnumerationItem;
		OnGetEnumerationItemText = InArgs._OnGetEnumerationItemText;

		if (OnCollectEnumerationItems.IsBound())
		{
			Selections = OnCollectEnumerationItems.Execute();
		}

		NullableType CurrentEnumItem = FindCurrentEnumItem();

		ChildSlot[
			SAssignNew(ComboBox, SComboBox<NullableType>)
				.OptionsSource(&Selections)
				.InitiallySelectedItem(CurrentEnumItem)
				.OnSelectionChanged(SComboBox<NullableType>::FOnSelectionChanged::CreateSP(this, 
					&SEnumerationTypePropertyWidget::OnSelectionChanged))
				.OnGenerateWidget(SComboBox<NullableType>::FOnGenerateWidget::CreateSP(this, 
					&SEnumerationTypePropertyWidget::OnGenerateWidget))
		];
	}


public:
	FOnCollectEnumerationItems& GetOnCollectEnumerationItems()
	{
		return OnCollectEnumerationItems;
	}

	FOnChangeEnumerationItem& GetOnChangeEnumerationItem()
	{
		return OnChangeEnumerationItem;
	}

	FOnGetCurrentEnumerationItem& GetOnGetCurrentEnumerationItem()
	{
		return OnGetCurrentEnumerationItem;
	}

	FOnGetEnumerationItemText& GetOnGetEnumerationItemText()
	{
		return OnGetEnumerationItemText;
	}

public:

	void RefreshEnumArray() 
	{
		if (ComboBox.IsValid() && OnCollectEnumerationItems.IsBound())
		{
			Selections = OnCollectEnumerationItems.Execute();
			ComboBox->RefreshOptions();
			NullableType FoundResult = FindCurrentEnumItem();
			if (ListTypeTraits::IsPtrValid(FoundResult))
			{
				ComboBox->SetSelectedItem(FoundResult);
			}
		}
	}

	void SetCurrentEnumItem(NullableType InItem)
	{
		if (IsSelection(InItem) && ComboBox.IsValid())
		{
			ComboBox->SetSelectedItem(InItem);
		}
	}

	NullableType FindCurrentEnumItem() const
	{
		if (OnGetCurrentEnumerationItem.IsBound())
		{
			return OnGetCurrentEnumerationItem.Execute();
		}
		return NullableType();
	}

	bool IsSelection(NullableType InItem) const
	{
		if (ListTypeTraits::IsPtrValid(InItem))
		{
			for (auto Iter = Selections.CreateConstIterator(); Iter; ++Iter)
			{
				if ((*Iter) == InItem)
				{
					return true;
				}
			}
		}

		return false;
	}

protected:

	void OnSelectionChanged(NullableType InItem, ESelectInfo::Type)
	{
		if (ListTypeTraits::IsPtrValid(InItem) && OnChangeEnumerationItem.IsBound())
		{
			OnChangeEnumerationItem.Execute(InItem);
		}
	}

	TSharedRef<SWidget> OnGenerateWidget(NullableType InItem)
	{
		return SNew(STextBlock)
			.Text(TAttribute<FText>::Create(TAttribute<FText>::FGetter::CreateSP(this,
				&SEnumerationTypePropertyWidget<OptionType>::GetEnumerationItemText, InItem)));
	}

	FText GetEnumerationItemText(NullableType InSelection)
	{
		if (OnGetEnumerationItemText.IsBound())
		{
			return OnGetEnumerationItemText.Execute(InSelection);
		}
		return FText::GetEmpty();
	}

protected:

	FOnCollectEnumerationItems OnCollectEnumerationItems;
	FOnChangeEnumerationItem OnChangeEnumerationItem;
	FOnGetCurrentEnumerationItem OnGetCurrentEnumerationItem;
	FOnGetEnumerationItemText OnGetEnumerationItemText;

private:
	TArray<NullableType> Selections;
	TSharedPtr<SComboBox<NullableType>> ComboBox;
};
