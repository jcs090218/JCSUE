// Fill out your copyright notice in the Description page of Project Settings.


#include "JCS_GoStraightAction.h"

// Sets default values for this component's properties
UJCS_GoStraightAction::UJCS_GoStraightAction()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UJCS_GoStraightAction::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UJCS_GoStraightAction::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

