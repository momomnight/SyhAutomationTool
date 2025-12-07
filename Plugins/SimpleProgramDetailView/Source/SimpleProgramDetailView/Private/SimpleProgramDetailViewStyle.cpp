// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleProgramDetailViewStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Framework/Application/SlateApplication.h"
#if !IS_PROGRAM
#include "Slate/SlateGameResources.h"
#endif
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

TSharedPtr<FSlateStyleSet> FSimpleProgramDetailViewStyle::StyleInstance = nullptr;

void FSimpleProgramDetailViewStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FSimpleProgramDetailViewStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FSimpleProgramDetailViewStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("SimpleProgramDetailViewStyle"));
	return StyleSetName;
}

const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FSimpleProgramDetailViewStyle::Create()
{
	TSharedRef<FSimpleProgramPropertyEditorStyleSet> Style = MakeShareable(new FSimpleProgramPropertyEditorStyleSet);
	Style->Initialize();
	return Style;
}

void FSimpleProgramDetailViewStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FSimpleProgramDetailViewStyle::Get()
{
	return *StyleInstance;
}

FSimpleProgramDetailViewStyle::FSimpleProgramPropertyEditorStyleSet::FSimpleProgramPropertyEditorStyleSet()
	: FSlateStyleSet(FSimpleProgramDetailViewStyle::GetStyleSetName())
{
}

FSimpleProgramDetailViewStyle::FSimpleProgramPropertyEditorStyleSet::~FSimpleProgramPropertyEditorStyleSet()
{
}

void FSimpleProgramDetailViewStyle::FSimpleProgramPropertyEditorStyleSet::Initialize()
{
	if (TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin("SimpleProgramDetailView"))
	{
		SetContentRoot(Plugin->GetBaseDir() / TEXT("Resources"));
	}
	else
	{
		SetContentRoot(FPaths::ProjectDir() / TEXT("Resources"));
	}
	Set("SimpleProgramDetailView.OpenPluginWindow", new IMAGE_BRUSH_SVG(TEXT("PlaceholderButtonIcon"), Icon20x20));
#if IS_PROGRAM
	{
		//EditorStyle
		SetParentStyleName(FName("CoreStyle"));
		SetContentRoot(FPaths::EngineContentDir() / TEXT("Editor/Slate"));
		SetCoreContentRoot(FPaths::EngineContentDir() / TEXT("Slate"));

		FTextBlockStyle NormalText = Style->GetParentStyle()->GetWidgetStyle<FTextBlockStyle>("NormalText");

		{
			Set("PropertyEditor.Grid.TabIcon", new IMAGE_BRUSH("Icons/icon_PropertyMatrix_16px", Icon16x16));
			Set("PropertyEditor.Properties.TabIcon", new IMAGE_BRUSH("Icons/icon_tab_SelectionDetails_16x", Icon16x16));

			Set("PropertyEditor.RemoveColumn", new IMAGE_BRUSH("Common/PushPin_Down", Icon16x16, FColor(96, 194, 253, 255).ReinterpretAsLinear()));
			Set("PropertyEditor.AddColumn", new IMAGE_BRUSH("Common/PushPin_Up", Icon16x16, FColor(96, 194, 253, 255).ReinterpretAsLinear()));

			Set("PropertyEditor.AddColumnOverlay", new IMAGE_BRUSH("Common/TinyChalkArrow", FVector2D(71, 20), FColor(96, 194, 253, 255).ReinterpretAsLinear()));
			Set("PropertyEditor.AddColumnMessage", FTextBlockStyle(NormalText)
				.SetFont(DEFAULT_FONT("BoldCondensedItalic", 10))
				.SetColorAndOpacity(FColor(96, 194, 253, 255).ReinterpretAsLinear())
			);


			Set("PropertyEditor.AssetName.ColorAndOpacity", FLinearColor::White);

			Set("PropertyEditor.AssetThumbnailBorder", new FSlateRoundedBoxBrush(FStyleColors::Transparent, 4.0f, FStyleColors::InputOutline, 1.0f));
			Set("PropertyEditor.AssetThumbnailBorderHovered", new FSlateRoundedBoxBrush(FStyleColors::Transparent, 4.0f, FStyleColors::Hover2, 1.0f));
			Set("PropertyEditor.AssetTileItem.DropShadow", new BOX_BRUSH("Starship/ContentBrowser/drop-shadow", FMargin(4.0f / 64.0f)));

			Set("PropertyEditor.AssetClass", FTextBlockStyle(NormalText)
				.SetFont(DEFAULT_FONT("Regular", 10))
				.SetColorAndOpacity(FLinearColor::White)
				.SetShadowOffset(FVector2D(1, 1))
				.SetShadowColorAndOpacity(FLinearColor::Black)
			);

			const FButtonStyle AssetComboStyle = FButtonStyle()
				.SetNormal(BOX_BRUSH("Common/ButtonHoverHint", FMargin(4 / 16.0f), FLinearColor(1, 1, 1, 0.15f)))
				.SetHovered(BOX_BRUSH("Common/ButtonHoverHint", FMargin(4 / 16.0f), FLinearColor(1, 1, 1, 0.25f)))
				.SetPressed(BOX_BRUSH("Common/ButtonHoverHint", FMargin(4 / 16.0f), FLinearColor(1, 1, 1, 0.30f)))
				.SetNormalPadding(FMargin(0, 0, 0, 1))
				.SetPressedPadding(FMargin(0, 1, 0, 0));
			Set("PropertyEditor.AssetComboStyle", AssetComboStyle);

			Set("PropertyEditor.HorizontalDottedLine", new IMAGE_BRUSH("Common/HorizontalDottedLine_16x1px", FVector2D(16.0f, 1.0f), FLinearColor::White, ESlateBrushTileType::Horizontal));
			Set("PropertyEditor.VerticalDottedLine", new IMAGE_BRUSH("Common/VerticalDottedLine_1x16px", FVector2D(1.0f, 16.0f), FLinearColor::White, ESlateBrushTileType::Vertical));
			Set("PropertyEditor.SlateBrushPreview", new BOX_BRUSH("PropertyView/SlateBrushPreview_32px", Icon32x32, FMargin(3.f / 32.f, 3.f / 32.f, 15.f / 32.f, 13.f / 32.f)));

			Set("PropertyTable.TableRow", GetWidgetStyle<FTableRowStyle>("TableView.AlternatingRow"));
			Set("PropertyTable.HeaderRow", GetWidgetStyle<FHeaderRowStyle>("TableView.Header"));

			FWindowStyle InViewportDecoratorWindow = FStarshipCoreStyle::GetCoreStyle().GetWidgetStyle<FWindowStyle>("Window");
			InViewportDecoratorWindow.SetCornerRadius(4);

			Set("InViewportDecoratorWindow", InViewportDecoratorWindow);
			FLinearColor TransparentBackground = FStyleColors::Background.GetSpecifiedColor();
			TransparentBackground.A = 0.8f;
			Set("PropertyTable.InViewport.Header", new FSlateRoundedBoxBrush(FStyleColors::Title, FVector4(4.0f, 4.0f, 0.0f, 0.0f)));
			Set("PropertyTable.InViewport.Background", new FSlateRoundedBoxBrush(FSlateColor(TransparentBackground), 4.0f));
			// InViewportToolbar
			{
				FToolBarStyle InViewportToolbar = FStarshipCoreStyle::GetCoreStyle().GetWidgetStyle<FToolBarStyle>("SlimToolBar");
				InViewportToolbar.SetBackground(FSlateColorBrush(FStyleColors::Panel));
				InViewportToolbar.SetBackgroundPadding(FMargin(4.0f, 0.0f));
				InViewportToolbar.SetButtonPadding(0.0f);
				InViewportToolbar.SetIconSize(Icon16x16);
				InViewportToolbar.ButtonStyle.SetNormalPadding(FMargin(4, 4, 4, 4));
				InViewportToolbar.ButtonStyle.SetPressedPadding(FMargin(4, 5, 4, 3));
				Set("InViewportToolbar", InViewportToolbar);
			}
			const FTableViewStyle InViewportViewStyle = FTableViewStyle()
				.SetBackgroundBrush(FSlateNoResource());
			Set("PropertyTable.InViewport.ListView", InViewportViewStyle);

			Set("PropertyTable.InViewport.Row", FTableRowStyle(NormalTableRowStyle)
				.SetEvenRowBackgroundBrush(FSlateNoResource())
				.SetEvenRowBackgroundHoveredBrush(FSlateNoResource())
				.SetOddRowBackgroundBrush(FSlateNoResource())
				.SetOddRowBackgroundHoveredBrush(FSlateNoResource())
				.SetSelectorFocusedBrush(FSlateNoResource())
				.SetActiveBrush(FSlateNoResource())
				.SetActiveHoveredBrush(FSlateNoResource())
				.SetInactiveBrush(FSlateNoResource())
				.SetInactiveHoveredBrush(FSlateNoResource())
			);

			const FSplitterStyle TransparentSplitterStyle = FSplitterStyle()
				.SetHandleNormalBrush(FSlateNoResource())
				.SetHandleHighlightBrush(FSlateNoResource());
			Set("PropertyTable.InViewport.Splitter", TransparentSplitterStyle);

			float BorderPadding = 0.5f;
			Set("PropertyTable.CellBorder", new FSlateRoundedBoxBrush(FStyleColors::Transparent, 0.0f, FStyleColors::Background, BorderPadding));
			Set("PropertyTable.CurrentCellBorder", new FSlateRoundedBoxBrush(FStyleColors::Primary, 0.0f, FStyleColors::White, BorderPadding));
			Set("PropertyTable.SelectedCellBorder", new FSlateRoundedBoxBrush(FStyleColors::Primary, 0.0f, FStyleColors::Background, BorderPadding));
			Set("PropertyTable.EditModeCellBorder", new FSlateRoundedBoxBrush(FStyleColors::Primary, 0.0f, FStyleColors::Background, BorderPadding));

			Set("PropertyTable.Selection.Active", new IMAGE_BRUSH("Common/Selector", Icon8x8, SelectionColor));

			Set("PropertyTable.HeaderRow.Column.PathDelimiter", new IMAGE_BRUSH("Common/SmallArrowRight", Icon10x10));
			Set("PropertyTable.ColumnBorder", new BOX_BRUSH("Common/CellBorder", FMargin(4.f / 16.f), FStyleColors::Background));
			Set("PropertyTable.RowHeader.Background", new BOX_BRUSH("Old/Menu_Background", FMargin(4.f / 64.f)));
			Set("PropertyTable.RowHeader.BackgroundActive", new BOX_BRUSH("Old/Menu_Background", FMargin(4.f / 64.f), SelectionColor_Inactive));
			Set("PropertyTable.ReadOnlyEditModeCellBorder", new BORDER_BRUSH("Common/ReadOnlyEditModeCellBorder", FMargin(6.f / 32.f), SelectionColor));
			Set("PropertyTable.ReadOnlyCellBorder", new BOX_BRUSH("Common/ReadOnlyCellBorder", FMargin(4.f / 16.f), FLinearColor(0.1f, 0.1f, 0.1f, 0.5f)));
			Set("PropertyTable.ReadOnlySelectedCellBorder", new BOX_BRUSH("Common/ReadOnlySelectedCellBorder", FMargin(4.f / 16.f), FLinearColor(0.0f, 0.0f, 0.0f, 1.0f)));
			Set("PropertyTable.ReadOnlyCurrentCellBorder", new BOX_BRUSH("Common/ReadOnlyCurrentCellBorder", FMargin(4.f / 16.f), FLinearColor(0.0f, 0.0f, 0.0f, 1.0f)));
			Set("PropertyTable.Cell.DropDown.Background", new BOX_BRUSH("Common/GroupBorder", FMargin(4.f / 16.f)));
			Set("PropertyTable.ContentBorder", new BOX_BRUSH("Common/GroupBorder", FMargin(4.0f / 16.0f)));
			Set("PropertyTable.NormalFont", DEFAULT_FONT("Regular", 9));
			Set("PropertyTable.BoldFont", DEFAULT_FONT("Bold", 9));
			Set("PropertyTable.FilterFont", DEFAULT_FONT("Regular", 10));

			const FTableRowStyle PropertyEditorPropertyRowStyle = FTableRowStyle(NormalTableRowStyle)
				.SetEvenRowBackgroundBrush(FSlateColorBrush(FStyleColors::Panel))
				.SetOddRowBackgroundBrush(FSlateColorBrush(FStyleColors::Panel));

			Set("PropertyWindow.PropertyRow", PropertyEditorPropertyRowStyle);

			Set("PropertyWindow.FilterSearch", new IMAGE_BRUSH("Old/FilterSearch", Icon16x16));
			Set("PropertyWindow.FilterCancel", new IMAGE_BRUSH("Old/FilterCancel", Icon16x16));
			Set("PropertyWindow.Favorites_Disabled", new IMAGE_BRUSH("Icons/EmptyStar_16x", Icon16x16));
			Set("PropertyWindow.Locked", new CORE_IMAGE_BRUSH_SVG("Starship/Common/lock", Icon16x16));
			Set("PropertyWindow.Unlocked", new CORE_IMAGE_BRUSH_SVG("Starship/Common/lock-unlocked", Icon16x16));
			Set("PropertyWindow.DiffersFromDefault", new IMAGE_BRUSH_SVG("Starship/Common/ResetToDefault", Icon16x16));

			Set("PropertyWindow.NormalFont", FStyleFonts::Get().Small);
			Set("PropertyWindow.BoldFont", FStyleFonts::Get().SmallBold);
			Set("PropertyWindow.ItalicFont", DEFAULT_FONT("Italic", 8));
			Set("PropertyWindow.FilterFont", DEFAULT_FONT("Regular", 10));

			FSlateFontInfo MobilityFont = FStyleFonts::Get().Small;
			MobilityFont.LetterSpacing = 100;

			Set("PropertyWindow.MobilityFont", MobilityFont);
			Set("PropertyWindow.MobilityStatic", new IMAGE_BRUSH_SVG("Starship/Common/MobilityStatic", Icon16x16));
			Set("PropertyWindow.MobilityStationary", new IMAGE_BRUSH_SVG("Starship/Common/MobilityStationary", Icon16x16));
			Set("PropertyWindow.MobilityMoveable", new IMAGE_BRUSH_SVG("Starship/Common/MobilityMoveable", Icon16x16));

			Set("PropertyWindow.NoOverlayColor", new FSlateNoResource());
			Set("PropertyWindow.EditConstColor", new FSlateColorBrush(FColor(152, 152, 152, 80)));
			Set("PropertyWindow.FilteredColor", new FSlateColorBrush(FColor(0, 255, 0, 80)));
			Set("PropertyWindow.FilteredEditConstColor", new FSlateColorBrush(FColor(152, 152, 152, 80).ReinterpretAsLinear() * FColor(0, 255, 0, 255).ReinterpretAsLinear()));
			Set("PropertyWindow.CategoryBackground", new BOX_BRUSH("/PropertyView/CategoryBackground", FMargin(4.f / 16.f)));
			Set("PropertyWindow.CategoryForeground", FLinearColor::Black);
			Set("PropertyWindow.Button_Clear", new IMAGE_BRUSH("Icons/Cross_12x", Icon12x12));
			Set("PropertyWindow.Button_Ellipsis", new IMAGE_BRUSH("Icons/ellipsis_12x", Icon12x12));
			Set("PropertyWindow.Button_PickAsset", new IMAGE_BRUSH("Icons/pillarray_12x", Icon12x12));
			Set("PropertyWindow.Button_PickActor", new IMAGE_BRUSH("Icons/levels_16x", Icon12x12));

			Set("PropertyWindow.WindowBorder", new BOX_BRUSH("Common/GroupBorder", FMargin(4.0f / 16.0f)));

			FInlineEditableTextBlockStyle NameStyle(FCoreStyle::Get().GetWidgetStyle<FInlineEditableTextBlockStyle>("InlineEditableTextBlockStyle"));
			NameStyle.EditableTextBoxStyle.SetFont(DEFAULT_FONT("Regular", 11))
				.SetForegroundColor(FSlateColor(EStyleColor::White));
			NameStyle.TextStyle.SetFont(DEFAULT_FONT("Regular", 11))
				.SetColorAndOpacity(FSlateColor(EStyleColor::White));
			Set("DetailsView.ConstantTextBlockStyle", NameStyle.TextStyle);
			Set("DetailsView.NameTextBlockStyle", NameStyle);

			Set("DetailsView.NameChangeCommitted", new BOX_BRUSH("Common/EditableTextSelectionBackground", FMargin(4.f / 16.f)));
			Set("DetailsView.HyperlinkStyle", FTextBlockStyle(NormalText).SetFont(DEFAULT_FONT("Regular", 8)));

			FTextBlockStyle BPWarningMessageTextStyle = FTextBlockStyle(NormalText).SetFont(DEFAULT_FONT("Regular", 8));
			FTextBlockStyle BPWarningMessageHyperlinkTextStyle = FTextBlockStyle(BPWarningMessageTextStyle).SetColorAndOpacity(FLinearColor(0.25f, 0.5f, 1.0f));

			FButtonStyle EditBPHyperlinkButton = FButtonStyle()
				.SetNormal(BORDER_BRUSH("Old/HyperlinkDotted", FMargin(0, 0, 0, 3 / 16.0f), FLinearColor(0.25f, 0.5f, 1.0f)))
				.SetPressed(FSlateNoResource())
				.SetHovered(BORDER_BRUSH("Old/HyperlinkUnderline", FMargin(0, 0, 0, 3 / 16.0f), FLinearColor(0.25f, 0.5f, 1.0f)));

			FHyperlinkStyle BPWarningMessageHyperlinkStyle = FHyperlinkStyle()
				.SetUnderlineStyle(EditBPHyperlinkButton)
				.SetTextStyle(BPWarningMessageHyperlinkTextStyle)
				.SetPadding(FMargin(0.0f));

			Set("DetailsView.BPMessageHyperlinkStyle", BPWarningMessageHyperlinkStyle);
			Set("DetailsView.BPMessageTextStyle", BPWarningMessageTextStyle);

			Set("DetailsView.GroupSection", new FSlateNoResource());

			Set("DetailsView.PulldownArrow.Down", new CORE_IMAGE_BRUSH_SVG("Starship/Common/chevron-down", Icon16x16, FStyleColors::Foreground));
			Set("DetailsView.PulldownArrow.Down.Hovered", new CORE_IMAGE_BRUSH_SVG("Starship/Common/chevron-down", Icon16x16, FStyleColors::ForegroundHover));
			Set("DetailsView.PulldownArrow.Up", new CORE_IMAGE_BRUSH_SVG("Starship/Common/chevron-up", Icon16x16, FStyleColors::Foreground));
			Set("DetailsView.PulldownArrow.Up.Hovered", new CORE_IMAGE_BRUSH_SVG("Starship/Common/chevron-up", Icon16x16, FStyleColors::ForegroundHover));

			Set("DetailsView.EditRawProperties", new CORE_IMAGE_BRUSH_SVG("Starship/Common/layout-spreadsheet", Icon16x16, FLinearColor::White));
			Set("DetailsView.ViewOptions", new CORE_IMAGE_BRUSH_SVG("Starship/Common/settings", Icon16x16, FLinearColor::White));
			Set("DetailsView.EditConfigProperties", new IMAGE_BRUSH("Icons/icon_PropertyMatrix_16px", Icon16x16, FLinearColor::White));

			Set("DetailsView.CollapsedCategory", new FSlateColorBrush(FStyleColors::Header));
			Set("DetailsView.CollapsedCategory_Hovered", new FSlateColorBrush(FStyleColors::Hover));
			Set("DetailsView.CategoryTop", new FSlateColorBrush(FStyleColors::Header));
			Set("DetailsView.CategoryTop_Hovered", new FSlateColorBrush(FStyleColors::Hover));
			Set("DetailsView.CategoryBottom", new FSlateColorBrush(FStyleColors::Recessed));

			// these are not actually displayed as white, see PropertyEditorConstants::GetRowBackgroundColor
			Set("DetailsView.CategoryMiddle", new FSlateColorBrush(FStyleColors::White));
			Set("DetailsView.Highlight", new FSlateRoundedBoxBrush(FStyleColors::Transparent, 0.0f, FStyleColors::AccentBlue, 1.0f));

			Set("DetailsView.PropertyIsFavorite", new IMAGE_BRUSH("PropertyView/Favorites_Enabled", Icon12x12));
			Set("DetailsView.PropertyIsNotFavorite", new IMAGE_BRUSH("PropertyView/Favorites_Disabled", Icon12x12));
			Set("DetailsView.NoFavoritesSystem", new IMAGE_BRUSH("PropertyView/NoFavoritesSystem", Icon12x12));

			Set("DetailsView.Splitter", FSplitterStyle()
				.SetHandleNormalBrush(FSlateColorBrush(FStyleColors::Recessed))
				.SetHandleHighlightBrush(FSlateColorBrush(FStyleColors::Recessed))
			);

			Set("DetailsView.GridLine", new FSlateColorBrush(FStyleColors::Recessed));
			Set("DetailsView.SectionButton", FCheckBoxStyle(FStarshipCoreStyle::GetCoreStyle().GetWidgetStyle<FCheckBoxStyle>("FilterBar.BasicFilterButton")));

			Set("DetailsView.ChannelToggleButton", FCheckBoxStyle(FStarshipCoreStyle::GetCoreStyle().GetWidgetStyle<FCheckBoxStyle>("ToggleButtonCheckbox"))
				.SetUncheckedImage(FSlateRoundedBoxBrush(FStyleColors::Input, 4.0f, FStyleColors::DropdownOutline, 1.0f))
				.SetUncheckedHoveredImage(FSlateRoundedBoxBrush(FStyleColors::Input, 4.0f, FStyleColors::Hover, 1.0f))
				.SetUncheckedPressedImage(FSlateRoundedBoxBrush(FStyleColors::Hover, 4.0f, FStyleColors::DropdownOutline, 1.0f))
				.SetCheckedForegroundColor(FStyleColors::White)
				.SetCheckedImage(FSlateRoundedBoxBrush(FStyleColors::Primary, 4.0f, FStyleColors::DropdownOutline, 1.0f))
				.SetCheckedHoveredImage(FSlateRoundedBoxBrush(FStyleColors::Primary, 4.0f, FStyleColors::Hover, 1.0f))
				.SetCheckedPressedImage(FSlateRoundedBoxBrush(FStyleColors::Hover, 4.0f, FStyleColors::DropdownOutline, 1.0f))
				.SetPadding(FMargin(16, 4))
			);

			Set("DetailsView.CategoryFontStyle", FStyleFonts::Get().SmallBold);
			Set("DetailsView.CategoryTextStyle", FTextBlockStyle(NormalText)
				.SetFont(GetFontStyle("DetailsView.CategoryFontStyle"))
				.SetColorAndOpacity(FStyleColors::ForegroundHeader)
			);

			Set("DetailsView.CategoryTextStyleUpdate", FTextBlockStyle(NormalText)
				.SetFont(FStyleFonts::Get().Small)
				.SetColorAndOpacity(FStyleColors::ForegroundHeader)
				.SetTransformPolicy(ETextTransformPolicy::ToUpper)
			);

			FButtonStyle DetailsExtensionMenuButton = FButtonStyle(FStarshipCoreStyle::GetCoreStyle().GetWidgetStyle<FButtonStyle>("NoBorder"))
				.SetNormalForeground(FStyleColors::Foreground)
				.SetHoveredForeground(FStyleColors::ForegroundHover)
				.SetPressedForeground(FStyleColors::ForegroundHover)
				.SetDisabledForeground(FStyleColors::Foreground)
				.SetNormalPadding(FMargin(2, 2, 2, 2))
				.SetPressedPadding(FMargin(2, 3, 2, 1));

			Set("DetailsView.ExtensionToolBar.Button", DetailsExtensionMenuButton);

			FToolBarStyle DetailsExtensionToolBarStyle = FToolBarStyle(FStarshipCoreStyle::GetCoreStyle().GetWidgetStyle<FToolBarStyle>("SlimToolBar"))
				.SetButtonStyle(DetailsExtensionMenuButton)
				.SetExpandBrush(CORE_IMAGE_BRUSH_SVG("Starship/Common/ellipsis-vertical-narrow", FVector2D(4, 16)))
				.SetIconSize(Icon16x16)
				.SetBackground(FSlateNoResource())
				.SetLabelPadding(FMargin(0))
				.SetComboButtonPadding(FMargin(0))
				.SetBlockPadding(FMargin(0))
				.SetIndentedBlockPadding(FMargin(0))
				.SetBackgroundPadding(FMargin(0))
				.SetButtonPadding(FMargin(0))
				.SetCheckBoxPadding(FMargin(0))
				.SetSeparatorBrush(FSlateNoResource())
				.SetSeparatorPadding(FMargin(0));

			Set("DetailsView.ExtensionToolBar", DetailsExtensionToolBarStyle);

			Set("DetailsView.ArrayDropShadow", new IMAGE_BRUSH("Common/ArrayDropShadow", FVector2D(32, 2)));

			Set("DetailsView.TreeView.TableRow", FTableRowStyle()
				.SetEvenRowBackgroundBrush(FSlateNoResource())
				.SetEvenRowBackgroundHoveredBrush(FSlateNoResource())
				.SetOddRowBackgroundBrush(FSlateNoResource())
				.SetOddRowBackgroundHoveredBrush(FSlateNoResource())
				.SetSelectorFocusedBrush(FSlateNoResource())
				.SetActiveBrush(FSlateNoResource())
				.SetActiveHoveredBrush(FSlateNoResource())
				.SetInactiveBrush(FSlateNoResource())
				.SetInactiveHoveredBrush(FSlateNoResource())
				.SetTextColor(DefaultForeground)
				.SetSelectedTextColor(InvertedForeground)
				.SetDropIndicator_Above(BOX_BRUSH("Common/DropZoneIndicator_Above", FMargin(10.0f / 16.0f, 10.0f / 16.0f, 0.f, 0.f), SelectionColor))
				.SetDropIndicator_Onto(BOX_BRUSH("Common/DropZoneIndicator_Onto", FMargin(4.0f / 16.0f), SelectionColor))
				.SetDropIndicator_Below(BOX_BRUSH("Common/DropZoneIndicator_Below", FMargin(10.0f / 16.0f, 0.f, 0.f, 10.0f / 16.0f), SelectionColor))
			);

			Set("DetailsView.DropZone.Below", new BOX_BRUSH("Common/VerticalBoxDropZoneIndicator_Below", FMargin(10.0f / 16.0f, 0, 0, 10.0f / 16.0f), SelectionColor_Subdued));

			FButtonStyle NameAreaButton = FButtonStyle(Button)
				.SetNormalPadding(FMargin(6, 3))
				.SetPressedPadding(FMargin(6, 3));
			Set("DetailsView.NameAreaButton", NameAreaButton);

			Set("DetailsView.NameAreaComboButton", FComboButtonStyle(GetWidgetStyle<FComboButtonStyle>("ComboButton"))
				.SetButtonStyle(NameAreaButton)
				.SetDownArrowPadding(FMargin(4, 0, 0, 0))
				.SetContentPadding(FMargin(4, 0, 0, 0))
			);

		}
	}
#elif WITH_EDITOR
	//当从独立程序启动时，无法获得改编辑器风格，可直接拷贝风格设置流程，当从编辑器启动时，一般来说可直接获取
	SetParentStyleName(FAppStyle::GetAppStyleSetName());
#endif
}
