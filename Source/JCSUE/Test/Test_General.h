/**
 * $File: Test_General.h $
 * $Date: 2020-05-23 00:04:16 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright © 2020 by Shen, Jen-Chieh $
 */

#pragma once

#include "../JCSUE.h"
#include "Components/ActorComponent.h"
#include "Test_General.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class JCSUE_API UTest_General : public UActorComponent
{
    GENERATED_BODY()

public:
    // Sets default values for this component's properties
    UTest_General();

    // Called when the game starts
    virtual void BeginPlay() override;

    // Called every frame
    virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

private:
    UPROPERTY(VisibleAnywhere)
    float m_someValue;

    //UPROPERTY(EditAnywhere, Category = Enum)
    TEnumAsByte<JCS_Axis> m_axis = JCS_Axis::k_x;

    UInputComponent* m_pInputComponent = nullptr;
};
