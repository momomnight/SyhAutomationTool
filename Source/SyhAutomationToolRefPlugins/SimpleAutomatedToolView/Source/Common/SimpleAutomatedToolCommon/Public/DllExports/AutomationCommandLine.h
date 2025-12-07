
#pragma once

namespace AutomationCommandLine
{
	// 解析命令行参数, 只从命令行获取参数和解析%~Time等相关的参数
	template <class AutomatedConfigType>
	bool SIMPLEAUTOMATEDTOOLCOMMON_API CommandLineArgumentToAutomatedConfig(TSharedPtr<AutomatedConfigType> SelfConfig);
}