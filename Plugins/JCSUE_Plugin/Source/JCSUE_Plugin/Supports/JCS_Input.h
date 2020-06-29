/**
 * $File: JCS_Input.h $
 * $Date: 2017-03-11 16:24:57 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright (c) 2017 by Shen, Jen-Chieh $
 */

#pragma once

#include <map>

 /**
  * @class JCS_Input
  * @brief Handle buffer from application layer.
  */
class JCSUE_PLUGIN_API JCS_Input
{
private:
    // global player controller.
    static APlayerController* k_pPlayerController;

    // check if the key is held down.
    //
    // NOTE: fast insert, delete, search, not allow duplicate key.
    static std::map<FKey, bool> k_keysDown;

public:

    /**
     * @func SetMouseLocation
     * @brief Set the cursor position on the screen buffer.
     * @param posX : x-axis position
     * @param posY : y-axis position
     */
    static void SetMouseLocation(int posX, int posY);

    /**
     * @func GetKeyDown
     * @brief Check if the key is down.
     * @param keyCode : code of the key id.
     * @return bool : key is donw or not.
     */
    static bool GetKeyDown(FKey keyCode);

    /**
     * @func GetKeyUp
     * @brief Check if the key is up.
     * @param keyCode : code of the key id.
     * @return bool : key is up or not.
     */
    static bool GetKeyUp(FKey keyCode);

    /**
     * @func GetKey
     * @brief Check if the key is currently pressed.
     * @param keyCode : code of the key id.
     * @return bool : key is pressed or not.
     */
    static bool GetKey(FKey keyCode);

    /* setter */

    /**
     * @func SetGlobalInputComponent
     * @brief Set the global input component.
     * @param pUInputComponent : input component to point to.
     */
    static void SetGlobalPlayerController(class APlayerController* const pPlayerController);

    /* getter */

    /**
     * @func GetGlobalPlayerController
     * @brief Input device object handle buffer from 'OS'.
     * @return APlayerController* : input device.
     */
    static APlayerController* GetGlobalPlayerController();
};
