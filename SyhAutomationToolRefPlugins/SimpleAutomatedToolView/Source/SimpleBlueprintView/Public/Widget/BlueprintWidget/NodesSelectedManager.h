#pragma once
#include "Widget/BlueprintWidget/BlueprintDelegate.h"

class SIMPLEBLUEPRINTVIEW_API FNodesSelectedManager
{
public:
	const TSet<TSharedPtr<SBlueprintNode>>& GetSelectedNodes() const noexcept { return SelectedNodes; }
	bool IsEmpty() const noexcept { return SelectedNodes.IsEmpty(); }

	void ClearSelectedNodes();
	void AddSelectedNode(TSharedPtr<class SBlueprintNode> InNode);
	void RemoveSelectedNode(TSharedPtr<class SBlueprintNode> InNode);

	void UpdateForSelectedNodes(FOnUpdateForSelectedNodes Delegate);

protected:
	TSet<TSharedPtr<class SBlueprintNode>> SelectedNodes;
};