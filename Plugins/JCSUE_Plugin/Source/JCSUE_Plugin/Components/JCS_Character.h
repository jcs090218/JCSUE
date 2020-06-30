/**
 * $File: JCS_Character.h $
 * $Date: 2020-05-23 19:56:18 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright © 2020 by Shen, Jen-Chieh $
 */

#pragma once

#include "GameFramework/Character.h"
#include "JCS_Character.generated.h"

UCLASS()
class JCSUE_PLUGIN_API AJCS_Character : public ACharacter
{
private:
    GENERATED_BODY()

    APlayerController* m_pPlayerController = nullptr;

public:
    AJCS_Character();

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
