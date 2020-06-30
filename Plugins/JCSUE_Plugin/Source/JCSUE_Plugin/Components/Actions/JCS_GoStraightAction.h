/**
 * $File: JCS_GoStraightAction.h $
 * $Date: 2020-05-26 22:20:06 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright © 2020 by Shen, Jen-Chieh $
 */

#pragma once

#include "../../JCSUE_Plugin.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "JCS_GoStraightAction.generated.h"

/**
 * @class JCSUE_PLUGIN_API
 * @brief Class description here..
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class JCSUE_PLUGIN_API UJCS_GoStraightAction : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, 
        Category = JCS_RUNTIME_VARS,
        meta = (ToolTip = "Flag to check active this component."))
    bool active = true;

    //UPROPERTY(EditAnywhere, 
    //    Category = JCS_RUNTIME_VARS,
    //    meta = (ToolTip = "Axis this actor rotate."))
    TEnumAsByte<JCS_Axis> axis = JCS_Axis::k_x;

    UPROPERTY(EditAnywhere, 
        Category = JCS_RUNTIME_VARS,
        meta = (ToolTip = "How fast actor rotate."))
    float moveSpeed = 10.0f;

private:
    GENERATED_BODY()

    // current actor.
    AActor* m_pActor = nullptr;

public:
    UJCS_GoStraightAction();

protected:
    virtual void BeginPlay() override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
#ifdef JCS_DEBUG
    /**
     * @func Test
     * @brief Test code put here.
     */
    void Test();
#endif
};
