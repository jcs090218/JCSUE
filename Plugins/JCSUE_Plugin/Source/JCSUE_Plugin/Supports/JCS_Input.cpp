/**
 * $File: JCS_Input.cpp $
 * $Date: 2017-03-11 16:25:50 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright (c) 2017 by Shen, Jen-Chieh $
 */

#include "./JCS_Input.h"
#include "../JCSUE_Plugin.h"

APlayerController* JCS_Input::k_pPlayerController = nullptr;
std::map<FKey, bool> JCS_Input::k_keysDown;

// Set the global input component
void JCS_Input::SetGlobalPlayerController(APlayerController* const pPlayerController)
{
    k_pPlayerController = pPlayerController;
}

// Input device object handle buffer from 'OS'.
APlayerController* JCS_Input::GetGlobalPlayerController()
{
    return k_pPlayerController;
}

// Check if the key is down.
bool JCS_Input::GetKeyDown(FKey keyCode)
{
#ifdef JCS_DEBUG
    if (!k_pPlayerController)
    {
        JCS_Debug::Error(
            L"No %s in the scene, and you still trying to process the input.",
            L"JCSUE_Character");

        return false;
    }
#endif

    return k_pPlayerController->WasInputKeyJustPressed(keyCode);
}

// Check if the key is up.
bool JCS_Input::GetKeyUp(FKey keyCode)
{
#ifdef JCS_DEBUG
    if (!k_pPlayerController)
    {
        JCS_Debug::Error(
            L"No %s in the scene, and you still trying to process the input.",
            L"JCSUE_Character");

        return false;
    }
#endif

    return k_pPlayerController->WasInputKeyJustReleased(keyCode);
}

// Check if the key is currently pressed.
bool JCS_Input::GetKey(FKey keyCode)
{
#ifdef JCS_DEBUG
    if (!k_pPlayerController)
    {
        JCS_Debug::Error(
            L"No %s in the scene, and you still trying to process the input.",
            L"JCSUE_Character");

        return false;
    }
#endif

    if (GetKeyDown(keyCode))
    {
        k_keysDown[keyCode] = true;
        return true;
    }

    if (GetKeyUp(keyCode))
    {
        k_keysDown[keyCode] = false;
        return false;
    }

    return k_keysDown[keyCode];
}

// Set the cursor position on the screen buffer.
void JCS_Input::SetMouseLocation(int posX, int posY)
{
    k_pPlayerController->SetMouseLocation(posX, posY);
}
