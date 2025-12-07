#pragma once
#include "Base/Delegate.h"

class SBlueprintNodeWidget;


class SIMPLEBLUEPRINTVIEW_API FNodesSelectedManager
{
public:
	const TSet<TSharedPtr<SBlueprintNodeWidget>>& GetSelectedNodes() const noexcept { return SelectedNodes; }
	bool IsEmpty() const noexcept { return SelectedNodes.IsEmpty(); }

	void ClearSelectedNodes();
	void AddSelectedNode(TSharedPtr<SBlueprintNodeWidget> InNode);
	void RemoveSelectedNode(TSharedPtr<SBlueprintNodeWidget> InNode);

	void UpdateForSelectedNodes(FOnUpdateForSelectedNodes Delegate);

protected:
	TSet<TSharedPtr<SBlueprintNodeWidget>> SelectedNodes;
};