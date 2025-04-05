#pragma once

#include "SimpleAutomatedToolType.h"

namespace AutomationJson
{

//导出需要模板实例化
template <class AutomatedConfigType>
bool SIMPLEAUTOMATEDTOOLCOMMON_API JsonStringToAutomatedConfig(const FString& InString, AutomatedConfigType& OutConfig);
extern template bool SIMPLEAUTOMATEDTOOLCOMMON_API JsonStringToAutomatedConfig<FAutomatedCallConfig>(const FString& InString, FAutomatedCallConfig& OutConfig);
extern template bool SIMPLEAUTOMATEDTOOLCOMMON_API JsonStringToAutomatedConfig<FAutomatedCallCustomContentConfig>(const FString& InString, FAutomatedCallCustomContentConfig& OutConfig);
extern template bool SIMPLEAUTOMATEDTOOLCOMMON_API JsonStringToAutomatedConfig<FAutomatedUEProjectRefreshConfig>(const FString& InString, FAutomatedUEProjectRefreshConfig& OutConfig);
extern template bool SIMPLEAUTOMATEDTOOLCOMMON_API JsonStringToAutomatedConfig<FAutomatedCommandNestingConfig>(const FString& InString, FAutomatedCommandNestingConfig& OutConfig);
extern template bool SIMPLEAUTOMATEDTOOLCOMMON_API JsonStringToAutomatedConfig<FAutomatedDeploymentCopyConfig>(const FString& InString, FAutomatedDeploymentCopyConfig& OutConfig);
extern template bool SIMPLEAUTOMATEDTOOLCOMMON_API JsonStringToAutomatedConfig<FAutomatedDeploymentDeleteConfig>(const FString& InString, FAutomatedDeploymentDeleteConfig& OutConfig);
extern template bool SIMPLEAUTOMATEDTOOLCOMMON_API JsonStringToAutomatedConfig<FAutomatedVSCompileConfig>(const FString& InString, FAutomatedVSCompileConfig& OutConfig);
extern template bool SIMPLEAUTOMATEDTOOLCOMMON_API JsonStringToAutomatedConfig<FAutomatedGitConfig>(const FString& InString, FAutomatedGitConfig& OutConfig);
extern template bool SIMPLEAUTOMATEDTOOLCOMMON_API JsonStringToAutomatedConfig<FAutomatedUEPackagingConfig>(const FString& InString, FAutomatedUEPackagingConfig& OutConfig);
extern template bool SIMPLEAUTOMATEDTOOLCOMMON_API JsonStringToAutomatedConfig<FAutomatedUEPluginPackagingConfig>(const FString& InString, FAutomatedUEPluginPackagingConfig& OutConfig);
extern template bool SIMPLEAUTOMATEDTOOLCOMMON_API JsonStringToAutomatedConfig<FAutomatedConditionCommandConfig>(const FString& InString, FAutomatedConditionCommandConfig& OutConfig);
extern template bool SIMPLEAUTOMATEDTOOLCOMMON_API JsonStringToAutomatedConfig<FAutomatedOSSConfig>(const FString& InString, FAutomatedOSSConfig& OutConfig);
extern template bool SIMPLEAUTOMATEDTOOLCOMMON_API JsonStringToAutomatedConfig<FAutomatedHTTPConfig>(const FString& InString, FAutomatedHTTPConfig& OutConfig);
extern template bool SIMPLEAUTOMATEDTOOLCOMMON_API JsonStringToAutomatedConfig<FAutomatedCompressConfig>(const FString& InString, FAutomatedCompressConfig& OutConfig);
extern template bool SIMPLEAUTOMATEDTOOLCOMMON_API JsonStringToAutomatedConfig<FAutomatedMysqlConfig>(const FString& InString, FAutomatedMysqlConfig& OutConfig);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//用于序列化
void SIMPLEAUTOMATEDTOOLCOMMON_API SerializeAllCommand(FString& OutString);

//用于反序列化
void SIMPLEAUTOMATEDTOOLCOMMON_API DeserializeAllCommand(const FString& InString, TMultiMap<ECommandProtocol, FString>& OutCommand);


}