// Notice: See LICENSE.txt for modification and distribution information - Copyright (c) 2017 by Shen, Jen-Chieh

#include "JCSUE.h"
#include "JCSUE_SceneComponent.h"

// Sets default values for this component's properties
UJCSUE_SceneComponent::UJCSUE_SceneComponent()
{
    // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
    // off to improve performance if you don't need them.
    PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UJCSUE_SceneComponent::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void UJCSUE_SceneComponent::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
    Super::TickComponent( DeltaTime, TickType, ThisTickFunction );
}
