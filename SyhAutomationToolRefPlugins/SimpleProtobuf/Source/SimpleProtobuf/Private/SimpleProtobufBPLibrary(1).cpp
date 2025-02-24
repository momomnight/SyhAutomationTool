// Copyright (C) RenZhai.2021.All Rights Reserved.

#include "SimpleProtobufBPLibrary.h"
#include "SimpleProtobuf.h"
#include "UObject/UObjectIterator.h"
#include "UObject/Class.h"
#include "UObject/Field.h"

#if PLATFORM_WINDOWS
#pragma optimize("",off) 
#endif

#if WITH_EDITORONLY_DATA

void UEBaseProtoType(TArray<FProto> &OutDependentStruct)
{
	//FGuid
	{
		FProto &InProto = OutDependentStruct.AddDefaulted_GetRef();
		InProto.OriginalName = TEXT("FGuid");
		InProto.Name = TEXT("FGuidRZ");

		//a
		{
			FProtoElement& ProtoElememt = InProto.Elements.AddDefaulted_GetRef();
			ProtoElememt.ElementName = TEXT("A");
			ProtoElememt.ElementType = TEXT("uint32");
		}
		//b
		{
			FProtoElement& ProtoElememt = InProto.Elements.AddDefaulted_GetRef();
			ProtoElememt.ElementName = TEXT("B");
			ProtoElememt.ElementType = TEXT("uint32");
		}

		//c
		{
			FProtoElement& ProtoElememt = InProto.Elements.AddDefaulted_GetRef();
			ProtoElememt.ElementName = TEXT("C");
			ProtoElememt.ElementType = TEXT("uint32");
		}

		//d
		{
			FProtoElement& ProtoElememt = InProto.Elements.AddDefaulted_GetRef();
			ProtoElememt.ElementName = TEXT("D");
			ProtoElememt.ElementType = TEXT("uint32");
		}
	}

	//FVector
	{
		FProto& InProto = OutDependentStruct.AddDefaulted_GetRef();
		InProto.OriginalName = TEXT("FVector");
		InProto.Name = TEXT("FVectorRZ");

		//a
		{
			FProtoElement& ProtoElememt = InProto.Elements.AddDefaulted_GetRef();
			ProtoElememt.ElementName = TEXT("X");
			ProtoElememt.ElementType = TEXT("float");
		}
		//b
		{
			FProtoElement& ProtoElememt = InProto.Elements.AddDefaulted_GetRef();
			ProtoElememt.ElementName = TEXT("Y");
			ProtoElememt.ElementType = TEXT("float");
		}

		//c
		{
			FProtoElement& ProtoElememt = InProto.Elements.AddDefaulted_GetRef();
			ProtoElememt.ElementName = TEXT("Z");
			ProtoElememt.ElementType = TEXT("float");
		}
	}

	//FVector2D
	{
		FProto& InProto = OutDependentStruct.AddDefaulted_GetRef();
		InProto.OriginalName = TEXT("FVector2D");
		InProto.Name = TEXT("FVector2DRZ");

		//a
		{
			FProtoElement& ProtoElememt = InProto.Elements.AddDefaulted_GetRef();
			ProtoElememt.ElementName = TEXT("X");
			ProtoElememt.ElementType = TEXT("float");
		}
		//b
		{
			FProtoElement& ProtoElememt = InProto.Elements.AddDefaulted_GetRef();
			ProtoElememt.ElementName = TEXT("Y");
			ProtoElememt.ElementType = TEXT("float");
		}
	}

	//FRotator
	{
		FProto& InProto = OutDependentStruct.AddDefaulted_GetRef();
		InProto.OriginalName = TEXT("FRotator");
		InProto.Name = TEXT("FRotatorRZ");

		//a
		{
			FProtoElement& ProtoElememt = InProto.Elements.AddDefaulted_GetRef();
			ProtoElememt.ElementName = TEXT("Pitch");
			ProtoElememt.ElementType = TEXT("float");
		}
		//b
		{
			FProtoElement& ProtoElememt = InProto.Elements.AddDefaulted_GetRef();
			ProtoElememt.ElementName = TEXT("Yaw");
			ProtoElememt.ElementType = TEXT("float");
		}

		//c
		{
			FProtoElement& ProtoElememt = InProto.Elements.AddDefaulted_GetRef();
			ProtoElememt.ElementName = TEXT("Roll");
			ProtoElememt.ElementType = TEXT("float");
		}
	}
}

bool CollectStructCode(TArray<FProto> &OutProto, const FString& InMetaTag)
{
	for (TObjectIterator<UStruct> It; It; ++It)
	{
		if (UStruct* Object = *It)
		{
			if (Object->HasMetaData(*InMetaTag))
			{
				FProto& InProto = OutProto.AddDefaulted_GetRef();
				InProto.OriginalName = TEXT("F") + Object->GetName();
				InProto.Name = InProto.OriginalName + TEXT("RZ");

				UE_LOG(LogTemp, Log, TEXT("Name: %s"), *InProto.OriginalName);
				for (TFieldIterator<FProperty> PropertyIt(Object); PropertyIt; ++PropertyIt)
				{
					if (const FProperty* Property = *PropertyIt)
					{
						FProtoElement& InElement = InProto.Elements.AddDefaulted_GetRef();
						InElement.ElementName = Property->GetName();
						InElement.ElementType = Property->GetCPPType();

						//对数组的处理
						if (InElement.ElementType.Equals(TEXT("TMap")))
						{
							if (const FMapProperty* MapProperty = CastField<FMapProperty>(Property))
							{
								if (MapProperty->KeyProp && MapProperty->ValueProp)
								{
									InElement.ElementTypes.AddDefaulted_GetRef() = MapProperty->KeyProp->GetCPPType();
									InElement.ElementTypes.AddDefaulted_GetRef() = MapProperty->ValueProp->GetCPPType();
								}
							}
						}

						if (InElement.ElementType.Equals(TEXT("TArray")))
						{
							if (const FArrayProperty* ArrayProperty = CastField<FArrayProperty>(Property))
							{
								if (ArrayProperty->Inner)
								{
									InElement.ElementTypes.AddDefaulted_GetRef() = ArrayProperty->Inner->GetCPPType();
								}
							}
						}

						if (InElement.ElementType.Equals(TEXT("TSet")))
						{
							if (const FSetProperty* SetProperty = CastField<FSetProperty>(Property))
							{
								if (SetProperty->ElementProp)
								{
									InElement.ElementTypes.AddDefaulted_GetRef() = SetProperty->ElementProp->GetCPPType();
								}
							}
						}
					}
				}
			}
		}
	}

	return OutProto.Num() > 0;
}

bool CollectEnumCode(TArray<FProto>& OutProto, const FString& InMetaTag)
{
	for (TObjectIterator<UEnum> It; It; ++It)
	{
		if (UEnum* Object = *It)
		{
			if (Object->HasMetaData(*InMetaTag))
			{
				FProto& InProto = OutProto.AddDefaulted_GetRef();
				InProto.Name = Object->GetName() + TEXT("RZ");
				InProto.OriginalName = Object->GetName();

				UE_LOG(LogTemp, Log, TEXT("Name: %s"), *InProto.OriginalName);

				FString EnumHead = FString::Printf(TEXT("%s::"),*InProto.OriginalName);
				for (int32 i = 0; i < Object->GetMaxEnumValue(); i++)
				{
					FProtoElement& InElement = InProto.Elements.AddDefaulted_GetRef();

					// 获取枚举成员的名称
					InElement.ElementName = Object->GetNameByIndex(i).ToString();
					InElement.ElementName.RemoveFromStart(EnumHead);

					// 获取枚举成员的显示名（如果有的话）
					FText EnumDisplayName = Object->GetDisplayNameTextByIndex(i);

					// 在这里可以执行你想要的操作，例如打印名称
					UE_LOG(LogTemp, Log, TEXT("Enum Member: %s - Display Name: %s"), *InElement.ElementName, *EnumDisplayName.ToString());
				}
			}
		}
	}

	return OutProto.Num() > 0;
}

FString ToProtoType(const FString& UEType)
{
	if (UEType.Equals(TEXT("FString")) || UEType.Equals(TEXT("FText")) || UEType.Equals(TEXT("FName")))
	{
		return TEXT("string");
	}
	else if (UEType.Equals(TEXT("uint8")) || UEType.Equals(TEXT("int8")))
	{
		return TEXT("bytes");
	}
	else if (UEType.Equals(TEXT("TMap")))
	{
		return TEXT("map");
	}
	else if (UEType.Equals(TEXT("FDateTime")) || UEType.Equals(TEXT("FTimespan")))
	{
		return TEXT("int64");
	}
	else if (UEType.Equals(TEXT("TArray")) || UEType.Equals(TEXT("TSet")))
	{
		return TEXT("repeated");
	}

	return UEType;
}

void GenerateEnumCode(const TArray<FProto> &InProtos,TArray<FString> &OutCodes)
{
	//构建枚举
	for (auto &Tmp : InProtos)
	{
		OutCodes.Add(FString::Printf(TEXT("enum %s"),*Tmp.Name));
		OutCodes.Add(TEXT("{"));
		for(int32 i = 0;i < Tmp.Elements.Num() ;i++)
		{
			OutCodes.Add(FString::Printf(TEXT("\t%s = %i;"), *Tmp.Elements[i].ElementName,i));
		}
		OutCodes.Add(TEXT("}"));

		OutCodes.Add(TEXT(""));
	}
}

void GenerateStructCode(const TArray<FProto>& InProtos, TArray<FString>& OutCodes)
{
	OutCodes.Add(TEXT(""));

	for (auto& Tmp : InProtos)
	{
		OutCodes.Add(FString::Printf(TEXT("message %s"), *Tmp.Name));
		OutCodes.Add(TEXT("{"));
		for (int32 i = 0; i < Tmp.Elements.Num(); i++)
		{
			if (Tmp.Elements[i].ElementType.Equals(TEXT("TMap")))
			{
				if (Tmp.Elements[i].ElementTypes.Num() == 2)
				{
					OutCodes.Add(FString::Printf(TEXT("\t%s<%s,%s> %s = %i;"),
						*ToProtoType(Tmp.Elements[i].ElementType),
						*ToProtoType(Tmp.Elements[i].ElementTypes[0]),
						*ToProtoType(Tmp.Elements[i].ElementTypes[1]),
						*Tmp.Elements[i].ElementName,
						i + 1));
				}
				else
				{
					UE_LOG(LogTemp, Error, TEXT("Spawn Map Error"));
				}
			}
			else if (Tmp.Elements[i].ElementType.Equals(TEXT("TArray")) ||
				Tmp.Elements[i].ElementType.Equals(TEXT("TSet")))
			{
				if (Tmp.Elements[i].ElementTypes.Num() == 1)
				{
					OutCodes.Add(FString::Printf(TEXT("\t%s %s %s = %i;"),
						*ToProtoType(Tmp.Elements[i].ElementType),
						*ToProtoType(Tmp.Elements[i].ElementTypes[0]),
						*Tmp.Elements[i].ElementName,
						i + 1));
				}
				else
				{
					UE_LOG(LogTemp, Error, TEXT("Spawn Array Error"));
				}
			}
			else
			{
				OutCodes.Add(FString::Printf(TEXT("\t%s %s = %i;"),
					*ToProtoType(Tmp.Elements[i].ElementType),
					*Tmp.Elements[i].ElementName,
					i + 1));
			}	
		}
		OutCodes.Add(TEXT("}"));

		OutCodes.Add(TEXT(""));
	}
}

void CorrectionType(const TArray<FProto>& BaseProto,TArray<FProtoElement> &Elements)
{
	for (auto &Tmp : Elements)//每一个成员变量
	{
		for (auto &SubTmp : BaseProto)//在标准中寻找
		{
			if (Tmp.ElementType.Equals(SubTmp.OriginalName))//是否有一样名字的
			{
				Tmp.ElementType = SubTmp.Name;//修正
			}
			else	//可能是容器
			{
				for (auto& ElementType : Tmp.ElementTypes)
				{
					if (ElementType.Equals(SubTmp.OriginalName))//是否有一样名字的
					{
						ElementType = SubTmp.Name;//修正
						break;
					}
				}
			}
		}
	}
}

void HandleEnumAndStructProto(const TArray<FProto>& BaseProto, const TArray<FProto>& InProtoEnum, TArray<FProto>& OutProtoStructs)
{
	//修正UE基础的元素
	for (auto& Tmp : OutProtoStructs)
	{
		//对每个元素的类型进行修正
		CorrectionType(BaseProto, Tmp.Elements);
	}

	//修正枚举的元素
	for (auto& Tmp : OutProtoStructs)
	{
		//对每个元素的类型进行修正
		CorrectionType(InProtoEnum, Tmp.Elements);
	}

	//修正自定义结构体的元素
	for (auto& Tmp : OutProtoStructs)
	{
		//对每个元素的类型进行修正
		CorrectionType(OutProtoStructs, Tmp.Elements);
	}
}

bool USimpleProtobufBPLibrary::GenerateProtoCode(
	const TArray<FString>& InGenerateProtoPaths,
	const TArray<FString>& InImportProtoFile,
	const FString& InGenerateProtoFilename,
	const FString& InMetaTag)
{
	int32 ErrorCount = 0;

	TArray<FProto> BaseProto;
	UEBaseProtoType(BaseProto);

	TArray<FProto> ProtoStructs;
	if (!CollectStructCode(ProtoStructs, InMetaTag))
	{
		UE_LOG(LogTemp, Warning, TEXT("Struct not found"));
	}

	TArray<FProto> ProtoEnum;
	if (!CollectEnumCode(ProtoEnum, InMetaTag))
	{
		UE_LOG(LogTemp, Warning, TEXT("enum not found"));
	}

	//主要修正名字的后缀 防止后面生成的代码重复
	HandleEnumAndStructProto(BaseProto, ProtoEnum, ProtoStructs);

	//构建Proto头代码
	TArray<FString> ProtoCodes;
	{
		ProtoCodes.Add(TEXT("syntax=\"proto3\";"));
		ProtoCodes.Add(FString::Printf(TEXT("package %s;"), *InGenerateProtoFilename));
		for (auto& Tmp : InImportProtoFile)
		{
			if (!Tmp.IsEmpty())
			{
				ProtoCodes.Add(FString::Printf(TEXT("import \"%s\";"), *Tmp));
			}
		}
	}

	ProtoCodes.Add(TEXT(""));

	//生成UE的默认基础结构
	GenerateStructCode(BaseProto, ProtoCodes);

	//自定义结构
	//生成枚举和结构体
	GenerateEnumCode(ProtoEnum, ProtoCodes);
	GenerateStructCode(ProtoStructs, ProtoCodes);

	for (auto& Tmp : InGenerateProtoPaths)
	{
		FString ProtoPaths = Tmp / InGenerateProtoFilename + TEXT(".proto");
		FPaths::NormalizeFilename(ProtoPaths);

		if (!FFileHelper::SaveStringArrayToFile(ProtoCodes, *ProtoPaths))
		{
			UE_LOG(LogTemp, Error, TEXT("Generation failed[%s]."), *ProtoPaths);
			ErrorCount++;
		}
	}

	return ErrorCount == 0;
}
#else
bool USimpleProtobufBPLibrary::GenerateProtoCode(
	const TArray<FString>& InGenerateProtoPaths,
	const TArray<FString>& InImportProtoFile,
	const FString& InGenerateProtoFilename,
	const FString& InMetaTag)
{
	return false;
}
#endif

#if PLATFORM_WINDOWS
#pragma optimize("",on) 
#endif

/*
* 基础教学
* 标量值类型
*	double				-	对应C++中的double，								64位浮点数。
*	float				-	对应C++中的float，								32位浮点数。
*	int32				-	对应C++中的int32_t，								使用变长编码，适合32位整数。
*	int64				-	对应C++中的int64_t，								使用变长编码，适合64位整数。
*	uint32				-	对应C++中的uint32_t，								使用变长编码，适合无符号32位整数。
*	uint64				-	对应C++中的uint64_t，								使用变长编码，适合无符号64位整数。
*	sint32				-	对应C++中的int32_t，								使用变长编码，有符号整数优化。
*	sint64				-	对应C++中的int64_t，								使用变长编码，有符号整数优化。
*	fixed32				-	对应C++中的uint32_t，								固定长度32位，无符号。
*	fixed64				-	对应C++中的uint64_t，								固定长度64位，无符号。
*	sfixed32			-	对应C++中的int32_t，								固定长度32位，有符号。
*	sfixed64			-	对应C++中的int64_t，								固定长度64位，有符号。
*	bool				-	对应C++中的bool，									布尔类型。
*	string				-	对应C++中的std::string，							UTF-8或ASCII编码的字符串。
*	bytes				-	对应C++中的std::string或std::vector<char>，		用于存储任意字节序列。
* 
* 复合类型
* 	消息类型 (Message)	-	自定义复杂类型，可以包含上述标量值类型以及其他消息类型。
* 							在C++中，每个消息类型都会被编译成一个类。
* 
* 	枚举类型 (Enum)		-	定义一组命名的整数常量。在C++中，protobuf枚举被编译为一个特殊的枚举类。
* 
* 特殊类型
* 	repeated字段			-	用于表示字段可以重复任意次数，类似于C++中的std::vector<T>，
* 							其中T是上述任意protobuf类型。
* 
* 	map字段				-	用于表示键值对的集合，类似于C++中的std::map<KeyType,ValueType>
* 							其中KeyType可以是任意标量值类型（除了float和double）
* 							ValueType可以是标量值类型或消息类型
*/