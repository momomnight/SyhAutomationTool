// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPropertyDetailView/Public/Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTest() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SPROPERTYDETAILVIEW_API UClass* Z_Construct_UClass_UTestDelegate();
	SPROPERTYDETAILVIEW_API UClass* Z_Construct_UClass_UTestDelegate_NoRegister();
	SPROPERTYDETAILVIEW_API UClass* Z_Construct_UClass_UTestFunction();
	SPROPERTYDETAILVIEW_API UClass* Z_Construct_UClass_UTestFunction_NoRegister();
	SPROPERTYDETAILVIEW_API UClass* Z_Construct_UClass_UTestViewClass();
	SPROPERTYDETAILVIEW_API UClass* Z_Construct_UClass_UTestViewClass_NoRegister();
	SPROPERTYDETAILVIEW_API UClass* Z_Construct_UClass_UTestViewDerivedClass();
	SPROPERTYDETAILVIEW_API UClass* Z_Construct_UClass_UTestViewDerivedClass_NoRegister();
	SPROPERTYDETAILVIEW_API UClass* Z_Construct_UClass_UTestViewSubClass();
	SPROPERTYDETAILVIEW_API UClass* Z_Construct_UClass_UTestViewSubClass_NoRegister();
	SPROPERTYDETAILVIEW_API UEnum* Z_Construct_UEnum_SPropertyDetailView_ETestViewEnum1();
	SPROPERTYDETAILVIEW_API UEnum* Z_Construct_UEnum_SPropertyDetailView_ETestViewEnumByte();
	SPROPERTYDETAILVIEW_API UFunction* Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamic__DelegateSignature();
	SPROPERTYDETAILVIEW_API UFunction* Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature();
	SPROPERTYDETAILVIEW_API UFunction* Z_Construct_UDelegateFunction_SPropertyDetailView_TestMulticastDynamicDelegate__DelegateSignature();
	SPROPERTYDETAILVIEW_API UFunction* Z_Construct_UDelegateFunction_UTestDelegate_TestClassDynamic__DelegateSignature();
	SPROPERTYDETAILVIEW_API UFunction* Z_Construct_USparseDelegateFunction_SPropertyDetailView_TestDelegateClass__DelegateSignature();
	SPROPERTYDETAILVIEW_API UScriptStruct* Z_Construct_UScriptStruct_FTestViewStruct();
	SPROPERTYDETAILVIEW_API UScriptStruct* Z_Construct_UScriptStruct_FTestViewSubStruct();
	UPackage* Z_Construct_UPackage__Script_SPropertyDetailView();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETestViewEnumByte;
	static UEnum* ETestViewEnumByte_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETestViewEnumByte.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETestViewEnumByte.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SPropertyDetailView_ETestViewEnumByte, (UObject*)Z_Construct_UPackage__Script_SPropertyDetailView(), TEXT("ETestViewEnumByte"));
		}
		return Z_Registration_Info_UEnum_ETestViewEnumByte.OuterSingleton;
	}
	template<> SPROPERTYDETAILVIEW_API UEnum* StaticEnum<ETestViewEnumByte>()
	{
		return ETestViewEnumByte_StaticEnum();
	}
	struct Z_Construct_UEnum_SPropertyDetailView_ETestViewEnumByte_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SPropertyDetailView_ETestViewEnumByte_Statics::Enumerators[] = {
		{ "ETestViewEnumByte::Enum_1", (int64)ETestViewEnumByte::Enum_1 },
		{ "ETestViewEnumByte::Enum_2", (int64)ETestViewEnumByte::Enum_2 },
		{ "ETestViewEnumByte::All", (int64)ETestViewEnumByte::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SPropertyDetailView_ETestViewEnumByte_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "ETestViewEnumByte::All" },
		{ "BlueprintType", "true" },
		{ "Enum_1.Name", "ETestViewEnumByte::Enum_1" },
		{ "Enum_2.Name", "ETestViewEnumByte::Enum_2" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SPropertyDetailView_ETestViewEnumByte_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SPropertyDetailView,
		nullptr,
		"ETestViewEnumByte",
		"ETestViewEnumByte",
		Z_Construct_UEnum_SPropertyDetailView_ETestViewEnumByte_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SPropertyDetailView_ETestViewEnumByte_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SPropertyDetailView_ETestViewEnumByte_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SPropertyDetailView_ETestViewEnumByte_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SPropertyDetailView_ETestViewEnumByte()
	{
		if (!Z_Registration_Info_UEnum_ETestViewEnumByte.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETestViewEnumByte.InnerSingleton, Z_Construct_UEnum_SPropertyDetailView_ETestViewEnumByte_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETestViewEnumByte.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETestViewEnum1;
	static UEnum* ETestViewEnum1_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETestViewEnum1.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETestViewEnum1.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SPropertyDetailView_ETestViewEnum1, (UObject*)Z_Construct_UPackage__Script_SPropertyDetailView(), TEXT("ETestViewEnum1"));
		}
		return Z_Registration_Info_UEnum_ETestViewEnum1.OuterSingleton;
	}
	template<> SPROPERTYDETAILVIEW_API UEnum* StaticEnum<ETestViewEnum1::Type>()
	{
		return ETestViewEnum1_StaticEnum();
	}
	struct Z_Construct_UEnum_SPropertyDetailView_ETestViewEnum1_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SPropertyDetailView_ETestViewEnum1_Statics::Enumerators[] = {
		{ "ETestViewEnum1::Enum_1", (int64)ETestViewEnum1::Enum_1 },
		{ "ETestViewEnum1::Enum_2", (int64)ETestViewEnum1::Enum_2 },
		{ "ETestViewEnum1::All", (int64)ETestViewEnum1::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SPropertyDetailView_ETestViewEnum1_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "ETestViewEnum1::All" },
		{ "BlueprintType", "true" },
		{ "Enum_1.Name", "ETestViewEnum1::Enum_1" },
		{ "Enum_2.Name", "ETestViewEnum1::Enum_2" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SPropertyDetailView_ETestViewEnum1_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SPropertyDetailView,
		nullptr,
		"ETestViewEnum1",
		"ETestViewEnum1::Type",
		Z_Construct_UEnum_SPropertyDetailView_ETestViewEnum1_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SPropertyDetailView_ETestViewEnum1_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SPropertyDetailView_ETestViewEnum1_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SPropertyDetailView_ETestViewEnum1_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SPropertyDetailView_ETestViewEnum1()
	{
		if (!Z_Registration_Info_UEnum_ETestViewEnum1.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETestViewEnum1.InnerSingleton, Z_Construct_UEnum_SPropertyDetailView_ETestViewEnum1_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETestViewEnum1.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature_Statics
	{
		struct _Script_SPropertyDetailView_eventTestDynamicDelegate_Parms
		{
			bool Boolean;
			int32 ReturnValue;
		};
		static void NewProp_Boolean_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Boolean;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature_Statics::NewProp_Boolean_SetBit(void* Obj)
	{
		((_Script_SPropertyDetailView_eventTestDynamicDelegate_Parms*)Obj)->Boolean = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature_Statics::NewProp_Boolean = { "Boolean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SPropertyDetailView_eventTestDynamicDelegate_Parms), &Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature_Statics::NewProp_Boolean_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SPropertyDetailView_eventTestDynamicDelegate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature_Statics::NewProp_Boolean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SPropertyDetailView, nullptr, "TestDynamicDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature_Statics::_Script_SPropertyDetailView_eventTestDynamicDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature_Statics::_Script_SPropertyDetailView_eventTestDynamicDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
int32 FTestDynamicDelegate_DelegateWrapper(const FScriptDelegate& TestDynamicDelegate, bool Boolean)
{
	struct _Script_SPropertyDetailView_eventTestDynamicDelegate_Parms
	{
		bool Boolean;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_SPropertyDetailView_eventTestDynamicDelegate_Parms()
			: ReturnValue(0)
		{
		}
	};
	_Script_SPropertyDetailView_eventTestDynamicDelegate_Parms Parms;
	Parms.Boolean=Boolean ? true : false;
	TestDynamicDelegate.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
	struct Z_Construct_UDelegateFunction_SPropertyDetailView_TestMulticastDynamicDelegate__DelegateSignature_Statics
	{
		struct _Script_SPropertyDetailView_eventTestMulticastDynamicDelegate_Parms
		{
			bool Boolean;
		};
		static void NewProp_Boolean_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Boolean;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SPropertyDetailView_TestMulticastDynamicDelegate__DelegateSignature_Statics::NewProp_Boolean_SetBit(void* Obj)
	{
		((_Script_SPropertyDetailView_eventTestMulticastDynamicDelegate_Parms*)Obj)->Boolean = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SPropertyDetailView_TestMulticastDynamicDelegate__DelegateSignature_Statics::NewProp_Boolean = { "Boolean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SPropertyDetailView_eventTestMulticastDynamicDelegate_Parms), &Z_Construct_UDelegateFunction_SPropertyDetailView_TestMulticastDynamicDelegate__DelegateSignature_Statics::NewProp_Boolean_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SPropertyDetailView_TestMulticastDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SPropertyDetailView_TestMulticastDynamicDelegate__DelegateSignature_Statics::NewProp_Boolean,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SPropertyDetailView_TestMulticastDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SPropertyDetailView_TestMulticastDynamicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SPropertyDetailView, nullptr, "TestMulticastDynamicDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SPropertyDetailView_TestMulticastDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SPropertyDetailView_TestMulticastDynamicDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SPropertyDetailView_TestMulticastDynamicDelegate__DelegateSignature_Statics::_Script_SPropertyDetailView_eventTestMulticastDynamicDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SPropertyDetailView_TestMulticastDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SPropertyDetailView_TestMulticastDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SPropertyDetailView_TestMulticastDynamicDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SPropertyDetailView_TestMulticastDynamicDelegate__DelegateSignature_Statics::_Script_SPropertyDetailView_eventTestMulticastDynamicDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SPropertyDetailView_TestMulticastDynamicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SPropertyDetailView_TestMulticastDynamicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTestMulticastDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& TestMulticastDynamicDelegate, bool Boolean)
{
	struct _Script_SPropertyDetailView_eventTestMulticastDynamicDelegate_Parms
	{
		bool Boolean;
	};
	_Script_SPropertyDetailView_eventTestMulticastDynamicDelegate_Parms Parms;
	Parms.Boolean=Boolean ? true : false;
	TestMulticastDynamicDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_USparseDelegateFunction_SPropertyDetailView_TestDelegateClass__DelegateSignature_Statics
	{
		struct _Script_SPropertyDetailView_eventTestDelegateClass_Parms
		{
			bool Boolean;
		};
		static void NewProp_Boolean_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Boolean;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_USparseDelegateFunction_SPropertyDetailView_TestDelegateClass__DelegateSignature_Statics::NewProp_Boolean_SetBit(void* Obj)
	{
		((_Script_SPropertyDetailView_eventTestDelegateClass_Parms*)Obj)->Boolean = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_USparseDelegateFunction_SPropertyDetailView_TestDelegateClass__DelegateSignature_Statics::NewProp_Boolean = { "Boolean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SPropertyDetailView_eventTestDelegateClass_Parms), &Z_Construct_USparseDelegateFunction_SPropertyDetailView_TestDelegateClass__DelegateSignature_Statics::NewProp_Boolean_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_SPropertyDetailView_TestDelegateClass__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_SPropertyDetailView_TestDelegateClass__DelegateSignature_Statics::NewProp_Boolean,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_SPropertyDetailView_TestDelegateClass__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_SPropertyDetailView_TestDelegateClass__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SPropertyDetailView, nullptr, "TestDelegateClass__DelegateSignature", "TestDelegate", "TestSparseDelegate", Z_Construct_USparseDelegateFunction_SPropertyDetailView_TestDelegateClass__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_SPropertyDetailView_TestDelegateClass__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_SPropertyDetailView_TestDelegateClass__DelegateSignature_Statics::_Script_SPropertyDetailView_eventTestDelegateClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_SPropertyDetailView_TestDelegateClass__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_SPropertyDetailView_TestDelegateClass__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_SPropertyDetailView_TestDelegateClass__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_USparseDelegateFunction_SPropertyDetailView_TestDelegateClass__DelegateSignature_Statics::_Script_SPropertyDetailView_eventTestDelegateClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_USparseDelegateFunction_SPropertyDetailView_TestDelegateClass__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_SPropertyDetailView_TestDelegateClass__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTestDelegateClass_DelegateWrapper(const FMulticastScriptDelegate& TestDelegateClass, bool Boolean)
{
	struct _Script_SPropertyDetailView_eventTestDelegateClass_Parms
	{
		bool Boolean;
	};
	_Script_SPropertyDetailView_eventTestDelegateClass_Parms Parms;
	Parms.Boolean=Boolean ? true : false;
	TestDelegateClass.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamic__DelegateSignature_Statics
	{
		struct _Script_SPropertyDetailView_eventTestDynamic_Parms
		{
			int32 Int32;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamic__DelegateSignature_Statics::NewProp_Int32 = { "Int32", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SPropertyDetailView_eventTestDynamic_Parms, Int32), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamic__DelegateSignature_Statics::NewProp_Int32,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SPropertyDetailView, nullptr, "TestDynamic__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamic__DelegateSignature_Statics::_Script_SPropertyDetailView_eventTestDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamic__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamic__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamic__DelegateSignature_Statics::_Script_SPropertyDetailView_eventTestDynamic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTestDynamic_DelegateWrapper(const FScriptDelegate& TestDynamic, int32 Int32)
{
	struct _Script_SPropertyDetailView_eventTestDynamic_Parms
	{
		int32 Int32;
	};
	_Script_SPropertyDetailView_eventTestDynamic_Parms Parms;
	Parms.Int32=Int32;
	TestDynamic.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UTestDelegate_TestClassDynamic__DelegateSignature_Statics
	{
		struct TestDelegate_eventTestClassDynamic_Parms
		{
			int32 Int32;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UTestDelegate_TestClassDynamic__DelegateSignature_Statics::NewProp_Int32 = { "Int32", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestDelegate_eventTestClassDynamic_Parms, Int32), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTestDelegate_TestClassDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTestDelegate_TestClassDynamic__DelegateSignature_Statics::NewProp_Int32,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTestDelegate_TestClassDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UTestDelegate_TestClassDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestDelegate, nullptr, "TestClassDynamic__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UTestDelegate_TestClassDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTestDelegate_TestClassDynamic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UTestDelegate_TestClassDynamic__DelegateSignature_Statics::TestDelegate_eventTestClassDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTestDelegate_TestClassDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UTestDelegate_TestClassDynamic__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTestDelegate_TestClassDynamic__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UTestDelegate_TestClassDynamic__DelegateSignature_Statics::TestDelegate_eventTestClassDynamic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UTestDelegate_TestClassDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTestDelegate_TestClassDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UTestDelegate::FTestClassDynamic_DelegateWrapper(const FScriptDelegate& TestClassDynamic, int32 Int32)
{
	struct TestDelegate_eventTestClassDynamic_Parms
	{
		int32 Int32;
	};
	TestDelegate_eventTestClassDynamic_Parms Parms;
	Parms.Int32=Int32;
	TestClassDynamic.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UTestDelegate::execFunTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FunTest();
		P_NATIVE_END;
	}
	void UTestDelegate::StaticRegisterNativesUTestDelegate()
	{
		UClass* Class = UTestDelegate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FunTest", &UTestDelegate::execFunTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTestDelegate_FunTest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestDelegate_FunTest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestDelegate_FunTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestDelegate, nullptr, "FunTest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestDelegate_FunTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTestDelegate_FunTest_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTestDelegate_FunTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestDelegate_FunTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestDelegate);
	UClass* Z_Construct_UClass_UTestDelegate_NoRegister()
	{
		return UTestDelegate::StaticClass();
	}
	struct Z_Construct_UClass_UTestDelegate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestDynamic_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_TestDynamic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestMulticastDynamic_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_TestMulticastDynamic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestSparseDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_TestSparseDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestFieldPath_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_TestFieldPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestDelegate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SPropertyDetailView,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestDelegate_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTestDelegate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestDelegate_FunTest, "FunTest" }, // 4185385446
		{ &Z_Construct_UDelegateFunction_UTestDelegate_TestClassDynamic__DelegateSignature, "TestClassDynamic__DelegateSignature" }, // 601399952
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestDelegate_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestDelegate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Test.h" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestDelegate_Statics::NewProp_TestDynamic_MetaData[] = {
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UTestDelegate_Statics::NewProp_TestDynamic = { "TestDynamic", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestDelegate, TestDynamic), Z_Construct_UDelegateFunction_SPropertyDetailView_TestDynamicDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestDelegate_Statics::NewProp_TestDynamic_MetaData), Z_Construct_UClass_UTestDelegate_Statics::NewProp_TestDynamic_MetaData) }; // 342014033
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestDelegate_Statics::NewProp_TestMulticastDynamic_MetaData[] = {
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTestDelegate_Statics::NewProp_TestMulticastDynamic = { "TestMulticastDynamic", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestDelegate, TestMulticastDynamic), Z_Construct_UDelegateFunction_SPropertyDetailView_TestMulticastDynamicDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestDelegate_Statics::NewProp_TestMulticastDynamic_MetaData), Z_Construct_UClass_UTestDelegate_Statics::NewProp_TestMulticastDynamic_MetaData) }; // 2347230915
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestDelegate_Statics::NewProp_TestSparseDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTestDelegate_Statics::NewProp_TestSparseDelegate = { "TestSparseDelegate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestDelegate, TestSparseDelegate), Z_Construct_USparseDelegateFunction_SPropertyDetailView_TestDelegateClass__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestDelegate_Statics::NewProp_TestSparseDelegate_MetaData), Z_Construct_UClass_UTestDelegate_Statics::NewProp_TestSparseDelegate_MetaData) }; // 1861083465
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestDelegate_Statics::NewProp_TestFieldPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UTestDelegate_Statics::NewProp_TestFieldPath = { "TestFieldPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestDelegate, TestFieldPath), &FBoolProperty::StaticClass, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestDelegate_Statics::NewProp_TestFieldPath_MetaData), Z_Construct_UClass_UTestDelegate_Statics::NewProp_TestFieldPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestDelegate_Statics::NewProp_TestDynamic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestDelegate_Statics::NewProp_TestMulticastDynamic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestDelegate_Statics::NewProp_TestSparseDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestDelegate_Statics::NewProp_TestFieldPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestDelegate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestDelegate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestDelegate_Statics::ClassParams = {
		&UTestDelegate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTestDelegate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestDelegate_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestDelegate_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestDelegate_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestDelegate_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTestDelegate()
	{
		if (!Z_Registration_Info_UClass_UTestDelegate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestDelegate.OuterSingleton, Z_Construct_UClass_UTestDelegate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestDelegate.OuterSingleton;
	}
	template<> SPROPERTYDETAILVIEW_API UClass* StaticClass<UTestDelegate>()
	{
		return UTestDelegate::StaticClass();
	}
	UTestDelegate::UTestDelegate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestDelegate);
	UTestDelegate::~UTestDelegate() {}
	void UTestViewSubClass::StaticRegisterNativesUTestViewSubClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestViewSubClass);
	UClass* Z_Construct_UClass_UTestViewSubClass_NoRegister()
	{
		return UTestViewSubClass::StaticClass();
	}
	struct Z_Construct_UClass_UTestViewSubClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticTArrayArray_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StaticTArrayArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_A;
		static const UECodeGen_Private::FIntPropertyParams NewProp_B_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumAsByte_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnumAsByte;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TestViewEnumByteXXX_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestViewEnumByteXXX_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TestViewEnumByteXXX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjArray_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjArray;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjTArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjTArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjTArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjTSet_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjTSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjTMap_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ObjTMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ObjText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestViewSubClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SPropertyDetailView,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewSubClass_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewSubClass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Test.h" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_String_MetaData[] = {
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewSubClass, String), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_String_MetaData), Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_String_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewSubClass, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewSubClass, Text), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_Text_MetaData), Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_Text_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_StaticTArrayArray_MetaData[] = {
		{ "Category", "TestViewSubClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_StaticTArrayArray = { "StaticTArrayArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewSubClass, StaticTArrayArray), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_StaticTArrayArray_MetaData), Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_StaticTArrayArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_A_MetaData[] = {
		{ "Category", "TestViewSubClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(A, UTestViewSubClass), STRUCT_OFFSET(UTestViewSubClass, A), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_A_MetaData), Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_A_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_B_Inner = { "B", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_B_MetaData[] = {
		{ "Category", "TestViewSubClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewSubClass, B), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_B_MetaData), Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_B_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_EnumAsByte_MetaData[] = {
		{ "Category", "TestViewSubClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_EnumAsByte = { "EnumAsByte", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewSubClass, EnumAsByte), Z_Construct_UEnum_SPropertyDetailView_ETestViewEnum1, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_EnumAsByte_MetaData), Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_EnumAsByte_MetaData) }; // 765287174
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_TestViewEnumByteXXX_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_TestViewEnumByteXXX_MetaData[] = {
		{ "Category", "TestViewSubClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_TestViewEnumByteXXX = { "TestViewEnumByteXXX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewSubClass, TestViewEnumByteXXX), Z_Construct_UEnum_SPropertyDetailView_ETestViewEnumByte, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_TestViewEnumByteXXX_MetaData), Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_TestViewEnumByteXXX_MetaData) }; // 2553602986
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjArray_MetaData[] = {
		{ "Category", "TestViewSubClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjArray = { "ObjArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(ObjArray, UTestViewSubClass), STRUCT_OFFSET(UTestViewSubClass, ObjArray), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjArray_MetaData), Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjArray_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjTArray_Inner = { "ObjTArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjTArray_MetaData[] = {
		{ "Category", "TestViewSubClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjTArray = { "ObjTArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewSubClass, ObjTArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjTArray_MetaData), Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjTArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjTSet_MetaData[] = {
		{ "Category", "TestViewSubClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjTSet = { "ObjTSet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(ObjTSet, UTestViewSubClass), STRUCT_OFFSET(UTestViewSubClass, ObjTSet), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjTSet_MetaData), Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjTSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjTMap_MetaData[] = {
		{ "Category", "TestViewSubClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjTMap = { "ObjTMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(ObjTMap, UTestViewSubClass), STRUCT_OFFSET(UTestViewSubClass, ObjTMap), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjTMap_MetaData), Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjTMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjText_MetaData[] = {
		{ "Category", "TestViewSubClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjText = { "ObjText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(ObjText, UTestViewSubClass), STRUCT_OFFSET(UTestViewSubClass, ObjText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjText_MetaData), Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestViewSubClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_StaticTArrayArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_B_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_EnumAsByte,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_TestViewEnumByteXXX_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_TestViewEnumByteXXX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjTArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjTArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjTSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjTMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewSubClass_Statics::NewProp_ObjText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestViewSubClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestViewSubClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestViewSubClass_Statics::ClassParams = {
		&UTestViewSubClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestViewSubClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewSubClass_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewSubClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestViewSubClass_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewSubClass_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTestViewSubClass()
	{
		if (!Z_Registration_Info_UClass_UTestViewSubClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestViewSubClass.OuterSingleton, Z_Construct_UClass_UTestViewSubClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestViewSubClass.OuterSingleton;
	}
	template<> SPROPERTYDETAILVIEW_API UClass* StaticClass<UTestViewSubClass>()
	{
		return UTestViewSubClass::StaticClass();
	}
	UTestViewSubClass::UTestViewSubClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestViewSubClass);
	UTestViewSubClass::~UTestViewSubClass() {}
	DEFINE_FUNCTION(UTestViewClass::execFun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fun();
		P_NATIVE_END;
	}
	void UTestViewClass::StaticRegisterNativesUTestViewClass()
	{
		UClass* Class = UTestViewClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fun", &UTestViewClass::execFun },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTestViewClass_Fun_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestViewClass_Fun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestViewClass_Fun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestViewClass, nullptr, "Fun", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestViewClass_Fun_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTestViewClass_Fun_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTestViewClass_Fun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestViewClass_Fun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestViewClass);
	UClass* Z_Construct_UClass_UTestViewClass_NoRegister()
	{
		return UTestViewClass::StaticClass();
	}
	struct Z_Construct_UClass_UTestViewClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Boolean_MetaData[];
#endif
		static void NewProp_Boolean_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Boolean;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int64_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Double_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Double;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeakObjectPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakObjectPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ptr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ptr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Set;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Map_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Map_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Map;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestViewClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SPropertyDetailView,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewClass_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTestViewClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestViewClass_Fun, "Fun" }, // 2561183140
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewClass_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewClass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Test.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewClass_Statics::NewProp_Boolean_MetaData[] = {
		{ "Category", "TestViewClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	void Z_Construct_UClass_UTestViewClass_Statics::NewProp_Boolean_SetBit(void* Obj)
	{
		((UTestViewClass*)Obj)->Boolean = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTestViewClass_Statics::NewProp_Boolean = { "Boolean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTestViewClass), &Z_Construct_UClass_UTestViewClass_Statics::NewProp_Boolean_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewClass_Statics::NewProp_Boolean_MetaData), Z_Construct_UClass_UTestViewClass_Statics::NewProp_Boolean_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewClass_Statics::NewProp_Int32_MetaData[] = {
		{ "Category", "TestViewClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestViewClass_Statics::NewProp_Int32 = { "Int32", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewClass, Int32), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewClass_Statics::NewProp_Int32_MetaData), Z_Construct_UClass_UTestViewClass_Statics::NewProp_Int32_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewClass_Statics::NewProp_Int64_MetaData[] = {
		{ "Category", "TestViewClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UTestViewClass_Statics::NewProp_Int64 = { "Int64", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewClass, Int64), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewClass_Statics::NewProp_Int64_MetaData), Z_Construct_UClass_UTestViewClass_Statics::NewProp_Int64_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewClass_Statics::NewProp_Float_MetaData[] = {
		{ "Category", "TestViewClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTestViewClass_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewClass, Float), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewClass_Statics::NewProp_Float_MetaData), Z_Construct_UClass_UTestViewClass_Statics::NewProp_Float_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewClass_Statics::NewProp_Double_MetaData[] = {
		{ "Category", "TestViewClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UTestViewClass_Statics::NewProp_Double = { "Double", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewClass, Double), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewClass_Statics::NewProp_Double_MetaData), Z_Construct_UClass_UTestViewClass_Statics::NewProp_Double_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewClass_Statics::NewProp_WeakObjectPtr_MetaData[] = {
		{ "Category", "TestViewClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UTestViewClass_Statics::NewProp_WeakObjectPtr = { "WeakObjectPtr", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewClass, WeakObjectPtr), Z_Construct_UClass_UTestViewSubClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewClass_Statics::NewProp_WeakObjectPtr_MetaData), Z_Construct_UClass_UTestViewClass_Statics::NewProp_WeakObjectPtr_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewClass_Statics::NewProp_ObjectPtr_MetaData[] = {
		{ "Category", "TestViewClass" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY()\n//TStrongObjectPtr<UTestSubClass> StrongObjectPtr;\n" },
#endif
		{ "ModuleRelativePath", "Public/Test.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY()\nTStrongObjectPtr<UTestSubClass> StrongObjectPtr;" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTestViewClass_Statics::NewProp_ObjectPtr = { "ObjectPtr", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewClass, ObjectPtr), Z_Construct_UClass_UTestViewSubClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewClass_Statics::NewProp_ObjectPtr_MetaData), Z_Construct_UClass_UTestViewClass_Statics::NewProp_ObjectPtr_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewClass_Statics::NewProp_Ptr_MetaData[] = {
		{ "Category", "TestViewClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestViewClass_Statics::NewProp_Ptr = { "Ptr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewClass, Ptr), Z_Construct_UClass_UTestViewSubClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewClass_Statics::NewProp_Ptr_MetaData), Z_Construct_UClass_UTestViewClass_Statics::NewProp_Ptr_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewClass_Statics::NewProp_String_MetaData[] = {
		{ "Category", "TestViewClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTestViewClass_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewClass, String), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewClass_Statics::NewProp_String_MetaData), Z_Construct_UClass_UTestViewClass_Statics::NewProp_String_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewClass_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "TestViewClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestViewClass_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewClass, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewClass_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UTestViewClass_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewClass_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "TestViewClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTestViewClass_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewClass, Text), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewClass_Statics::NewProp_Text_MetaData), Z_Construct_UClass_UTestViewClass_Statics::NewProp_Text_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestViewClass_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewClass_Statics::NewProp_Array_MetaData[] = {
		{ "Category", "TestViewClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTestViewClass_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewClass, Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewClass_Statics::NewProp_Array_MetaData), Z_Construct_UClass_UTestViewClass_Statics::NewProp_Array_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestViewClass_Statics::NewProp_Set_ElementProp = { "Set", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewClass_Statics::NewProp_Set_MetaData[] = {
		{ "Category", "TestViewClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UTestViewClass_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewClass, Set), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewClass_Statics::NewProp_Set_MetaData), Z_Construct_UClass_UTestViewClass_Statics::NewProp_Set_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTestViewClass_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestViewClass_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewClass_Statics::NewProp_Map_MetaData[] = {
		{ "Category", "TestViewClass" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTestViewClass_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestViewClass, Map), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewClass_Statics::NewProp_Map_MetaData), Z_Construct_UClass_UTestViewClass_Statics::NewProp_Map_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestViewClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewClass_Statics::NewProp_Boolean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewClass_Statics::NewProp_Int32,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewClass_Statics::NewProp_Int64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewClass_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewClass_Statics::NewProp_Double,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewClass_Statics::NewProp_WeakObjectPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewClass_Statics::NewProp_ObjectPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewClass_Statics::NewProp_Ptr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewClass_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewClass_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewClass_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewClass_Statics::NewProp_Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewClass_Statics::NewProp_Array,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewClass_Statics::NewProp_Set_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewClass_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewClass_Statics::NewProp_Map_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewClass_Statics::NewProp_Map_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestViewClass_Statics::NewProp_Map,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestViewClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestViewClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestViewClass_Statics::ClassParams = {
		&UTestViewClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTestViewClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewClass_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestViewClass_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewClass_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTestViewClass()
	{
		if (!Z_Registration_Info_UClass_UTestViewClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestViewClass.OuterSingleton, Z_Construct_UClass_UTestViewClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestViewClass.OuterSingleton;
	}
	template<> SPROPERTYDETAILVIEW_API UClass* StaticClass<UTestViewClass>()
	{
		return UTestViewClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestViewClass);
	UTestViewClass::~UTestViewClass() {}
	void UTestViewDerivedClass::StaticRegisterNativesUTestViewDerivedClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestViewDerivedClass);
	UClass* Z_Construct_UClass_UTestViewDerivedClass_NoRegister()
	{
		return UTestViewDerivedClass::StaticClass();
	}
	struct Z_Construct_UClass_UTestViewDerivedClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestViewDerivedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTestViewClass,
		(UObject* (*)())Z_Construct_UPackage__Script_SPropertyDetailView,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewDerivedClass_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestViewDerivedClass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Test.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestViewDerivedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestViewDerivedClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestViewDerivedClass_Statics::ClassParams = {
		&UTestViewDerivedClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestViewDerivedClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestViewDerivedClass_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTestViewDerivedClass()
	{
		if (!Z_Registration_Info_UClass_UTestViewDerivedClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestViewDerivedClass.OuterSingleton, Z_Construct_UClass_UTestViewDerivedClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestViewDerivedClass.OuterSingleton;
	}
	template<> SPROPERTYDETAILVIEW_API UClass* StaticClass<UTestViewDerivedClass>()
	{
		return UTestViewDerivedClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestViewDerivedClass);
	UTestViewDerivedClass::~UTestViewDerivedClass() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestViewSubStruct;
class UScriptStruct* FTestViewSubStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestViewSubStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestViewSubStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestViewSubStruct, (UObject*)Z_Construct_UPackage__Script_SPropertyDetailView(), TEXT("TestViewSubStruct"));
	}
	return Z_Registration_Info_UScriptStruct_TestViewSubStruct.OuterSingleton;
}
template<> SPROPERTYDETAILVIEW_API UScriptStruct* StaticStruct<FTestViewSubStruct>()
{
	return FTestViewSubStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestViewSubStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestViewSubStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::NewProp_String_MetaData[] = {
		{ "Category", "TestViewSubStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewSubStruct, String), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::NewProp_String_MetaData), Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::NewProp_String_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "TestViewSubStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewSubStruct, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "TestViewSubStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewSubStruct, Text), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::NewProp_Text_MetaData), Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::NewProp_Text_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::NewProp_Text,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SPropertyDetailView,
		nullptr,
		&NewStructOps,
		"TestViewSubStruct",
		Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::PropPointers),
		sizeof(FTestViewSubStruct),
		alignof(FTestViewSubStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTestViewSubStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_TestViewSubStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestViewSubStruct.InnerSingleton, Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestViewSubStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestViewStruct;
class UScriptStruct* FTestViewStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestViewStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestViewStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestViewStruct, (UObject*)Z_Construct_UPackage__Script_SPropertyDetailView(), TEXT("TestViewStruct"));
	}
	return Z_Registration_Info_UScriptStruct_TestViewStruct.OuterSingleton;
}
template<> SPROPERTYDETAILVIEW_API UScriptStruct* StaticStruct<FTestViewStruct>()
{
	return FTestViewStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestViewStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Boolean_MetaData[];
#endif
		static void NewProp_Boolean_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Boolean;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int64_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Double_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Double;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ptr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ptr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeakObjectPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakObjectPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftObjectPtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftObjectPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftClassPtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SoftClassPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassPtr_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectClassPtr_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_ObjectClassPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subclass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Subclass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Set;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Map_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Map_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Map;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Struct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyStaticArray_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MyStaticArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Byte_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Byte;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ByteArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByteArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyStaticByteArray_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MyStaticByteArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftClassClassPtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SoftClassClassPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefTest_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RefTest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstRefTest_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConstRefTest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectRefTest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectRefTest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestViewStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Boolean_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Boolean_SetBit(void* Obj)
	{
		((FTestViewStruct*)Obj)->Boolean = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Boolean = { "Boolean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTestViewStruct), &Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Boolean_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Boolean_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Boolean_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Int32_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Int32 = { "Int32", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, Int32), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Int32_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Int32_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Int64_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Int64 = { "Int64", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, Int64), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Int64_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Int64_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Float_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, Float), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Float_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Float_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Double_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Double = { "Double", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, Double), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Double_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Double_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Ptr_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Ptr = { "Ptr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, Ptr), Z_Construct_UClass_UTestViewSubClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Ptr_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Ptr_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ObjectPtr_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ObjectPtr = { "ObjectPtr", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, ObjectPtr), Z_Construct_UClass_UTestViewSubClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ObjectPtr_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ObjectPtr_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_WeakObjectPtr_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_WeakObjectPtr = { "WeakObjectPtr", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, WeakObjectPtr), Z_Construct_UClass_UTestViewSubClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_WeakObjectPtr_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_WeakObjectPtr_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_SoftObjectPtr_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_SoftObjectPtr = { "SoftObjectPtr", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, SoftObjectPtr), Z_Construct_UClass_UTestViewSubClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_SoftObjectPtr_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_SoftObjectPtr_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_SoftClassPtr_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_SoftClassPtr = { "SoftClassPtr", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, SoftClassPtr), Z_Construct_UClass_UTestViewSubClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_SoftClassPtr_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_SoftClassPtr_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ClassPtr_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ClassPtr = { "ClassPtr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, ClassPtr), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ClassPtr_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ClassPtr_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ObjectClassPtr_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ObjectClassPtr = { "ObjectClassPtr", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, ObjectClassPtr), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ObjectClassPtr_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ObjectClassPtr_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Subclass_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Subclass = { "Subclass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, Subclass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTestViewSubClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Subclass_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Subclass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_String_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, String), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_String_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_String_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, Text), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Text_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Text_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Array_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Array_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Array_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Set_ElementProp = { "Set", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Set_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, Set), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Set_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Set_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Map_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, Map), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Map_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Map_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Struct_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, Struct), Z_Construct_UScriptStruct_FTestViewSubStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Struct_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Struct_MetaData) }; // 1534695209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_MyStaticArray_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_MyStaticArray = { "MyStaticArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(MyStaticArray, FTestViewStruct), STRUCT_OFFSET(FTestViewStruct, MyStaticArray), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_MyStaticArray_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_MyStaticArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Byte_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Byte = { "Byte", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, Byte), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Byte_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Byte_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ByteArray_Inner = { "ByteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ByteArray_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ByteArray = { "ByteArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, ByteArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ByteArray_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ByteArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_MyStaticByteArray_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_MyStaticByteArray = { "MyStaticByteArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(MyStaticByteArray, FTestViewStruct), STRUCT_OFFSET(FTestViewStruct, MyStaticByteArray), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_MyStaticByteArray_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_MyStaticByteArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_SoftClassClassPtr_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_SoftClassClassPtr = { "SoftClassClassPtr", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, SoftClassClassPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_SoftClassClassPtr_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_SoftClassClassPtr_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_RefTest_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_RefTest = { "RefTest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, RefTest), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_RefTest_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_RefTest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ConstRefTest_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ConstRefTest = { "ConstRefTest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, ConstRefTest), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ConstRefTest_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ConstRefTest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ObjectRefTest_MetaData[] = {
		{ "Category", "TestViewStruct" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ObjectRefTest = { "ObjectRefTest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestViewStruct, ObjectRefTest), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ObjectRefTest_MetaData), Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ObjectRefTest_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestViewStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Boolean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Int32,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Int64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Double,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Ptr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ObjectPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_WeakObjectPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_SoftObjectPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_SoftClassPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ClassPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ObjectClassPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Subclass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Array,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Set_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Map_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Map_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Map,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_MyStaticArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_Byte,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ByteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ByteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_MyStaticByteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_SoftClassClassPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_RefTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ConstRefTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewProp_ObjectRefTest,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestViewStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SPropertyDetailView,
		nullptr,
		&NewStructOps,
		"TestViewStruct",
		Z_Construct_UScriptStruct_FTestViewStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::PropPointers),
		sizeof(FTestViewStruct),
		alignof(FTestViewStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestViewStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestViewStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTestViewStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_TestViewStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestViewStruct.InnerSingleton, Z_Construct_UScriptStruct_FTestViewStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestViewStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(UTestFunction::execTestFunction2)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Int32);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Float);
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestFunction2_Implementation(Z_Param_Int32,Z_Param_Float,Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTestFunction::execTestFunction1)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Int32);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Float);
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestFunction1(Z_Param_Int32,Z_Param_Float,Z_Param_String);
		P_NATIVE_END;
	}
	struct TestFunction_eventTestFunction2_Parms
	{
		int32 Int32;
		float Float;
		FString String;
	};
	struct TestFunction_eventTestFunction3_Parms
	{
		int32 Int32;
		float Float;
		FString String;
	};
	static FName NAME_UTestFunction_TestFunction2 = FName(TEXT("TestFunction2"));
	void UTestFunction::TestFunction2(int32 Int32, float Float, const FString& String)
	{
		TestFunction_eventTestFunction2_Parms Parms;
		Parms.Int32=Int32;
		Parms.Float=Float;
		Parms.String=String;
		ProcessEvent(FindFunctionChecked(NAME_UTestFunction_TestFunction2),&Parms);
	}
	static FName NAME_UTestFunction_TestFunction3 = FName(TEXT("TestFunction3"));
	void UTestFunction::TestFunction3(int32 Int32, float Float, const FString& String)
	{
		TestFunction_eventTestFunction3_Parms Parms;
		Parms.Int32=Int32;
		Parms.Float=Float;
		Parms.String=String;
		ProcessEvent(FindFunctionChecked(NAME_UTestFunction_TestFunction3),&Parms);
	}
	void UTestFunction::StaticRegisterNativesUTestFunction()
	{
		UClass* Class = UTestFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TestFunction1", &UTestFunction::execTestFunction1 },
			{ "TestFunction2", &UTestFunction::execTestFunction2 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTestFunction_TestFunction1_Statics
	{
		struct TestFunction_eventTestFunction1_Parms
		{
			int32 Int32;
			float Float;
			FString String;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTestFunction_TestFunction1_Statics::NewProp_Int32 = { "Int32", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestFunction_eventTestFunction1_Parms, Int32), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTestFunction_TestFunction1_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestFunction_eventTestFunction1_Parms, Float), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTestFunction_TestFunction1_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestFunction_eventTestFunction1_Parms, String), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestFunction_TestFunction1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestFunction_TestFunction1_Statics::NewProp_Int32,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestFunction_TestFunction1_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestFunction_TestFunction1_Statics::NewProp_String,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestFunction_TestFunction1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestFunction_TestFunction1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestFunction, nullptr, "TestFunction1", nullptr, nullptr, Z_Construct_UFunction_UTestFunction_TestFunction1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestFunction_TestFunction1_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTestFunction_TestFunction1_Statics::TestFunction_eventTestFunction1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestFunction_TestFunction1_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTestFunction_TestFunction1_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestFunction_TestFunction1_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTestFunction_TestFunction1_Statics::TestFunction_eventTestFunction1_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTestFunction_TestFunction1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestFunction_TestFunction1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTestFunction_TestFunction2_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTestFunction_TestFunction2_Statics::NewProp_Int32 = { "Int32", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestFunction_eventTestFunction2_Parms, Int32), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTestFunction_TestFunction2_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestFunction_eventTestFunction2_Parms, Float), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTestFunction_TestFunction2_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestFunction_eventTestFunction2_Parms, String), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestFunction_TestFunction2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestFunction_TestFunction2_Statics::NewProp_Int32,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestFunction_TestFunction2_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestFunction_TestFunction2_Statics::NewProp_String,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestFunction_TestFunction2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestFunction_TestFunction2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestFunction, nullptr, "TestFunction2", nullptr, nullptr, Z_Construct_UFunction_UTestFunction_TestFunction2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestFunction_TestFunction2_Statics::PropPointers), sizeof(TestFunction_eventTestFunction2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestFunction_TestFunction2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTestFunction_TestFunction2_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestFunction_TestFunction2_Statics::PropPointers) < 2048);
	static_assert(sizeof(TestFunction_eventTestFunction2_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTestFunction_TestFunction2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestFunction_TestFunction2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTestFunction_TestFunction3_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTestFunction_TestFunction3_Statics::NewProp_Int32 = { "Int32", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestFunction_eventTestFunction3_Parms, Int32), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTestFunction_TestFunction3_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestFunction_eventTestFunction3_Parms, Float), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTestFunction_TestFunction3_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestFunction_eventTestFunction3_Parms, String), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestFunction_TestFunction3_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestFunction_TestFunction3_Statics::NewProp_Int32,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestFunction_TestFunction3_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestFunction_TestFunction3_Statics::NewProp_String,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestFunction_TestFunction3_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestFunction_TestFunction3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestFunction, nullptr, "TestFunction3", nullptr, nullptr, Z_Construct_UFunction_UTestFunction_TestFunction3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestFunction_TestFunction3_Statics::PropPointers), sizeof(TestFunction_eventTestFunction3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestFunction_TestFunction3_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTestFunction_TestFunction3_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestFunction_TestFunction3_Statics::PropPointers) < 2048);
	static_assert(sizeof(TestFunction_eventTestFunction3_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTestFunction_TestFunction3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestFunction_TestFunction3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestFunction);
	UClass* Z_Construct_UClass_UTestFunction_NoRegister()
	{
		return UTestFunction::StaticClass();
	}
	struct Z_Construct_UClass_UTestFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SPropertyDetailView,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestFunction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTestFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestFunction_TestFunction1, "TestFunction1" }, // 1692743622
		{ &Z_Construct_UFunction_UTestFunction_TestFunction2, "TestFunction2" }, // 1273837023
		{ &Z_Construct_UFunction_UTestFunction_TestFunction3, "TestFunction3" }, // 1353065703
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestFunction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Test.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestFunction_Statics::ClassParams = {
		&UTestFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestFunction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTestFunction()
	{
		if (!Z_Registration_Info_UClass_UTestFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestFunction.OuterSingleton, Z_Construct_UClass_UTestFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestFunction.OuterSingleton;
	}
	template<> SPROPERTYDETAILVIEW_API UClass* StaticClass<UTestFunction>()
	{
		return UTestFunction::StaticClass();
	}
	UTestFunction::UTestFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestFunction);
	UTestFunction::~UTestFunction() {}
	struct Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SPropertyDetailView_Public_Test_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SPropertyDetailView_Public_Test_h_Statics::EnumInfo[] = {
		{ ETestViewEnumByte_StaticEnum, TEXT("ETestViewEnumByte"), &Z_Registration_Info_UEnum_ETestViewEnumByte, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2553602986U) },
		{ ETestViewEnum1_StaticEnum, TEXT("ETestViewEnum1"), &Z_Registration_Info_UEnum_ETestViewEnum1, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 765287174U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SPropertyDetailView_Public_Test_h_Statics::ScriptStructInfo[] = {
		{ FTestViewSubStruct::StaticStruct, Z_Construct_UScriptStruct_FTestViewSubStruct_Statics::NewStructOps, TEXT("TestViewSubStruct"), &Z_Registration_Info_UScriptStruct_TestViewSubStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestViewSubStruct), 1534695209U) },
		{ FTestViewStruct::StaticStruct, Z_Construct_UScriptStruct_FTestViewStruct_Statics::NewStructOps, TEXT("TestViewStruct"), &Z_Registration_Info_UScriptStruct_TestViewStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestViewStruct), 1981734608U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SPropertyDetailView_Public_Test_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestDelegate, UTestDelegate::StaticClass, TEXT("UTestDelegate"), &Z_Registration_Info_UClass_UTestDelegate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestDelegate), 3822282555U) },
		{ Z_Construct_UClass_UTestViewSubClass, UTestViewSubClass::StaticClass, TEXT("UTestViewSubClass"), &Z_Registration_Info_UClass_UTestViewSubClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestViewSubClass), 3726695515U) },
		{ Z_Construct_UClass_UTestViewClass, UTestViewClass::StaticClass, TEXT("UTestViewClass"), &Z_Registration_Info_UClass_UTestViewClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestViewClass), 1074977655U) },
		{ Z_Construct_UClass_UTestViewDerivedClass, UTestViewDerivedClass::StaticClass, TEXT("UTestViewDerivedClass"), &Z_Registration_Info_UClass_UTestViewDerivedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestViewDerivedClass), 1937810704U) },
		{ Z_Construct_UClass_UTestFunction, UTestFunction::StaticClass, TEXT("UTestFunction"), &Z_Registration_Info_UClass_UTestFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestFunction), 3994845425U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SPropertyDetailView_Public_Test_h_1068109424(TEXT("/Script/SPropertyDetailView"),
		Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SPropertyDetailView_Public_Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SPropertyDetailView_Public_Test_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SPropertyDetailView_Public_Test_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SPropertyDetailView_Public_Test_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SPropertyDetailView_Public_Test_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SPropertyDetailView_Public_Test_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
