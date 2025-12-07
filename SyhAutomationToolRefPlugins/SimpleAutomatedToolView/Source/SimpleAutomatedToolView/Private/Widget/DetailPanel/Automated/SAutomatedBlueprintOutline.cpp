#include "Widget/DetailPanel/Automated/SAutomatedBlueprintOutline.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Input/SSearchBox.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Layout/SExpandableArea.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Layout/SBox.h"
#include "DllExports/AutomationToolCommonMethod.h"


#define LOCTEXT_NAMESPACE "AutomatedBlueprintOutline"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

SAutomatedBlueprintOutline::SAutomatedBlueprintOutline()
{
}

void SAutomatedBlueprintOutline::Construct(const FArguments& InArgs)
{
	OnCommandButtonClicked = InArgs._OnCommandButtonClicked;


	TSharedRef<SHorizontalBox> SearchBox = SNew(SHorizontalBox)
	+ SHorizontalBox::Slot()
	[	//可以尝试添加按钮
		SNew(SSearchBox)
	];


	TSharedRef<SScrollBox> Outline =
	SNew(SScrollBox) 
	+ SScrollBox::Slot()
	[
		SNew(SExpandableArea)
		.HeaderContent()
		[
			SNew(STextBlock)//尝试动态获取
				.Text(LOCTEXT("AutomatedBlueprintOutline", "Blueprint Outline"))
		]
		.BodyContent()
		[
			SAssignNew(VerticalBox, SVerticalBox)
		]
	];

	ChildSlot
	[	//SizeBox
		SNew(SBox)
		.WidthOverride(270)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.AutoHeight()
			[
				SearchBox
			]
			+ SVerticalBox::Slot()
			.FillHeight(1.f)
			[
				Outline
			]
		]
	];

	OnSearchCommand(TEXT("")); //初始化
}

FReply SAutomatedBlueprintOutline::OnSearch() const
{
	return FReply::Handled();
}

FReply SAutomatedBlueprintOutline::OnClicked(ECommandProtocol InProtocolType)
{
	return OnCommandButtonClicked.ExecuteIfBound(InProtocolType) ? FReply::Handled() : FReply::Unhandled();
}

void SAutomatedBlueprintOutline::OnSearchCommand(const FString& InCommand)
{
	TArray<FString> CommandList = AutomationToolCommonMethod::GetEnumMemberNames<ECommandProtocol>();
	VerticalBox->ClearChildren();

	for (int32 I = 0; I < CommandList.Num(); I++)
	{
		FString& Temp = CommandList[I];
		VerticalBox->AddSlot()
			.AutoHeight()
			[
				SNew(SButton)
				.DesiredSizeScale(FVector2D(1, 1.2))
				.VAlign(VAlign_Center)
				.OnClicked(this, &SAutomatedBlueprintOutline::OnClicked, (ECommandProtocol)I)
				[
					SNew(STextBlock)
					.Text(FText::FromString(Temp))
				]
			];
	}

}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

#undef LOCTEXT_NAMESPACE