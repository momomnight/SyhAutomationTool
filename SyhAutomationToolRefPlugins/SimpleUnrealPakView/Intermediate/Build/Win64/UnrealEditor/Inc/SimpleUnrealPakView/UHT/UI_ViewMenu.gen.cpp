// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Plugins/RENZHAI_PLUGIN/SimpleUnrealPakView/Source/SimpleUnrealPakView/Public/UMG/UI_ViewMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_ViewMenu() {}

// Begin Cross Module References
SIMPLEUNREALPAKVIEW_API UClass* Z_Construct_UClass_USimpleUEViewConfigurationInfor_NoRegister();
SIMPLEUNREALPAKVIEW_API UClass* Z_Construct_UClass_UUI_ViewMenu();
SIMPLEUNREALPAKVIEW_API UClass* Z_Construct_UClass_UUI_ViewMenu_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleUnrealPakView();
// End Cross Module References

// Begin Class UUI_ViewMenu Function CommitAES
struct Z_Construct_UFunction_UUI_ViewMenu_CommitAES_Statics
{
	struct UI_ViewMenu_eventCommitAES_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/UI_ViewMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUI_ViewMenu_CommitAES_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_ViewMenu_eventCommitAES_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUI_ViewMenu_CommitAES_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_ViewMenu_eventCommitAES_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_ViewMenu_CommitAES_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_ViewMenu_CommitAES_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_ViewMenu_CommitAES_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_ViewMenu_CommitAES_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_ViewMenu_CommitAES_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_ViewMenu, nullptr, "CommitAES", nullptr, nullptr, Z_Construct_UFunction_UUI_ViewMenu_CommitAES_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_ViewMenu_CommitAES_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_ViewMenu_CommitAES_Statics::UI_ViewMenu_eventCommitAES_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_ViewMenu_CommitAES_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_ViewMenu_CommitAES_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_ViewMenu_CommitAES_Statics::UI_ViewMenu_eventCommitAES_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_ViewMenu_CommitAES()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_ViewMenu_CommitAES_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_ViewMenu::execCommitAES)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CommitAES(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UUI_ViewMenu Function CommitAES

// Begin Class UUI_ViewMenu Function CommitMountPoint
struct Z_Construct_UFunction_UUI_ViewMenu_CommitMountPoint_Statics
{
	struct UI_ViewMenu_eventCommitMountPoint_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/UI_ViewMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUI_ViewMenu_CommitMountPoint_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_ViewMenu_eventCommitMountPoint_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUI_ViewMenu_CommitMountPoint_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_ViewMenu_eventCommitMountPoint_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_ViewMenu_CommitMountPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_ViewMenu_CommitMountPoint_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_ViewMenu_CommitMountPoint_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_ViewMenu_CommitMountPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_ViewMenu_CommitMountPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_ViewMenu, nullptr, "CommitMountPoint", nullptr, nullptr, Z_Construct_UFunction_UUI_ViewMenu_CommitMountPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_ViewMenu_CommitMountPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_ViewMenu_CommitMountPoint_Statics::UI_ViewMenu_eventCommitMountPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_ViewMenu_CommitMountPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_ViewMenu_CommitMountPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_ViewMenu_CommitMountPoint_Statics::UI_ViewMenu_eventCommitMountPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_ViewMenu_CommitMountPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_ViewMenu_CommitMountPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_ViewMenu::execCommitMountPoint)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CommitMountPoint(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UUI_ViewMenu Function CommitMountPoint

// Begin Class UUI_ViewMenu Function CommitPakPath
struct Z_Construct_UFunction_UUI_ViewMenu_CommitPakPath_Statics
{
	struct UI_ViewMenu_eventCommitPakPath_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/UI_ViewMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUI_ViewMenu_CommitPakPath_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_ViewMenu_eventCommitPakPath_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUI_ViewMenu_CommitPakPath_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_ViewMenu_eventCommitPakPath_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_ViewMenu_CommitPakPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_ViewMenu_CommitPakPath_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_ViewMenu_CommitPakPath_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_ViewMenu_CommitPakPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_ViewMenu_CommitPakPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_ViewMenu, nullptr, "CommitPakPath", nullptr, nullptr, Z_Construct_UFunction_UUI_ViewMenu_CommitPakPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_ViewMenu_CommitPakPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_ViewMenu_CommitPakPath_Statics::UI_ViewMenu_eventCommitPakPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_ViewMenu_CommitPakPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_ViewMenu_CommitPakPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_ViewMenu_CommitPakPath_Statics::UI_ViewMenu_eventCommitPakPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_ViewMenu_CommitPakPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_ViewMenu_CommitPakPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_ViewMenu::execCommitPakPath)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CommitPakPath(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UUI_ViewMenu Function CommitPakPath

// Begin Class UUI_ViewMenu Function OnClickAnalysisPak
struct Z_Construct_UFunction_UUI_ViewMenu_OnClickAnalysisPak_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/UI_ViewMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_ViewMenu_OnClickAnalysisPak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_ViewMenu, nullptr, "OnClickAnalysisPak", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_ViewMenu_OnClickAnalysisPak_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_ViewMenu_OnClickAnalysisPak_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUI_ViewMenu_OnClickAnalysisPak()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_ViewMenu_OnClickAnalysisPak_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_ViewMenu::execOnClickAnalysisPak)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClickAnalysisPak();
	P_NATIVE_END;
}
// End Class UUI_ViewMenu Function OnClickAnalysisPak

// Begin Class UUI_ViewMenu Function OnClickLoadPath
struct Z_Construct_UFunction_UUI_ViewMenu_OnClickLoadPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/UI_ViewMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_ViewMenu_OnClickLoadPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_ViewMenu, nullptr, "OnClickLoadPath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_ViewMenu_OnClickLoadPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_ViewMenu_OnClickLoadPath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUI_ViewMenu_OnClickLoadPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_ViewMenu_OnClickLoadPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_ViewMenu::execOnClickLoadPath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClickLoadPath();
	P_NATIVE_END;
}
// End Class UUI_ViewMenu Function OnClickLoadPath

// Begin Class UUI_ViewMenu
void UUI_ViewMenu::StaticRegisterNativesUUI_ViewMenu()
{
	UClass* Class = UUI_ViewMenu::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CommitAES", &UUI_ViewMenu::execCommitAES },
		{ "CommitMountPoint", &UUI_ViewMenu::execCommitMountPoint },
		{ "CommitPakPath", &UUI_ViewMenu::execCommitPakPath },
		{ "OnClickAnalysisPak", &UUI_ViewMenu::execOnClickAnalysisPak },
		{ "OnClickLoadPath", &UUI_ViewMenu::execOnClickLoadPath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUI_ViewMenu);
UClass* Z_Construct_UClass_UUI_ViewMenu_NoRegister()
{
	return UUI_ViewMenu::StaticClass();
}
struct Z_Construct_UClass_UUI_ViewMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG/UI_ViewMenu.h" },
		{ "ModuleRelativePath", "Public/UMG/UI_ViewMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMG/UI_ViewMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PakPath_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMG/UI_ViewMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AES_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMG/UI_ViewMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountPoint_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMG/UI_ViewMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadPath_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMG/UI_ViewMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnalysisPak_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMG/UI_ViewMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigInfor_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMG/UI_ViewMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContentBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PakPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AES;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MountPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnalysisPak;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConfigInfor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUI_ViewMenu_CommitAES, "CommitAES" }, // 4106645703
		{ &Z_Construct_UFunction_UUI_ViewMenu_CommitMountPoint, "CommitMountPoint" }, // 1953863098
		{ &Z_Construct_UFunction_UUI_ViewMenu_CommitPakPath, "CommitPakPath" }, // 2555957427
		{ &Z_Construct_UFunction_UUI_ViewMenu_OnClickAnalysisPak, "OnClickAnalysisPak" }, // 3826015367
		{ &Z_Construct_UFunction_UUI_ViewMenu_OnClickLoadPath, "OnClickLoadPath" }, // 2658246821
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUI_ViewMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_ViewMenu_Statics::NewProp_ContentBox = { "ContentBox", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUI_ViewMenu, ContentBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentBox_MetaData), NewProp_ContentBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_ViewMenu_Statics::NewProp_PakPath = { "PakPath", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUI_ViewMenu, PakPath), Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PakPath_MetaData), NewProp_PakPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_ViewMenu_Statics::NewProp_AES = { "AES", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUI_ViewMenu, AES), Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AES_MetaData), NewProp_AES_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_ViewMenu_Statics::NewProp_MountPoint = { "MountPoint", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUI_ViewMenu, MountPoint), Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountPoint_MetaData), NewProp_MountPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_ViewMenu_Statics::NewProp_LoadPath = { "LoadPath", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUI_ViewMenu, LoadPath), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadPath_MetaData), NewProp_LoadPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_ViewMenu_Statics::NewProp_AnalysisPak = { "AnalysisPak", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUI_ViewMenu, AnalysisPak), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnalysisPak_MetaData), NewProp_AnalysisPak_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_ViewMenu_Statics::NewProp_ConfigInfor = { "ConfigInfor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUI_ViewMenu, ConfigInfor), Z_Construct_UClass_USimpleUEViewConfigurationInfor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigInfor_MetaData), NewProp_ConfigInfor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUI_ViewMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_ViewMenu_Statics::NewProp_ContentBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_ViewMenu_Statics::NewProp_PakPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_ViewMenu_Statics::NewProp_AES,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_ViewMenu_Statics::NewProp_MountPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_ViewMenu_Statics::NewProp_LoadPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_ViewMenu_Statics::NewProp_AnalysisPak,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_ViewMenu_Statics::NewProp_ConfigInfor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_ViewMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUI_ViewMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleUnrealPakView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_ViewMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUI_ViewMenu_Statics::ClassParams = {
	&UUI_ViewMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUI_ViewMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUI_ViewMenu_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_ViewMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UUI_ViewMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUI_ViewMenu()
{
	if (!Z_Registration_Info_UClass_UUI_ViewMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUI_ViewMenu.OuterSingleton, Z_Construct_UClass_UUI_ViewMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUI_ViewMenu.OuterSingleton;
}
template<> SIMPLEUNREALPAKVIEW_API UClass* StaticClass<UUI_ViewMenu>()
{
	return UUI_ViewMenu::StaticClass();
}
UUI_ViewMenu::UUI_ViewMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUI_ViewMenu);
UUI_ViewMenu::~UUI_ViewMenu() {}
// End Class UUI_ViewMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewMenu_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUI_ViewMenu, UUI_ViewMenu::StaticClass, TEXT("UUI_ViewMenu"), &Z_Registration_Info_UClass_UUI_ViewMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUI_ViewMenu), 2172326498U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewMenu_h_3056028774(TEXT("/Script/SimpleUnrealPakView"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewMenu_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
