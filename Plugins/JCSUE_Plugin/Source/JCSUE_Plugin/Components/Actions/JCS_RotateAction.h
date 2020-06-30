/**
 * $File: JCS_RotateAction.h $
 * $Date: 2017-03-11 14:25:53 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright (c) 2017 by Shen, Jen-Chieh $
 */

#pragma once

#include "../../JCSUE_Plugin.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "JCS_RotateAction.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class JCSUE_PLUGIN_API UJCS_RotateAction : public UActorComponent
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
    float rotateSpeed = 10.0f;

private:
    GENERATED_BODY()

    // current actor.
    AActor* m_pActor = nullptr;

public:
    // Sets default values for this component's properties
    UJCS_RotateAction();

    // Called when the game starts
    virtual void BeginPlay() override;

    // Called every frame
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
