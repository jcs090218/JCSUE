/**
 * $File: Test_OrderEvent.h $
 * $Date: 2020-06-28 19:30:36 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright © 2020 by Shen, Jen-Chieh $
 */
#pragma once

#include "../JCSUE.h"
#include "Components/ActorComponent.h"
#include "Test_OrderEvent.generated.h"

class UJCS_OrderEvent;

/**
 * @class UTest_OrderEvent
 * @brief Test component `JCS_OrderEvent` component.
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class JCSUE_API UTest_OrderEvent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere,
        Category = "Runtime Variables",
        meta = (ToolTip = "Text to print for testing."))
    FString word = "Hello World!!~~";

    UPROPERTY(EditAnywhere,
        Category = "Runtime Variables",
        meta = (ToolTip = "Count to print the text."))
    int printCount = 5;

    UPROPERTY(EditAnywhere,
        Category = "Runtime Variables",
        meta = (ToolTip = "Interval time for each print."))
    float intervalTime = 1.0f;

private:
    GENERATED_BODY()

    int m_counter = 0;

    UJCS_OrderEvent* m_pOrderEvent = nullptr;

public:
    UTest_OrderEvent();

    virtual void BeginPlay() override;

    /* operator */

    /* setter */

    /* getter */

private:
    void DoExecution();
};
