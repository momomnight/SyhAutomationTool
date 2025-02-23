// Copyright (C) RenZhai.2020.All Rights Reserved.

#include "SimpleUnrealPakView.h"
#include "SimpleUnrealPakViewStyle.h"
#include "SimpleUnrealPakViewCommands.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "SimpleUnrealPakViewType.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Layout/SScrollBox.h"
#include "FileTree/FileParsing.h"
#include "FileTree/SFolder.h"

static const FName SimpleUnrealPakViewTabName("SimpleUnrealPakView");

#define LOCTEXT_NAMESPACE "FSimpleUnrealPakViewModule"

void FSimpleUnrealPakViewModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FSimpleUnrealPakViewStyle::Initialize();
	FSimpleUnrealPakViewStyle::ReloadTextures();

	FSimpleUnrealPakViewCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	SimpleOneParamDelegate.BindRaw(this, &FSimpleUnrealPakViewModule::UpdateFile);
}

void FSimpleUnrealPakViewModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FSimpleUnrealPakViewStyle::Shutdown();

	FSimpleUnrealPakViewCommands::Unregister();
}

TSharedRef<SWidget> FSimpleUnrealPakViewModule::SpawnByUnrealPakFileTreeTab()
{
	return SNew(SOverlay)

		+SOverlay::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		[
			SNew(SImage)
			.Image(FSimpleUnrealPakViewStyle::Get().GetBrush("ExternalImagePicker.BlankImage"))
		]

		+ SOverlay::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		[
			SAssignNew(ScrollBox,SScrollBox)
			.Orientation(Orient_Vertical)
		];
}

void FSimpleUnrealPakViewModule::UpdateFile(const TArray<FString> &Files)
{
	if (ScrollBox.IsValid())
	{
		SimpleSlateExtend::FFileList FileList;
		SimpleSlateExtend::FilesParsing(Files[0], FileList);

		ScrollBox->ClearChildren();
		ScrollBox->AddSlot()
		[
			SNew(SFolder,FileList)
		];
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSimpleUnrealPakViewModule, SimpleUnrealPakView)