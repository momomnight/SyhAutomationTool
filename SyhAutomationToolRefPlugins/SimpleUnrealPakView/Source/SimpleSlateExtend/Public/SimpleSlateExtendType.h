// Copyright (C) RenZhai.2020.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "FileTree/FileParsing.h"

DECLARE_DELEGATE_TwoParams(FSimpleDrawTwoStringParamDelegate,const FGeometry&, const FDragDropEvent&);
DECLARE_DELEGATE_OneParam(FSimpleOneParamDelegate, const TArray<FString> &);
DECLARE_DELEGATE_OneParam(FSimpleOneStringParamDelegate, const FString &);
DECLARE_DELEGATE_ThreeParams(FSimpleTwoStringParamDelegate, SimpleSlateExtend::EFileType, const FString&, const FString&);
DECLARE_DELEGATE_FourParams(FSimpleGeometryDelegate,SimpleSlateExtend::EFileType,  const FGeometry&, const FPointerEvent&, const FString&);
DECLARE_DELEGATE_FourParams(FSimpleFileDragDelegate,const FGeometry&,const FDragDropEvent&,const SimpleSlateExtend::FFileDragDefinition&,const SimpleSlateExtend::FFileDragDefinition&);
