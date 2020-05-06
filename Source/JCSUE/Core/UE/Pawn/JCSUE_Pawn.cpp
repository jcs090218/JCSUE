// Notice: See LICENSE.txt for modification and distribution information - Copyright (c) 2017 by Shen, Jen-Chieh

#include "JCSUE.h"
#include "JCSUE_Pawn.h"

// Sets default values
AJCSUE_Pawn::AJCSUE_Pawn()
{
    // Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AJCSUE_Pawn::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AJCSUE_Pawn::Tick( float DeltaTime )
{
    Super::Tick( DeltaTime );
}

// Called to bind functionality to input
void AJCSUE_Pawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
    Super::SetupPlayerInputComponent(InputComponent);
}
