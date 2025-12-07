#include "Editor/Widget/SAutomatedToolEditorWidget.h"
#include "Editor/Base/AutomatedToolEditor.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


SAutomatedToolEditorWidget::SAutomatedToolEditorWidget() 
	: EditorInstance(nullptr), MyTabManager(nullptr), MainTab(nullptr), 
	WorkFlowSelectorSlot(nullptr), ActionToolBarSlot(nullptr), MainBodySlot(nullptr)
{
}

void SAutomatedToolEditorWidget::Construct(const FArguments& InArgs, TSharedRef<FAutomatedToolEditor> InEditorInstance, 
	TSharedRef<FTabManager> InTabManager)
{
	EditorInstance = InEditorInstance;
	MyTabManager = InTabManager;
}

void SAutomatedToolEditorWidget::StartUpEditorView(const TSharedRef<FTabManager::FLayout>& DefaultLayout, 
	TSharedRef<SDockTab> InMainTab)
{
	MainTab = InMainTab;
	
	GenerateMenus();

	this->ChildSlot
		[
			SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SBorder)
					.Padding(0)
					.ForegroundColor(FLinearColor::Black)
					[
						SNew(SHorizontalBox)
							+ SHorizontalBox::Slot()
							.Expose(WorkFlowSelectorSlot)
							.AutoWidth()
							+ SHorizontalBox::Slot()
							.AutoWidth()
							.Expose(ActionToolBarSlot)//用于ActionToolBar切换
					]

				]
				+ SVerticalBox::Slot()
				.FillHeight(1.0f)//注：不能使用AutoHeight，某些控件使用的无限大尺寸
				.Expose(MainBodySlot)
				[
					SNullWidget::NullWidget
				]
				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SImage)//状态栏
						.Image(FAppStyle::GetDefaultBrush())
				]
		];

	FSlateApplication::Get().FindWidgetWindow(this->AsShared())->ShowWindow();
}

void SAutomatedToolEditorWidget::GenerateMenus()
{
	FToolMenuContext Context(EditorInstance->GetCommandList());
	EditorInstance->RegisterMenuContextObject(Context);
	USlateTabManagerContext* TabManagerContextObject = NewObject<USlateTabManagerContext>();
	TabManagerContextObject->TabManager = MyTabManager;
	Context.AddObject(TabManagerContextObject);

	UToolMenu* MainMenu = UToolMenus::Get()->GenerateMenu(EditorInstance->GetMainMenuName(), Context);
	TSharedRef<SWidget> MainMenuWidget = UToolMenus::Get()->GenerateWidget(MainMenu);
	if (MainMenuWidget != SNullWidget::NullWidget)
	{
		TSharedRef<SMultiBoxWidget> MultiBoxWidget = StaticCastSharedRef<SMultiBoxWidget>(MainMenuWidget);
		MyTabManager->SetMenuMultiBox(ConstCastSharedRef<FMultiBox>(MultiBoxWidget->GetMultiBox()), MultiBoxWidget);
	}
}

void SAutomatedToolEditorWidget::RegenerateMenusAndToolBar()
{
	GenerateMenus();
	RegenerateToolbar();
}

void SAutomatedToolEditorWidget::RestoreFromLayout(const TSharedRef<FTabManager::FLayout>& DefaultLayout)
{
	//生成新布局
	TSharedPtr<SWindow> ParentWindow = FSlateApplication::Get().FindWidgetWindow(MainTab.Pin().ToSharedRef());
	TSharedPtr<SWidget> MainBody = MyTabManager->RestoreFrom(DefaultLayout, ParentWindow);

	RegenerateMenusAndToolBar();
	SetMainBodyWidget(MainBody);
}

void SAutomatedToolEditorWidget::ClearLayout()
{
	//清理旧布局
	SetWorkModeSelectorToolBarWidget(nullptr);
	SetMainBodyWidget(nullptr);
	SetActionToolBarWidget(nullptr);

}

void SAutomatedToolEditorWidget::RegenerateMenus()
{
	GenerateMenus();
}

void SAutomatedToolEditorWidget::RegenerateToolbar()
{
	RegenerateWorkFlowSelectorToolbar();
	RegenerateActionToolbar();
}

void SAutomatedToolEditorWidget::RegenerateWorkFlowSelectorToolbar()
{
	TSharedRef<SWidget> WorkFlowSelectorWidget = EditorInstance->GenerateWorkFlowSelectorToolbarWidget();//WorkMode选择Button由Editor实现
	SetWorkFlowSelectorToolBarWidget(WorkFlowSelectorWidget);
	RegenerateWorkModeSelectorToolbar();
}

void SAutomatedToolEditorWidget::RegenerateWorkModeSelectorToolbar()
{
	TSharedRef<SWidget> WorkModeSelectorWidget = EditorInstance->GenerateWorkModeSelectorToolbarWidget();
	SetWorkModeSelectorToolBarWidget(WorkModeSelectorWidget);
}

void SAutomatedToolEditorWidget::RegenerateActionToolbar()
{
	TSharedRef<SWidget> ActionToolbarWidget = EditorInstance->GenerateActionToolbarWidget();
	SetActionToolBarWidget(ActionToolbarWidget);
}

void SAutomatedToolEditorWidget::SetWorkFlowSelectorToolBarWidget(TSharedPtr<SWidget> InWidget)
{
	check(WorkFlowSelectorSlot);
	if (InWidget.IsValid())
	{
		(*WorkFlowSelectorSlot)
		[
			InWidget.ToSharedRef()
		];
	}
	else
	{
		(*WorkFlowSelectorSlot)
		[
			SNullWidget::NullWidget
		];
	};
}

void SAutomatedToolEditorWidget::SetWorkModeSelectorToolBarWidget(TSharedPtr<SWidget> InWidget)
{
	check(EditorInstance.IsValid());
	EditorInstance->SetWorkModeSelector(InWidget);
}

void SAutomatedToolEditorWidget::SetMainBodyWidget(TSharedPtr<SWidget> InWidget)
{
	check(MainBodySlot);
	if (InWidget.IsValid())
	{
		(*MainBodySlot)
		[
			InWidget.ToSharedRef()
		];
	}
	else
	{
		(*MainBodySlot)
		[
			SNullWidget::NullWidget
		];
	}
}

void SAutomatedToolEditorWidget::SetActionToolBarWidget(TSharedPtr<SWidget> InWidget)
{
	check(ActionToolBarSlot);
	if (InWidget.IsValid())
	{
		(*ActionToolBarSlot)
		[
			InWidget.ToSharedRef()
		];
	}
	else
	{
		(*ActionToolBarSlot)
		[
			SNullWidget::NullWidget
		];
	}
}



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT