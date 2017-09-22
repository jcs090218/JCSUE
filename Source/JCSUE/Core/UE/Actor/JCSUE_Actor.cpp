// Notice: See LICENSE.txt for modification and distribution information - Copyright (c) 2017 by Shen, Jen-Chieh

#include "JCSUE.h"
#include "JCSUE_Actor.h"


// Sets default values
AJCSUE_Actor::AJCSUE_Actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJCSUE_Actor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJCSUE_Actor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

