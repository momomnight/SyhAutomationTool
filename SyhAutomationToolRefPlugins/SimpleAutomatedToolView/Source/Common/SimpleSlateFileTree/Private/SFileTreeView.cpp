#include "SFileTreeView.h"
#include "ContextMenu/FileTreeContextMenu.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

void SFileTreeView::Construct(const FArguments& InArgs)
{
	FFileTreeContextMenu::InitializeContextMenu(this->AsShared().ToWeakPtr());
	Super::Construct(
		Super::FArguments()
		.OnGenerateRow(InArgs._OnGenerateRow)
		.OnGetChildren(InArgs._OnGetChildren)
		.TreeItemsSource(InArgs._TreeItemsSource)
		.OnExpansionChanged(InArgs._OnExpansionChanged)
		.ExternalScrollbar(InArgs._ExternalScrollbar)
		.OnContextMenuOpening(FOnContextMenuOpening::CreateSP(this, &SFileTreeView::OnContextMenuOpening))
	);
	
}

void SFileTreeView::OpenContextMenu(const FDragDropEvent& PointerEvent)
{
	FVector2f SummonLocation = PointerEvent.GetScreenSpacePosition();
	TSharedPtr<SWidget> MenuContent = OnContextMenuOpening();

	if (MenuContent.IsValid())
	{
		FWidgetPath WidgetPath = PointerEvent.GetEventPath() != nullptr ? *PointerEvent.GetEventPath() : FWidgetPath();
		FSlateApplication::Get().PushMenu(AsShared(), WidgetPath, MenuContent.ToSharedRef(), SummonLocation, FPopupTransitionEffect(FPopupTransitionEffect::ContextMenu));
	}
}

void SFileTreeView::StartDragDrop()
{
	FFileTreeContextMenu::StartDragDrop();
}

void SFileTreeView::EndDragDrop()
{
	FFileTreeContextMenu::EndDragDrop();
}

bool SFileTreeView::IsDragDroping()
{
	return FFileTreeContextMenu::IsDragDroping();
}

TSharedPtr<SWidget> SFileTreeView::OnContextMenuOpening()
{
	return FFileTreeContextMenu::MakeWidget();
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT