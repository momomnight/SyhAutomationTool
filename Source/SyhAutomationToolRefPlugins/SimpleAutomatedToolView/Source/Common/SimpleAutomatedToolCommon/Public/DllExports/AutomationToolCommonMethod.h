#pragma once

namespace AutomationToolCommonMethod
{
	//打包的文件路径，以时间为名
	void SIMPLEAUTOMATEDTOOLCOMMON_API SetPackagingSaveFileName(const FString& InFileName);
	const SIMPLEAUTOMATEDTOOLCOMMON_API FString& GetPackagingSaveFileName();
	void SIMPLEAUTOMATEDTOOLCOMMON_API RecognizePathSyntax(FString& InPath);

	template <class EnumType>
	FString SIMPLEAUTOMATEDTOOLCOMMON_API GetEnumMemberName(EnumType InEnumValue);
	template <class EnumType>
	TArray<FString> SIMPLEAUTOMATEDTOOLCOMMON_API GetEnumMemberNames();

	extern template FString SIMPLEAUTOMATEDTOOLCOMMON_API GetEnumMemberName<ECommandProtocol>(ECommandProtocol InEnumValue);
	extern template FString SIMPLEAUTOMATEDTOOLCOMMON_API GetEnumMemberName<EComparisionType>(EComparisionType InEnumValue);
	extern template FString SIMPLEAUTOMATEDTOOLCOMMON_API GetEnumMemberName<ESimpleOSSCommand>(ESimpleOSSCommand InEnumValue);
	extern template FString SIMPLEAUTOMATEDTOOLCOMMON_API GetEnumMemberName<ESimpleHTTPVerbType>(ESimpleHTTPVerbType InEnumValue);
	extern template FString SIMPLEAUTOMATEDTOOLCOMMON_API GetEnumMemberName<EMysqlMethodType>(EMysqlMethodType InEnumValue);
	extern template FString SIMPLEAUTOMATEDTOOLCOMMON_API GetEnumMemberName<ECompressType>(ECompressType InEnumValue);

	extern template TArray<FString> SIMPLEAUTOMATEDTOOLCOMMON_API GetEnumMemberNames<ECommandProtocol>();
	extern template TArray<FString> SIMPLEAUTOMATEDTOOLCOMMON_API GetEnumMemberNames<EComparisionType>();
	extern template TArray<FString> SIMPLEAUTOMATEDTOOLCOMMON_API GetEnumMemberNames<ESimpleOSSCommand>();
	extern template TArray<FString> SIMPLEAUTOMATEDTOOLCOMMON_API GetEnumMemberNames<ESimpleHTTPVerbType>();
	extern template TArray<FString> SIMPLEAUTOMATEDTOOLCOMMON_API GetEnumMemberNames<ECompressType>();
}
