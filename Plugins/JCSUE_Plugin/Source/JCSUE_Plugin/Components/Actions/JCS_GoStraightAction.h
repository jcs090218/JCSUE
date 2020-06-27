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
    GENERATED_BODY()

private:
    // Flag to check active this component.
    UPROPERTY(EditAnywhere, Category = "Runtime Variables")
    bool m_active = true;

    // Axis this actor rotate.
    //UPROPERTY(EditAnywhere, Category = "Runtime Variables")
    TEnumAsByte<JCS_Axis> m_axis = JCS_Axis::k_x;

    // How fast actor rotate.
    UPROPERTY(EditAnywhere, Category = "Runtime Variables")
    float m_moveSpeed = 10.0f;

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