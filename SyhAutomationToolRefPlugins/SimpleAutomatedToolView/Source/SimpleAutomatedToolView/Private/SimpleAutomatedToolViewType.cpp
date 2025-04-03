#include "SimpleAutomatedToolViewType.h"

#define LOCTEXT_NAMESPACE "SimpleAutomatedToolViewType"

// <Mode, Pages>
TMap<FText, TArray<FViewButtonInfo>> ViewButtonMap;



namespace SimpleAutomatedToolViewType
{
	const TArray<FViewButtonInfo>* FindButtonInfos(FText InText)
	{
		return ViewButtonMap.Find(InText);
	}

	void InitViewButtonInfo()
	{
		{
			TArray<FViewButtonInfo> ButtonInfos;
			{
				FViewButtonInfo& TempInfo = ButtonInfos.AddDefaulted_GetRef();
				TempInfo.Name = LOCTEXT("MP_Automated_Editor", "Editor");
				TempInfo.PageType = EToolViewModePages::MP_Automated_Editor;
			}
			{
				FViewButtonInfo& TempInfo = ButtonInfos.AddDefaulted_GetRef();
				TempInfo.Name = LOCTEXT("MP_L1", "L1");
				TempInfo.PageType = EToolViewModePages::MP_L1;
			}
			ViewButtonMap.Add(LOCTEXT("ViewButtonInfo_Automated", "Automation"), ButtonInfos);
		}

		{
			TArray<FViewButtonInfo> ButtonInfos;
			{
				FViewButtonInfo& TempInfo = ButtonInfos.AddDefaulted_GetRef();
				TempInfo.Name = LOCTEXT("MP_Automated_Editor", "Editor");
				TempInfo.PageType = EToolViewModePages::MP_Automated_Editor;
			}
			{
				FViewButtonInfo& TempInfo = ButtonInfos.AddDefaulted_GetRef();
				TempInfo.Name = LOCTEXT("MP_L1", "L1");
				TempInfo.PageType = EToolViewModePages::MP_L1;
			}
			{
				FViewButtonInfo& TempInfo = ButtonInfos.AddDefaulted_GetRef();
				TempInfo.Name = LOCTEXT("MP_L2", "L2");
				TempInfo.PageType = EToolViewModePages::MP_L2;
			}
			ViewButtonMap.Add(LOCTEXT("ViewButtonInfo_Other", "Other"), ButtonInfos);
		}

	}

	void GatherModeName(TArray<FText>& OutName)
	{
		ViewButtonMap.GetKeys(OutName);
	}

}
#undef LOCTEXT_NAMESPACE