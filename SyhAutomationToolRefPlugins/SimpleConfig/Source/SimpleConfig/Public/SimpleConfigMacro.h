// Copyright (C) RenZhai.2023.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#define DEFINE_GLOBAL_SINGLETON_H_INHERIT(API,FunName,Inherit,Code)\
class API F##FunName :public Inherit\
{\
public:\
	static F##FunName* Get();\
	static void Destroy();\
Code \
private:\
	static F##FunName* Global;\
};

//定义头
#define DEFINE_GLOBAL_SINGLETON_H(API,FunName,Code)\
class API F##FunName\
{\
public:\
	static F##FunName* Get();\
	static void Destroy();\
Code \
private:\
	static F##FunName* Global;\
};

//定义CPP
#define DEFINE_GLOBAL_SINGLETON_CPP(FunName)\
F##FunName* F##FunName::Global = nullptr;\
F##FunName* F##FunName::Get()\
{\
	if (!Global)\
	{\
		Global = new F##FunName();\
	}\
	return Global;\
}\
void F##FunName::Destroy()\
{\
	if (Global)\
	{\
		delete Global;\
	}\
	Global = nullptr;\
}

//有写代码直接这么定义会导致 该内容已经定义了这种问题 建议采用上面的方式分开定义
#define DEFINE_GLOBAL_SINGLETON(API,FunName,Code)\
DEFINE_GLOBAL_SINGLETON_H(API,FunName,Code)\
DEFINE_GLOBAL_SINGLETON_CPP(FunName)

//定义简单变量
#define DEFINE_VARIABLE_SINGLETON(VariableTypeName,VariableName)\
private:\
VariableTypeName VariableName;\
public:\
VariableTypeName &Get##VariableName(){return VariableName;}\
void Set##VariableName(const VariableTypeName& In##VariableName) { VariableName = In##VariableName; }

//对变量默认赋值
#define DEFINE_VARIABLE_SINGLETON_VALUE(VariableTypeName,VariableName,Value)\
private:\
VariableTypeName VariableName = Value;\
public:\
VariableTypeName &Get##VariableName(){return VariableName;}\
void Set##VariableName(const VariableTypeName &In##VariableName) { VariableName = In##VariableName; }

#define DEFINE_VARIABLE_SINGLETON_VALUE_NO_CONST(VariableTypeName,VariableName,Value)\
private:\
VariableTypeName VariableName = Value;\
public:\
VariableTypeName Get##VariableName(){return VariableName;}\
void Set##VariableName(VariableTypeName In##VariableName) { VariableName = In##VariableName; }

#define DEFINE_VARIABLE_SINGLETON_VALUE_BOOL(VariableName,Value)\
private:\
bool b##VariableName = Value;\
public:\
bool Is##VariableName()const {return b##VariableName;}\
void Set##VariableName(const bool& Inb##VariableName) { b##VariableName = Inb##VariableName; }