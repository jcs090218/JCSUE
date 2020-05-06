// Notice: See LICENSE.txt for modification and distribution information - Copyright (c) 2017 by Shen, Jen-Chieh

#include "JCSUE.h"
#include "JCSUE_SlateWidgetStyle.h"

FJCSUE_SlateStyle::FJCSUE_SlateStyle()
{
    // empty..
}

FJCSUE_SlateStyle::~FJCSUE_SlateStyle()
{
    // empty..
}
const FName FJCSUE_SlateStyle::TypeName(TEXT("FJCSUE_SlateStyle"));

const FJCSUE_SlateStyle& FJCSUE_SlateStyle::GetDefault()
{
    static FJCSUE_SlateStyle Default;
    return Default;
}

void FJCSUE_SlateStyle::GetResources(TArray<const FSlateBrush*>& OutBrushes) const
{
    // Add any brush resources here so that Slate can correctly atlas and reference them
}
