// Notice: See LICENSE.txt for modification and distribution information - Copyright (c) 2017 by Shen, Jen-Chieh

#pragma once

#include "GameFramework/Pawn.h"
#include "JCSUE_Pawn.generated.h"

UCLASS()
class JCSUE_API AJCSUE_Pawn : public APawn
{
    GENERATED_BODY()

public:
    // Sets default values for this pawn's properties
    AJCSUE_Pawn();

    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    // Called every frame
    virtual void Tick( float DeltaSeconds ) override;

    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
};
