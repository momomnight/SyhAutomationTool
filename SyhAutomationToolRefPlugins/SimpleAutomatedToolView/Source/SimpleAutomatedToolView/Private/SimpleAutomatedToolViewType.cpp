#include "SimpleAutomatedToolViewType.h"
#include "FileTreeTool.h"

#define LOCTEXT_NAMESPACE "SimpleAutomatedToolViewType"

// <Mode, Pages>
TMap<FText, TArray<FViewButtonInfo>> ViewButtonMap;
TArray<FText> ModeNameList;


namespace SimpleAutomatedToolViewType
{
	const TArray<FViewButtonInfo>* FindButtonInfos(FText InText)
	{
		return ViewButtonMap.Find(InText);
	}

	void InitViewButtonInfo()
	{
		{
			ModeNameList.Add(LOCTEXT("ModeName.Automation", "Automation"));
			ModeNameList.Add(LOCTEXT("ModeName.Other", "Other"));
		}

		{
			TArray<FViewButtonInfo> ButtonInfos;
			{
				FViewButtonInfo& TempInfo = ButtonInfos.AddDefaulted_GetRef();
				TempInfo.Name = LOCTEXT("ModeName.Automation.Editor", "Editor");
				TempInfo.PageType = EToolViewModePages::MP_Automated_Editor;
			}
			{
				FViewButtonInfo& TempInfo = ButtonInfos.AddDefaulted_GetRef();
				TempInfo.Name = LOCTEXT("ModeName.Automation.L1", "L1");
				TempInfo.PageType = EToolViewModePages::MP_L1;
			}
			ViewButtonMap.Add(ModeNameList[0], ButtonInfos);
		}

		{
			TArray<FViewButtonInfo> ButtonInfos;
			{
				FViewButtonInfo& TempInfo = ButtonInfos.AddDefaulted_GetRef();
				TempInfo.Name = LOCTEXT("ModeName.Other.Editor", "Editor");
				TempInfo.PageType = EToolViewModePages::MP_Automated_Editor;
			}
			{
				FViewButtonInfo& TempInfo = ButtonInfos.AddDefaulted_GetRef();
				TempInfo.Name = LOCTEXT("ModeName.Other.L1", "L1");
				TempInfo.PageType = EToolViewModePages::MP_L1;
			}
			{
				FViewButtonInfo& TempInfo = ButtonInfos.AddDefaulted_GetRef();
				TempInfo.Name = LOCTEXT("ModeName.Other.L2", "L2");
				TempInfo.PageType = EToolViewModePages::MP_L2;
			}
			ViewButtonMap.Add(ModeNameList[1], ButtonInfos);
		}

	}

	void GatherModeName(TArray<FText>& OutName)
	{
		OutName = ModeNameList;
	}

}
#undef LOCTEXT_NAMESPACE