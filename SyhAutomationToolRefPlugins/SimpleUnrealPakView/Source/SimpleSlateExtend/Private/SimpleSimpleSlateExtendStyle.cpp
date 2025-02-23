// Copyright (C) RenZhai.2020.All Rights Reserved.

#include "SimpleSimpleSlateExtendStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Framework/Application/SlateApplication.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"

TSharedPtr< FSlateStyleSet > FSimpleSimpleSlateExtendStyle::StyleInstance = NULL;
FTextBlockStyle FSimpleSimpleSlateExtendStyle::ViewNormalText;
void FSimpleSimpleSlateExtendStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FSimpleSimpleSlateExtendStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FSimpleSimpleSlateExtendStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("SimpleSimpleSlateExtendStyle"));
	return StyleSetName;
}

#define IMAGE_BRUSH( RelativePath, ... ) FSlateImageBrush( Style->RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define BOX_BRUSH( RelativePath, ... ) FSlateBoxBrush( Style->RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define BORDER_BRUSH( RelativePath, ... ) FSlateBorderBrush( Style->RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define TTF_FONT( RelativePath, ... ) FSlateFontInfo( Style->RootToContentDir( RelativePath, TEXT(".ttf") ), __VA_ARGS__ )
#define OTF_FONT( RelativePath, ... ) FSlateFontInfo( Style->RootToContentDir( RelativePath, TEXT(".otf") ), __VA_ARGS__ )
#define DEFAULT_FONT(...) FCoreStyle::GetDefaultFontStyle(__VA_ARGS__)
const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);
const FVector2D Icon40x40(40.0f, 40.0f);

TSharedRef< FSlateStyleSet > FSimpleSimpleSlateExtendStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("SimpleSimpleSlateExtendStyle"));
	if (auto Tmp = IPluginManager::Get().FindPlugin("SimpleUnrealPakView"))
	{
		Style->SetContentRoot(Tmp->GetBaseDir() / TEXT("Resources"));
	}
	else
	{
		Style->SetContentRoot(FPaths::ProjectDir() / TEXT("Resources"));
	}
	
	ViewNormalText = FTextBlockStyle()
		.SetFont(DEFAULT_FONT("Regular", FCoreStyle::RegularTextSize))
		.SetColorAndOpacity(FSlateColor::UseForeground())
		.SetShadowOffset(FVector2D::ZeroVector)
		.SetShadowColorAndOpacity(FLinearColor::Black)
		.SetHighlightColor(FLinearColor(0.02f, 0.3f, 0.0f))
		.SetHighlightShape(BOX_BRUSH("Common/TextBlockHighlightShape", FMargin(3.f / 8.f)));

	Style->Set("SimpleUnrealPakView.OpenPluginWindow", new IMAGE_BRUSH(TEXT("ButtonIcon_40x"), Icon40x40));
	Style->Set("SceneOutliner.FolderClosed", new IMAGE_BRUSH("Icons/FolderClosed", Icon16x16));
	Style->Set("SceneOutliner.FolderOpen", new IMAGE_BRUSH("Icons/FolderOpen", Icon16x16));
	Style->Set("ExternalImagePicker.BlankImage", new IMAGE_BRUSH("Icons/BlankIcon", Icon16x16));

	Style->Set("FlatButton.DefaultTextStyle", FTextBlockStyle(ViewNormalText)
		.SetFont(DEFAULT_FONT("Bold", 16))
		.SetColorAndOpacity(FLinearColor(1.0f, 1.0f, 1.0f))
		.SetHighlightColor(FLinearColor(1.0f, 1.0f, 1.0f))
		.SetShadowOffset(FVector2D(1, 1))
		.SetShadowColorAndOpacity(FLinearColor(0, 0, 0, 0.9f)));

	Style->Set("FlatButton.FileTextStyle", FTextBlockStyle(ViewNormalText)
		.SetFont(DEFAULT_FONT("Regular", 14))
		.SetColorAndOpacity(FLinearColor(1.0f, 1.0f, 1.0f))
		.SetHighlightColor(FLinearColor(1.0f, 1.0f, 1.0f))
		.SetShadowOffset(FVector2D(1, 1))
		.SetShadowColorAndOpacity(FLinearColor(0, 0, 0, 0.9f)));

	return Style;
}

#undef IMAGE_BRUSH
#undef BOX_BRUSH
#undef BORDER_BRUSH
#undef TTF_FONT
#undef OTF_FONT
#undef DEFAULT_FONT

void FSimpleSimpleSlateExtendStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FSimpleSimpleSlateExtendStyle::Get()
{
	return *StyleInstance;
}
