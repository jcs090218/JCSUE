/**
 * $File: JCS_Character.cpp $
 * $Date: 2020-05-23 19:56:03 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright © 2020 by Shen, Jen-Chieh $
 */

#include "./JCS_Character.h"
#include "../JCSUE_Plugin.h"

// Sets default values
AJCS_Character::AJCS_Character()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AJCS_Character::BeginPlay()
{
    Super::BeginPlay();

    m_pPlayerController = GetWorld()->GetFirstPlayerController();

    if (!m_pPlayerController)
    {
        JCS_Debug::Error(L"World should have at least one character in the scene...");
    }
    else
    {
        // set to global
        JCS_Input::SetGlobalPlayerController(m_pPlayerController);
    }
}

// Called every frame
void AJCS_Character::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

#ifdef JCS_DEBUG
    if (JCS_Input::GetKeyDown(EKeys::R))
    {
        JCS_Debug::Log(L"Hello World");
    }

    if (JCS_Input::GetKey(EKeys::E))
    {
        JCS_Debug::Log(L"Hello World : E held down.");
    }
#endif
}

// Called to bind functionality to input
void AJCS_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}
