/**
 * $File: JCS_OrderEvent.h $
 * $Date: 2020-06-28 16:48:08 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright © 2020 by Shen, Jen-Chieh $
 */
#pragma once

#include "Components/ActorComponent.h"
#include "JCS_OrderEvent.generated.h"

/**
 * @class UJCS_OrderEvent
 * @brief Execute an operation in order with interval of time.
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class JCSUE_PLUGIN_API UJCS_OrderEvent : public UActorComponent
{
public:
    TFunction<void()> execution;

    UPROPERTY(EditAnywhere,
        Category = Runtime_Variables,
        meta = (ToolTip = "Time for each execution."))
    float intervalTime = 0.0f;

private:
    GENERATED_BODY()

    // Check if there are event going to execute.
    bool m_active = false;

    float m_timer = 0.0f;

public:
    UJCS_OrderEvent();

    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    /**
     * @func StartEvent
     * @brief Start a new event with interval of time and execution orders.
     */
    void StartEvent(float it, TFunction<void()> fnc);

    /**
     * @func DoneEvent
     * @brief Terminate the current event loop.
     */
    void DoneEvent();

    /* operator */

    /* setter */

    /* getter */

private:
    /**
     * @func DoLoop
     * @brief Loop through the execution.
     */
    void DoLoop(float DeltaTime);
};
