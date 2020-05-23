/**
 * $File: JCSUE_Character.h $
 * $Date: 2020-05-23 19:56:18 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright © 2020 by Shen, Jen-Chieh $
 */

#pragma once

#include "GameFramework/Character.h"
#include "JCSUE_Character.generated.h"

UCLASS()
class JCSUE_API AJCSUE_Character : public ACharacter
{
private:
    GENERATED_BODY()

    APlayerController* m_pPlayerController = nullptr;

public:
    // Sets default values for this character's properties
    AJCSUE_Character();

    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    // Called every frame
    virtual void Tick(float DeltaSeconds) override;

    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
