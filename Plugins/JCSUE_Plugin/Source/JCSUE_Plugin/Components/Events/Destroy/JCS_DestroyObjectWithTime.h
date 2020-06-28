/**
 * $File: JCS_DestroyObjectWithTime.h $
 * $Date: 2020-06-27 21:58:32 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright © 2020 by Shen, Jen-Chieh $
 */
#pragma once

#include "../../../JCSUE_Plugin.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "JCS_DestroyObjectWithTime.generated.h"

/**
 * @class JCS_DestroyObjectWithTime
 * @brief Destroy the game object after a certain time.
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class JCSUE_PLUGIN_API UJCS_DestroyObjectWithTime : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere,
        Category = "Runtime Variables",
        meta = (ToolTip = "Time to live before destory."))
    float timeToDestroy = 5.0f;

    float timer = 0.0f;

    AActor* m_pActor = nullptr;

private:
    GENERATED_BODY()

public:
    UJCS_DestroyObjectWithTime();

    virtual void BeginPlay() override;
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    /* operator */

    /* setter */

    /* getter */

private:
    void DoDestroy(float DeltaTime);
};
