#include "Base/Widget/Pin/SBlueprintPinWidget.h"
#include "Base/CommonMethod.h"
#include "Base/Entry/BlueprintPinEntry.h"
#include "SimpleBlueprintViewStyle.h"
#include "Widgets/Images/SLayeredImage.h"
#include "Widgets/Layout/SWrapBox.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


/** Original Pin Styles */
static const FName Pin_Connected("Graph.Pin.Connected");
static const FName Pin_Disconnected("Graph.Pin.Disconnected");

/** Variant A Pin Styles */
static const FName Pin_Connected_VarA("Graph.Pin.Connected_VarA");
static const FName Pin_Disconnected_VarA("Graph.Pin.Disconnected_VarA");

static const FName ArrayPin_Connected("Graph.ArrayPin.Connected");
static const FName ArrayPin_Disconnected("Graph.ArrayPin.Disconnected");

static const FName RefPin_Connected("Graph.RefPin.Connected");
static const FName RefPin_Disconnected("Graph.RefPin.Disconnected");

static const FName DelegatePin_Connected("Graph.DelegatePin.Connected");
static const FName DelegatePin_Disconnected("Graph.DelegatePin.Disconnected");

static const FName SetPin("Kismet.VariableList.SetTypeIcon");
static const FName MapPinKey("Kismet.VariableList.MapKeyTypeIcon");
static const FName MapPinValue("Kismet.VariableList.MapValueTypeIcon");

static const FName Pin_Background("Graph.Pin.Background");
static const FName Pin_BackgroundHovered("Graph.Pin.BackgroundHovered");

static const FName Pin_DiffOutline("Graph.Pin.DiffHighlight");

static const FName PosePin_Connected("Graph.PosePin.Connected");
static const FName PosePin_Disconnected("Graph.PosePin.Disconnected");

void SBlueprintPinWidget::Construct(const FArguments& InArgs)
{
	SetDisplayName(InArgs._DisplayName);


	TSharedRef<SWidget> PinIcon = SNew(SLayeredImage)
		.Image(GetPinIcon())
		.ColorAndOpacity(FLinearColor::Red);

	TSharedRef<SWidget> LabelAndValue = SNew(SWrapBox)
		.PreferredSize(200.f)
		+ SWrapBox::Slot()
		[
			SNew(STextBlock)
			.Text_Raw(this, &IBlueprintWidgetBase::GetDisplayNameText)
		];

	TSharedRef<SWidget> LeftWidget = SNullWidget::NullWidget;
	TSharedRef<SWidget> RightWidget = SNullWidget::NullWidget;
	
	LeftWidget = PinIcon;
	RightWidget = LabelAndValue;

	FMargin Padding(0,0, 4.f, 0);

	Super::Construct(Super::FArguments()
		.Content()
		[		
			SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.Padding(Padding)
				[
					LeftWidget
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				[
					RightWidget
				]
		]
	);
}

SBlueprintPinWidget::SBlueprintPinWidget() : 
	Super(),
	IBlueprintWidgetBase()
{
}

FReply SBlueprintPinWidget::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return FReply::Unhandled();
}

void SBlueprintPinWidget::OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	Super::OnMouseEnter(MyGeometry, MouseEvent);
}

void SBlueprintPinWidget::OnMouseLeave(const FPointerEvent& MouseEvent)
{
	Super::OnMouseLeave(MouseEvent);
}

bool SBlueprintPinWidget::InitializeSelf()
{
	check(IsInitialized());
	PinEntry = GetTypeSP<FBlueprintPinEntry>(GetEntry());
	return true;
}

bool SBlueprintPinWidget::DeinitializeSelf()
{
	PinEntry = nullptr;
	return true;
}

const FSlateBrush* SBlueprintPinWidget::GetPinIcon() const
{
	return FSimpleBlueprintViewStyle::Get().GetBrush(Pin_Disconnected);
}

EBlueprintPinType SBlueprintPinWidget::GetBlueprintPinType() const
{
	return GetPinEntry()->GetPinType();
}

TSharedPtr<FBlueprintPinEntry> SBlueprintPinWidget::GetPinEntry()
{
	return PinEntry;
}

const TSharedPtr<FBlueprintPinEntry> SBlueprintPinWidget::GetPinEntry() const
{
	return PinEntry;
}

TSharedPtr<SWidget> SBlueprintPinWidget::GetSWidget() noexcept
{
	return this->AsShared();
}

TSharedPtr<IBlueprintWidgetBase> SBlueprintPinWidget::GetWidgetBase() noexcept
{
	return GetTypeSP<IBlueprintWidgetBase, SBlueprintPinWidget>(this->AsShared());
}



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
