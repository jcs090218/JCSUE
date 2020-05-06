// Notice: See LICENSE.txt for modification and distribution information - Copyright (c) 2017 by Shen, Jen-Chieh

#pragma once

#include "Components/ActorComponent.h"
#include "SomeElse.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class JCSUE_API USomeElse : public UActorComponent
{
    GENERATED_BODY()

public:
    // Sets default values for this component's properties
    USomeElse();

    // Called when the game starts
    virtual void BeginPlay() override;

    // Called every frame
    virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

private:
    UPROPERTY(VisibleAnywhere)
    float m_someValue;

    UPROPERTY(EditAnywhere, Category = Enum)
    TEnumAsByte<JCSUE::JCSUE_Axis> m_axis = JCSUE::JCSUE_Axis::k_x;

    UInputComponent* m_pInputComponent = nullptr;
};
