// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleProgramDetailView/Public/Test/TestObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SIMPLEPROGRAMDETAILVIEW_API UClass* Z_Construct_UClass_UTestClass();
	SIMPLEPROGRAMDETAILVIEW_API UClass* Z_Construct_UClass_UTestClass_NoRegister();
	SIMPLEPROGRAMDETAILVIEW_API UScriptStruct* Z_Construct_UScriptStruct_FTestStruct();
	UPackage* Z_Construct_UPackage__Script_SimpleProgramDetailView();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestStruct;
class UScriptStruct* FTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestStruct, (UObject*)Z_Construct_UPackage__Script_SimpleProgramDetailView(), TEXT("TestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_TestStruct.OuterSingleton;
}
template<> SIMPLEPROGRAMDETAILVIEW_API UScriptStruct* StaticStruct<FTestStruct>()
{
	return FTestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static void NewProp_A_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_A;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test/TestObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Public/Test/TestObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_A_SetBit(void* Obj)
	{
		((FTestStruct*)Obj)->A = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTestStruct), &Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_A_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_A_MetaData), Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_A_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_A,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleProgramDetailView,
		nullptr,
		&NewStructOps,
		"TestStruct",
		Z_Construct_UScriptStruct_FTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStruct_Statics::PropPointers),
		sizeof(FTestStruct),
		alignof(FTestStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_TestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestStruct.InnerSingleton, Z_Construct_UScriptStruct_FTestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestStruct.InnerSingleton;
	}
	void UTestClass::StaticRegisterNativesUTestClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestClass);
	UClass* Z_Construct_UClass_UTestClass_NoRegister()
	{
		return UTestClass::StaticClass();
	}
	struct Z_Construct_UClass_UTestClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Boolean_MetaData[];
#endif
		static void NewProp_Boolean_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Boolean;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleProgramDetailView,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestClass_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestClass_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UCLASS()\n//class UTestSubClass : public UObject\n//{\n//\x09GENERATED_BODY()\n//public:\n//\n//\x09UPROPERTY()\n//\x09""FString String;\n//\n//\x09UPROPERTY()\n//\x09""FName Name;\n//\n//\x09UPROPERTY()\n//\x09""FText Text;\n//};\n" },
#endif
		{ "IncludePath", "Test/TestObject.h" },
		{ "ModuleRelativePath", "Public/Test/TestObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCLASS()\nclass UTestSubClass : public UObject\n{\n       GENERATED_BODY()\npublic:\n\n       UPROPERTY()\n       FString String;\n\n       UPROPERTY()\n       FName Name;\n\n       UPROPERTY()\n       FText Text;\n};" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestClass_Statics::NewProp_Boolean_MetaData[] = {
		{ "ModuleRelativePath", "Public/Test/TestObject.h" },
	};
#endif
	void Z_Construct_UClass_UTestClass_Statics::NewProp_Boolean_SetBit(void* Obj)
	{
		((UTestClass*)Obj)->Boolean = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTestClass_Statics::NewProp_Boolean = { "Boolean", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTestClass), &Z_Construct_UClass_UTestClass_Statics::NewProp_Boolean_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestClass_Statics::NewProp_Boolean_MetaData), Z_Construct_UClass_UTestClass_Statics::NewProp_Boolean_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestClass_Statics::NewProp_Boolean,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestClass_Statics::ClassParams = {
		&UTestClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestClass_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestClass_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestClass_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTestClass()
	{
		if (!Z_Registration_Info_UClass_UTestClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestClass.OuterSingleton, Z_Construct_UClass_UTestClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestClass.OuterSingleton;
	}
	template<> SIMPLEPROGRAMDETAILVIEW_API UClass* StaticClass<UTestClass>()
	{
		return UTestClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestClass);
	UTestClass::~UTestClass() {}
	struct Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SimpleProgramDetailView_Source_SimpleProgramDetailView_Public_Test_TestObject_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SimpleProgramDetailView_Source_SimpleProgramDetailView_Public_Test_TestObject_h_Statics::ScriptStructInfo[] = {
		{ FTestStruct::StaticStruct, Z_Construct_UScriptStruct_FTestStruct_Statics::NewStructOps, TEXT("TestStruct"), &Z_Registration_Info_UScriptStruct_TestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestStruct), 15758446U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SimpleProgramDetailView_Source_SimpleProgramDetailView_Public_Test_TestObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestClass, UTestClass::StaticClass, TEXT("UTestClass"), &Z_Registration_Info_UClass_UTestClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestClass), 210876046U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SimpleProgramDetailView_Source_SimpleProgramDetailView_Public_Test_TestObject_h_3377177544(TEXT("/Script/SimpleProgramDetailView"),
		Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SimpleProgramDetailView_Source_SimpleProgramDetailView_Public_Test_TestObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SimpleProgramDetailView_Source_SimpleProgramDetailView_Public_Test_TestObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SimpleProgramDetailView_Source_SimpleProgramDetailView_Public_Test_TestObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SimpleProgramDetailView_Source_SimpleProgramDetailView_Public_Test_TestObject_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
