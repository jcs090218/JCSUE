// Notice: See LICENSE.txt for modification and distribution information - Copyright (c) 2017 by Shen, Jen-Chieh

#pragma once

#include "Styling/SlateWidgetStyle.h"
#include "SlateWidgetStyleContainerBase.h"

#include "JCSUE_SlateWidgetStyle.generated.h"

/**
 *
 */
USTRUCT()
struct JCSUE_API FJCSUE_SlateStyle : public FSlateWidgetStyle
{
    GENERATED_USTRUCT_BODY()

    FJCSUE_SlateStyle();
    virtual ~FJCSUE_SlateStyle();

    // FSlateWidgetStyle
    virtual void GetResources(TArray<const FSlateBrush*>& OutBrushes) const override;
    static const FName TypeName;
    virtual const FName GetTypeName() const override { return TypeName; };
    static const FJCSUE_SlateStyle& GetDefault();
};

/**
 */
UCLASS(hidecategories=Object, MinimalAPI)
class UJCSUE_SlateWidgetStyle : public USlateWidgetStyleContainerBase
{
    GENERATED_BODY()

public:
    /** The actual data describing the widget appearance. */
    UPROPERTY(Category=Appearance, EditAnywhere, meta=(ShowOnlyInnerProperties))
    FJCSUE_SlateStyle WidgetStyle;

    virtual const struct FSlateWidgetStyle* const GetStyle() const override
    {
        return static_cast< const struct FSlateWidgetStyle* >( &WidgetStyle );
    }
};
