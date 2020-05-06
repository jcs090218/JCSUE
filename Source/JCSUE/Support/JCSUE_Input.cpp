/**
 * $File: JCSUE_Input.cpp $
 * $Date: 2017-03-11 16:25:50 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright (c) 2017 by Shen, Jen-Chieh $
 */

#include "../JCSUE.h"

namespace JCSUE
{
    APlayerController* JCSUE_Input::k_pPlayerController = nullptr;
    std::map<FKey, bool> JCSUE_Input::k_keysDown;

    // Set the global input component
    void JCSUE_Input::SetGlobalPlayerController(APlayerController* const pPlayerController)
    {
        k_pPlayerController = pPlayerController;
    }

    // Input device object handle buffer from 'OS'.
    APlayerController* JCSUE_Input::GetGlobalPlayerController()
    {
        return k_pPlayerController;
    }

    // Check if the key is down.
    bool JCSUE_Input::GetKeyDown(FKey keyCode)
    {
#ifdef JCSUE_DEBUG
        if (!k_pPlayerController)
        {
            JCSUE_Debug::Error(
                L"No %s in the scene, and you still trying to process the input.",
                L"JCSUE_Character");

            return false;
        }
#endif

        return k_pPlayerController->WasInputKeyJustPressed(keyCode);
    }

    // Check if the key is up.
    bool JCSUE_Input::GetKeyUp(FKey keyCode)
    {
#ifdef JCSUE_DEBUG
        if (!k_pPlayerController)
        {
            JCSUE_Debug::Error(
                L"No %s in the scene, and you still trying to process the input.",
                L"JCSUE_Character");

            return false;
        }
#endif

        return k_pPlayerController->WasInputKeyJustReleased(keyCode);
    }

    // Check if the key is currently pressed.
    bool JCSUE_Input::GetKey(FKey keyCode)
    {
#ifdef JCSUE_DEBUG
        if (!k_pPlayerController)
        {
            JCSUE_Debug::Error(
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
    void JCSUE_Input::SetMouseLocation(int posX, int posY)
    {
        k_pPlayerController->SetMouseLocation(posX, posY);
    }
}
