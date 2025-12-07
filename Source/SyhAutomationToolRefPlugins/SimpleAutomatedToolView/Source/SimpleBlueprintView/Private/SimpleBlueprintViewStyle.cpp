// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleBlueprintViewStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Framework/Application/SlateApplication.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"
#include "Misc/Paths.h"

#if !IS_PROGRAM
#include "Slate/SlateGameResources.h"
#endif


TSharedPtr<FSimpleBlueprintViewStyle::FSimpleBlueprintEditorStyleSet>  FSimpleBlueprintViewStyle::EditorStyleInstance = nullptr;

void FSimpleBlueprintViewStyle::Initialize()
{
	if (!EditorStyleInstance.IsValid())
	{
		Create();
	}
}

void FSimpleBlueprintViewStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*EditorStyleInstance);
	ensure(EditorStyleInstance.IsUnique());
	EditorStyleInstance.Reset();
}

FName FSimpleBlueprintViewStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("SimpleBlueprintViewStyle"));
	return StyleSetName;
}

const FVector2D Icon7x16(7.0f, 16.0f);
const FVector2D Icon8x4(8.0f, 4.0f);
const FVector2D Icon16x4(16.0f, 4.0f);
const FVector2D Icon8x8(8.0f, 8.0f);
const FVector2D Icon10x10(10.0f, 10.0f);
const FVector2D Icon12x12(12.0f, 12.0f);
const FVector2D Icon12x16(12.0f, 16.0f);
const FVector2D Icon14x14(14.0f, 14.0f);
const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon16x20(16.0f, 20.0f);
const FVector2D Icon20x20(20.0f, 20.0f);
const FVector2D Icon22x22(22.0f, 22.0f);
const FVector2D Icon24x24(24.0f, 24.0f);
const FVector2D Icon25x25(25.0f, 25.0f);
const FVector2D Icon32x32(32.0f, 32.0f);
const FVector2D Icon40x40(40.0f, 40.0f);
const FVector2D Icon48x48(48.0f, 48.0f);
const FVector2D Icon64x64(64.0f, 64.0f);
const FVector2D Icon36x24(36.0f, 24.0f);
const FVector2D Icon128x128(128.0f, 128.0f);

void FSimpleBlueprintViewStyle::Create()
{
	if (!EditorStyleInstance.IsValid())
	{
		EditorStyleInstance = CreateEditorStyle();
		FSlateStyleRegistry::RegisterSlateStyle(*EditorStyleInstance);
	}	
}


TSharedRef<FSimpleBlueprintViewStyle::FSimpleBlueprintEditorStyleSet> FSimpleBlueprintViewStyle::CreateEditorStyle()
{
	TSharedRef<FSimpleBlueprintViewStyle::FSimpleBlueprintEditorStyleSet> Style = MakeShareable(new FSimpleBlueprintViewStyle::FSimpleBlueprintEditorStyleSet);
	Style->Initialize();
	return Style;
}

void FSimpleBlueprintViewStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FSimpleBlueprintViewStyle::Get()
{
	return *EditorStyleInstance;
}

FSimpleBlueprintViewStyle::FSimpleBlueprintEditorStyleSet::FSimpleBlueprintEditorStyleSet() 
	: FSlateStyleSet(FSimpleBlueprintViewStyle::GetStyleSetName())
{
}

FSimpleBlueprintViewStyle::FSimpleBlueprintEditorStyleSet::~FSimpleBlueprintEditorStyleSet()
{
}

void FSimpleBlueprintViewStyle::FSimpleBlueprintEditorStyleSet::Initialize()
{
	//ThisModuleStyle
	if (TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin("SimpleAutomatedToolView"))
	{
		SetContentRoot(Plugin->GetBaseDir() / TEXT("Resources"));
	}
	else
	{
		SetContentRoot(FPaths::ProjectDir() / TEXT("Resources"));
	}

	Set("SimpleBlueprintView.OpenPluginWindow", new IMAGE_BRUSH_SVG(TEXT("PlaceholderButtonIcon"), Icon20x20));

#if IS_PROGRAM
	{
		//EditorStyle
		SetParentStyleName(FName("CoreStyle"));
		SetContentRoot(FPaths::EngineContentDir() / TEXT("Editor/Slate"));
		SetCoreContentRoot(FPaths::EngineContentDir() / TEXT("Slate"));

		FTextBlockStyle NormalText = GetParentStyle()->GetWidgetStyle<FTextBlockStyle>("NormalText");

		{
			Set("Graph.ForegroundColor", FLinearColor(218.0f / 255.0f, 218.0f / 255.0f, 218.0f / 255.0f, 1.0f));

			Set("Graph.TitleBackground", new BOX_BRUSH("Old/Graph/GraphTitleBackground", FMargin(0)));
			Set("Graph.Shadow", new BOX_BRUSH("Old/Window/WindowBorder", 0.48f));
			Set("Graph.Arrow", new IMAGE_BRUSH("Old/Graph/Arrow", Icon16x16));
			Set("Graph.ExecutionBubble", new IMAGE_BRUSH("Old/Graph/ExecutionBubble", Icon16x16));

			Set("Graph.PlayInEditor", new BOX_BRUSH("/Graph/RegularNode_shadow_selected", FMargin(18.0f / 64.0f)));
			Set("Graph.ReadOnlyBorder", new BOX_BRUSH("/Graph/Graph_readonly_border", FMargin(18.0f / 64.0f)));

			Set("Graph.Panel.SolidBackground", new IMAGE_BRUSH("/Graph/GraphPanel_SolidBackground", FVector2D(16, 16), FLinearColor::White, ESlateBrushTileType::Both));
			Set("Graph.Panel.GridLineColor", FLinearColor(0.035f, 0.035f, 0.035f));
			Set("Graph.Panel.GridRuleColor", FLinearColor(0.008f, 0.008f, 0.008f));
			Set("Graph.Panel.GridCenterColor", FLinearColor(0.000f, 0.000f, 0.000f));

			Set("Graph.Panel.GridRulePeriod", 8.0f); // should be a strictly positive integral value

			Set("Graph.Node.Separator", new IMAGE_BRUSH("Old/Graph/NodeVerticalSeparator", FVector2D(8, 8)));
			Set("Graph.Node.TitleBackground", new BOX_BRUSH("Old/Graph/NodeTitleBackground", FMargin(12.0f / 64)));
			Set("Graph.Node.NodeBackground", new BOX_BRUSH("Old/Graph/NodeBackground", FMargin(12.0f / 64)));

			Set("Graph.Node.Body", new BOX_BRUSH("/Graph/RegularNode_body", FMargin(16.f / 64.f, 25.f / 64.f, 16.f / 64.f, 16.f / 64.f)));
			Set("Graph.Node.TintedBody", new BOX_BRUSH("/Graph/TintedNode_body", FMargin(16.f / 64.f, 25.f / 64.f, 16.f / 64.f, 16.f / 64.f)));
			Set("Graph.Node.DisabledBanner", new IMAGE_BRUSH("/Graph/GraphPanel_StripesBackground", FVector2D(64, 64), FLinearColor(0.5f, 0.5f, 0.5f, 0.3f), ESlateBrushTileType::Both));
			Set("Graph.Node.DevelopmentBanner", new IMAGE_BRUSH("/Graph/GraphPanel_StripesBackground", FVector2D(64, 64), FLinearColor::Yellow * FLinearColor(1.f, 1.f, 1.f, 0.3f), ESlateBrushTileType::Both));
			Set("Graph.Node.TitleGloss", new BOX_BRUSH("/Graph/RegularNode_title_gloss", FMargin(12.0f / 64.0f)));
			Set("Graph.Node.ColorSpill", new BOX_BRUSH("/Graph/RegularNode_color_spill", FMargin(8.0f / 64.0f, 3.0f / 32.0f, 0, 0)));
			Set("Graph.Node.TitleHighlight", new BOX_BRUSH("/Graph/RegularNode_title_highlight", FMargin(16.0f / 64.0f, 1.0f, 16.0f / 64.0f, 0.0f)));
			Set("Graph.Node.IndicatorOverlay", new IMAGE_BRUSH("/Graph/IndicatorOverlay_color_spill", FVector2D(128.f, 32.f)));

			Set("Graph.Node.ShadowSize", FVector2D(12, 12));
			Set("Graph.Node.ShadowSelected", new BOX_BRUSH("/Graph/RegularNode_shadow_selected", FMargin(18.0f / 64.0f)));
			Set("Graph.Node.Shadow", new BOX_BRUSH("/Graph/RegularNode_shadow", FMargin(18.0f / 64.0f)));

			Set("Graph.Node.DiffHighlight", new BOX_BRUSH("/Graph/RegularNode_DiffHighlight", FMargin(18.0f / 64.0f)));
			Set("Graph.Node.DiffHighlightShading", new BOX_BRUSH("/Graph/RegularNode_DiffHighlightShading", FMargin(18.0f / 64.0f)));

			Set("Graph.Node.RerouteShadow", new IMAGE_BRUSH("/Graph/RerouteNode_shadow", FVector2D(64.0f, 64.0f)));
			Set("Graph.Node.RerouteShadowSelected", new IMAGE_BRUSH("/Graph/RerouteNode_shadow_selected", FVector2D(64.0f, 64.0f)));

			Set("Graph.Node.RerouteDiffHighlight", new BOX_BRUSH("/Graph/RerouteNode_DiffHighlight", FMargin(18.0f / 64.0f)));
			Set("Graph.Node.RerouteDiffHighlightShading", new BOX_BRUSH("/Graph/RerouteNode_DiffHighlightShading", FMargin(18.0f / 64.0f)));

			Set("Graph.CompactNode.ShadowSelected", new BOX_BRUSH("/Graph/MathNode_shadow_selected", FMargin(18.0f / 64.0f)));

			Set("Graph.CompactNode.DiffHighlight", new BOX_BRUSH("/Graph/MathNode_DiffHighlight", FMargin(18.0f / 64.0f)));
			Set("Graph.CompactNode.DiffHighlightShading", new BOX_BRUSH("/Graph/MathNode_DiffHighlightShading", FMargin(18.0f / 64.0f)));

			Set("Graph.Node.CommentBubble", new BOX_BRUSH("Old/Graph/CommentBubble", FMargin(8 / 32.0f)));
			Set("Graph.Node.CommentArrow", new IMAGE_BRUSH("Old/Graph/CommentBubbleArrow", FVector2D(8, 8)));
			Set("Graph.Node.CommentFont", DEFAULT_FONT("Regular", 10));
			Set("Graph.Node.Comment.BubbleOffset", FMargin(8, 0, 0, 0));
			Set("Graph.Node.Comment.PinIconPadding", FMargin(0, 2, 0, 0));
			Set("Graph.Node.Comment.Handle", new IMAGE_BRUSH_SVG("Starship/GraphEditors/Comment_Handle", FVector2D(16.0f, 16.0f)));
			Set("Graph.Node.Comment.BubblePadding", FVector2D(3, 3));
			Set("Graph.Node.Comment.BubbleWidgetMargin", FMargin(4, 4));


			Set("Graph.VarNode.Body", new BOX_BRUSH("/Graph/VarNode_body", FMargin(16.f / 64.f, 12.f / 28.f)));
			Set("Graph.VarNode.ColorSpill", new IMAGE_BRUSH("/Graph/VarNode_color_spill", FVector2D(132, 28)));
			Set("Graph.VarNode.Gloss", new BOX_BRUSH("/Graph/VarNode_gloss", FMargin(16.f / 64.f, 16.f / 28.f, 16.f / 64.f, 4.f / 28.f)));
			Set("Graph.VarNode.IndicatorOverlay", new IMAGE_BRUSH("/Graph/IndicatorOverlay_color_spill", FVector2D(64.f, 28.f)));

			Set("Graph.VarNode.ShadowSelected", new BOX_BRUSH("/Graph/VarNode_shadow_selected", FMargin(26.0f / 64.0f)));
			Set("Graph.VarNode.Shadow", new BOX_BRUSH("/Graph/VarNode_shadow", FMargin(26.0f / 64.0f)));

			Set("Graph.VarNode.DiffHighlight", new BOX_BRUSH("/Graph/VarNode_DiffHighlight", FMargin(18.0f / 64.0f)));
			Set("Graph.VarNode.DiffHighlightShading", new BOX_BRUSH("/Graph/VarNode_DiffHighlightShading", FMargin(18.0f / 64.0f)));


			// Special style for switch statements default pin label
			{
				Set("Graph.Node.DefaultPinName", FTextBlockStyle(NormalText)
					.SetFont(DEFAULT_FONT("Italic", 9))
					.SetColorAndOpacity(FLinearColor(218.0f / 255.0f, 218.0f / 255.0f, 218.0f / 255.0f))
					.SetShadowOffset(FVector2D::ZeroVector)
					.SetShadowColorAndOpacity(FLinearColor(0.8f, 0.8f, 0.8f, 0.5))
				);
			}
			Set("Graph.Pin.DefaultPinSeparator", new IMAGE_BRUSH("/Graph/PinSeparator", FVector2D(64, 8)));

			/** Original Pin Styles */
			Set("Graph.Pin.Connected", new IMAGE_BRUSH("/Graph/Pin_connected", FVector2D(11, 11)));
			Set("Graph.Pin.Disconnected", new IMAGE_BRUSH("/Graph/Pin_disconnected", FVector2D(11, 11)));
			Set("Graph.ArrayPin.Connected", new IMAGE_BRUSH("/Graph/ArrayPin_connected", FVector2D(11, 11)));
			Set("Graph.ArrayPin.Disconnected", new IMAGE_BRUSH("/Graph/ArrayPin_disconnected", FVector2D(11, 11)));
			Set("Graph.RefPin.Connected", new IMAGE_BRUSH("/Graph/RefPin_connected", FVector2D(11, 11)));
			Set("Graph.RefPin.Disconnected", new IMAGE_BRUSH("/Graph/RefPin_disconnected", FVector2D(11, 11)));

			Set("Graph.Pin.CopyNodePinLeft_Connected", new IMAGE_BRUSH("/Graph/CopyNodePinLeft_connected", FVector2D(12, 24)));
			Set("Graph.Pin.CopyNodePinLeft_Disconnected", new IMAGE_BRUSH("/Graph/CopyNodePinLeft_disconnected", FVector2D(12, 24)));

			Set("Graph.Pin.CopyNodePinRight_Connected", new IMAGE_BRUSH("/Graph/CopyNodePinRight_connected", FVector2D(12, 24)));
			Set("Graph.Pin.CopyNodePinRight_Disconnected", new IMAGE_BRUSH("/Graph/CopyNodePinRight_disconnected", FVector2D(12, 24)));

			/** Variant A Pin Styles */
			Set("Graph.Pin.Connected_VarA", new IMAGE_BRUSH("/Graph/Pin_connected_VarA", FVector2D(15, 11)));
			Set("Graph.Pin.Disconnected_VarA", new IMAGE_BRUSH("/Graph/Pin_disconnected_VarA", FVector2D(15, 11)));

			Set("Graph.DelegatePin.Connected", new IMAGE_BRUSH("/Graph/DelegatePin_Connected", FVector2D(11, 11)));
			Set("Graph.DelegatePin.Disconnected", new IMAGE_BRUSH("/Graph/DelegatePin_Disconnected", FVector2D(11, 11)));

			Set("Graph.Replication.AuthorityOnly", new IMAGE_BRUSH("/Graph/AuthorityOnly", FVector2D(32, 32)));
			Set("Graph.Replication.ClientEvent", new IMAGE_BRUSH("/Graph/ClientEvent", FVector2D(32, 32)));
			Set("Graph.Replication.Replicated", new IMAGE_BRUSH("/Graph/Replicated", FVector2D(32, 32)));

			Set("Graph.Editor.EditorOnlyIcon", new IMAGE_BRUSH("/Graph/EditorOnly", FVector2D(32, 32)));

			Set("Graph.Event.InterfaceEventIcon", new IMAGE_BRUSH("/Graph/InterfaceEventIcon", FVector2D(32, 32)));

			Set("Graph.Latent.LatentIcon", new IMAGE_BRUSH("/Graph/LatentIcon", FVector2D(32, 32)));
			Set("Graph.Message.MessageIcon", new IMAGE_BRUSH("/Graph/MessageIcon", FVector2D(32, 32)));

			Set("Graph.ExecPin.Connected", new IMAGE_BRUSH("Old/Graph/ExecPin_Connected", Icon12x16));
			Set("Graph.ExecPin.Disconnected", new IMAGE_BRUSH("Old/Graph/ExecPin_Disconnected", Icon12x16));
			Set("Graph.ExecPin.ConnectedHovered", new IMAGE_BRUSH("Old/Graph/ExecPin_Connected", Icon12x16, FLinearColor(0.8f, 0.8f, 0.8f)));
			Set("Graph.ExecPin.DisconnectedHovered", new IMAGE_BRUSH("Old/Graph/ExecPin_Disconnected", Icon12x16, FLinearColor(0.8f, 0.8f, 0.8f)));

			const FVector2D Icon15x28(15.0f, 28.0f);
			Set("Graph.PosePin.Connected", new IMAGE_BRUSH_SVG("Starship/AnimationBlueprintEditor/AnimationGraphPose", Icon16x16));
			Set("Graph.PosePin.Disconnected", new IMAGE_BRUSH_SVG("Starship/AnimationBlueprintEditor/AnimationGraphPoseDisconnected", Icon16x16));
			Set("Graph.PosePin.ConnectedHovered", new IMAGE_BRUSH_SVG("Starship/AnimationBlueprintEditor/AnimationGraphPose", Icon16x16, FLinearColor(0.8f, 0.8f, 0.8f)));
			Set("Graph.PosePin.DisconnectedHovered", new IMAGE_BRUSH_SVG("Starship/AnimationBlueprintEditor/AnimationGraphPoseDisconnected", Icon16x16, FLinearColor(0.8f, 0.8f, 0.8f)));

			// Events Exec Pins
			Set("Graph.ExecEventPin.Connected", new IMAGE_BRUSH("Graph/EventPin_Connected", Icon16x16));
			Set("Graph.ExecEventPin.Disconnected", new IMAGE_BRUSH("Graph/EventPin_Disconnected", Icon16x16));
			Set("Graph.ExecEventPin.ConnectedHovered", new IMAGE_BRUSH("Graph/EventPin_Connected", Icon16x16, FLinearColor(0.8f, 0.8f, 0.8f)));
			Set("Graph.ExecEventPin.DisconnectedHovered", new IMAGE_BRUSH("Graph/EventPin_Disconnected", Icon16x16, FLinearColor(0.8f, 0.8f, 0.8f)));

			Set("Graph.WatchedPinIcon_Pinned", new IMAGE_BRUSH("Old/Graph/WatchedPinIcon_Pinned", Icon16x16));

			Set("Graph.Pin.BackgroundHovered", new IMAGE_BRUSH("/Graph/Pin_hover_cue", FVector2D(32, 8)));
			Set("Graph.Pin.Background", new FSlateNoResource());
			Set("Graph.Pin.DiffHighlight", new IMAGE_BRUSH("/Graph/Pin_DiffHighlight", FVector2D(32, 8)));

			Set("Graph.Pin.ObjectSet", new IMAGE_BRUSH("Old/Graph/Pin_ObjectSet", Icon12x12));
			Set("Graph.Pin.ObjectEmpty", new IMAGE_BRUSH("Old/Graph/Pin_ObjectEmpty", Icon12x12));

			Set("Graph.Pin.Dummy", new IMAGE_BRUSH("/Graph/Pin_dummy", FVector2D(15, 11)));

			Set("Graph.ConnectorFeedback.Border", new BOX_BRUSH("Old/Menu_Background", FMargin(8.0f / 64.0f)));
			Set("Graph.ConnectorFeedback.OK", new IMAGE_BRUSH("Old/Graph/Feedback_OK", Icon16x16));
			Set("Graph.ConnectorFeedback.OKWarn", new IMAGE_BRUSH("Old/Graph/Feedback_OKWarn", Icon16x16));
			Set("Graph.ConnectorFeedback.Error", new IMAGE_BRUSH("Old/Graph/Feedback_Error", Icon16x16));
			Set("Graph.ConnectorFeedback.NewNode", new IMAGE_BRUSH("Old/Graph/Feedback_NewNode", Icon16x16));
			Set("Graph.ConnectorFeedback.ViaCast", new IMAGE_BRUSH("Old/Graph/Feedback_ConnectViaCast", Icon16x16));
			Set("Graph.ConnectorFeedback.ShowNode", new IMAGE_BRUSH("Graph/Feedback_ShowNode", Icon16x16));

			Set("MarqueeSelection", new BORDER_BRUSH("Old/DashedBorder", FMargin(6.0f / 32.0f)));

			Set("Graph.ZoomText", FTextBlockStyle(NormalText)
				.SetFont(DEFAULT_FONT("BoldCondensed", 16))
			);
		}
	}
#elif WITH_EDITOR
	//当从独立程序启动时，无法获得改编辑器风格，可直接拷贝风格设置流程，当从编辑器启动时，一般来说可直接获取
	SetParentStyleName(FAppStyle::GetAppStyleSetName());
#endif

}
