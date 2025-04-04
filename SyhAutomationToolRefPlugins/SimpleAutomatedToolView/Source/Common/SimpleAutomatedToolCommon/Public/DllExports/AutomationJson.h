#pragma once

#include "SimpleAutomatedToolType.h"

namespace AutomationJson
{

//导出需要模板实例化
template <class AutomatedConfigType>
bool SIMPLEAUTOMATEDTOOLCOMMON_API JsonStringToAutomatedConfig(const FString& InString, AutomatedConfigType& OutConfig);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//用于序列化
void SIMPLEAUTOMATEDTOOLCOMMON_API SerializeAllCommand(FString& OutString);

//用于反序列化
void SIMPLEAUTOMATEDTOOLCOMMON_API DeserializeAllCommand(const FString& InString, TMultiMap<ECommandProtocol, FString>& OutCommand);


}