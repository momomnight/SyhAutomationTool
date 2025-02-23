// Fill out your copyright notice in the Description page of Project Settings.

#include "UMG/UI_ViewMenu.h"
#include "Components/VerticalBox.h"
#include "SimpleUnrealPakView.h"
#include "SimpleUnrealPakViewType.h"
#include "Components/MultiLineEditableTextBox.h"
#include "Components/Button.h"
#include "SimpleHotPakBPLibrary.h"
#include "Register/SimpleUEViewConfigurationInfor.h"
#include "DesktopPlatformModule.h"

#define LOCTEXT_NAMESPACE "UI_ViewMenu"

void UUI_ViewMenu::NativeConstruct()
{
	Super::NativeConstruct();

	ConfigInfor = NewObject<USimpleUEViewConfigurationInfor>(this);
	
	//bind widget
	PakPath->OnTextCommitted.AddDynamic(this, &UUI_ViewMenu::CommitPakPath);
	AES->OnTextCommitted.AddDynamic(this, &UUI_ViewMenu::CommitAES);
	MountPoint->OnTextCommitted.AddDynamic(this, &UUI_ViewMenu::CommitMountPoint);
	LoadPath->OnClicked.AddDynamic(this, &UUI_ViewMenu::OnClickLoadPath);
	AnalysisPak->OnClicked.AddDynamic(this, &UUI_ViewMenu::OnClickAnalysisPak);

	ViewProtWorld = GetWorld();

	TSharedRef<SWidget> ListWidget = ContentBox->TakeWidget();
	TSharedRef<SVerticalBox> VerticalWidget = StaticCastSharedRef<SVerticalBox>(ListWidget);
	FSimpleUnrealPakViewModule& UnrealPakViewModule = FModuleManager::LoadModuleChecked<FSimpleUnrealPakViewModule>(TEXT("SimpleUnrealPakView"));

	VerticalWidget->AddSlot()
	.FillHeight(1.f)
	[
		UnrealPakViewModule.SpawnByUnrealPakFileTreeTab()
	];	
}

void UUI_ViewMenu::NativeDestruct()
{
	Super::NativeDestruct();

	if (ConfigInfor)
	{
		ConfigInfor->ConditionalBeginDestroy();
		ConfigInfor = NULL;
	}
}

void UUI_ViewMenu::CommitPakPath(const FText& Text, ETextCommit::Type CommitMethod)
{
	ConfigInfor->PakPath = Text.ToString();
}

void UUI_ViewMenu::CommitAES(const FText& Text, ETextCommit::Type CommitMethod)
{
	ConfigInfor->AES = Text.ToString();
}

void UUI_ViewMenu::CommitMountPoint(const FText& Text, ETextCommit::Type CommitMethod)
{
	ConfigInfor->MountPoint = Text.ToString();
}

void UUI_ViewMenu::OnClickLoadPath()
{
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	if (DesktopPlatform)
	{
		TArray<FString> OutFiles;
		const FString Filter = "";
		TSharedPtr<SWindow> ParentWindow = FSlateApplication::Get().FindWidgetWindow(TakeWidget());
		void* ParentWindowHandle = (ParentWindow.IsValid() && ParentWindow->GetNativeWindow().IsValid()) ? ParentWindow->GetNativeWindow()->GetOSWindowHandle() : nullptr;

		FText NewText = PakPath->GetText();
		if (DesktopPlatform->OpenFileDialog(ParentWindowHandle,
			FText(LOCTEXT("FilePickerDialogTitle", "Choose a file as paths")).ToString(),
			NewText.ToString(),
			TEXT(""),
			TEXT(""),
			EFileDialogFlags::None,
			OutFiles))
		{
			if (OutFiles.Num())
			{
				ConfigInfor->PakPath = FPaths::ConvertRelativePathToFull(OutFiles[0]);
				PakPath->SetText(FText::FromString(ConfigInfor->PakPath));
			}
		}
	}
}

void UUI_ViewMenu::OnClickAnalysisPak()
{
	if (!ConfigInfor)
	{
		return;
	}

	TArray<FString> Filenames;
	USimpleHotPakBPLibrary::UnmountPak(ConfigInfor->PakPath);

	if (!USimpleHotPakBPLibrary::IsMounted(ConfigInfor->PakPath))
	{
		FSimpleHotPakConfig Config;
		Config.AES = ConfigInfor->AES;
		USimpleHotPakBPLibrary::InitConfig(Config);

		//最后一个参数用于适配不同的项目
		if (USimpleHotPakBPLibrary::MountPak(ConfigInfor->PakPath,100, ConfigInfor->MountPoint,true))
		{
			USimpleHotPakBPLibrary::GetFilenamesInPakFile(ConfigInfor->PakPath, Filenames);
			if (Filenames.Num())
			{
				SimpleOneParamDelegate.ExecuteIfBound(Filenames);
				LastPaths = ConfigInfor->PakPath;
			}
			else
			{
				USimpleHotPakBPLibrary::UnmountPak(ConfigInfor->PakPath);
			}
		}
	}
	else
	{
		SimpleOneParamDelegate.ExecuteIfBound(Filenames);
		LastPaths = ConfigInfor->PakPath;
	}
}

#undef LOCTEXT_NAMESPACE