#include "Widget/BlueprintWidget/NodesSelectedManager.h"
#include "Widget/BlueprintWidget/SBlueprintNode.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

void FNodesSelectedManager::ClearSelectedNodes()
{
	SelectedNodes.Empty(SelectedNodes.Num());
}

void FNodesSelectedManager::AddSelectedNode(TSharedPtr<SBlueprintNode> InNode)
{
	if(!SelectedNodes.Contains(InNode))
	{
		SelectedNodes.Add(InNode);
	}
}

void FNodesSelectedManager::RemoveSelectedNode(TSharedPtr<SBlueprintNode> InNode)
{
	if(InNode.IsValid() && SelectedNodes.Contains(InNode))
	{ 
		SelectedNodes.Remove(InNode);
	}
}

void FNodesSelectedManager::UpdateForSelectedNodes(FOnUpdateForSelectedNodes Delegate)
{
	if (Delegate.IsBound())
	{
		for (auto& Node : SelectedNodes)
		{
			Node.IsValid() ? Delegate.Execute(Node) : (void)0;
		}
	}
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

