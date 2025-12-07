#pragma once

#include "CoreMinimal.h"
#include "UObject\StrongObjectPtr.h"
#include "TestObject.generated.h"

USTRUCT()
struct FTestStruct
{
	GENERATED_BODY()

	UPROPERTY()
	bool A = true;
};

//UCLASS()
//class UTestSubClass : public UObject
//{
//	GENERATED_BODY()
//public:
//
//	UPROPERTY()
//	FString String;
//
//	UPROPERTY()
//	FName Name;
//
//	UPROPERTY()
//	FText Text;
//};


UCLASS()
class UTestClass : public UObject
{
	GENERATED_BODY()
public:
	UTestClass();

	UPROPERTY()
	bool Boolean;

	//UPROPERTY()
	//int8 Int8;

	//UPROPERTY()
	//uint8 UInt8;

	//UPROPERTY()
	//int16 Int16;

	//UPROPERTY()
	//uint16 UInt16;

	//UPROPERTY()
	//int32 Int32;


	//UPROPERTY()
	//uint32 UInt32;

	//UPROPERTY()
	//int64 Int64;

	//UPROPERTY()
	//uint64 UInt64;

	//UPROPERTY()
	//float Float;

	//UPROPERTY()
	//double Double;

	//UPROPERTY()
	//TWeakObjectPtr<UTestSubClass> WeakObjectPtr;

	////UPROPERTY()
	////TStrongObjectPtr<UTestSubClass> StrongObjectPtr;

	//UPROPERTY()
	//TObjectPtr<UTestSubClass> ObjectPtr;


	//UPROPERTY()
	//UTestSubClass* Ptr;
};