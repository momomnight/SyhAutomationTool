#include "FileTree/SMenuWidget.h"

SMenuWidget::SMenuWidget()
{

}

void SMenuWidget::Construct(const FArguments& InArgs)
{
	MenuNames = InArgs._MenuNames;
	OnOneStringCliked = InArgs._OnOneStringCliked;

	ChildSlot
	[
		BuildMenuWidget(InArgs._FileType,MenuNames)
	];
}

TSharedRef<SWidget> SMenuWidget::BuildMenuWidget(SimpleSlateExtend::EFileType InType, const TArray<FText>& InMenuNames)
{
	TSharedRef<SVerticalBox> VerticalWidget = SAssignNew(VerticalBox, SVerticalBox);

	for (auto &Tmp : InMenuNames)
	{
		VerticalWidget->AddSlot()
		[
			SNew(SButton)
			.OnClicked(this,&SMenuWidget::OnMenuClicked,InType,Tmp.ToString())
			[
				SNew(STextBlock)
				.Text(Tmp)
			]
		];
	}

	return VerticalWidget;
}

FReply SMenuWidget::OnMenuClicked(SimpleSlateExtend::EFileType InType,const FString InMenuName)
{
	OnOneStringCliked.ExecuteIfBound(InType,InMenuName,AssetPath);

	return FReply::Handled();
}

FReply SMenuWidget::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return FReply::Handled();
}

FReply SMenuWidget::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return FReply::Handled();
}

void SMenuWidget::OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{

}

void SMenuWidget::OnMouseLeave(const FPointerEvent& MouseEvent)
{

}
