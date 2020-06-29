/**
 * $File: JCS_Debug.h $
 * $Date: 2017-02-26 15:10:56 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright (c) 2017 by Shen, Jen-Chieh $
 */

#pragma once

#include "../JCS_StdAfx.h"

DECLARE_LOG_CATEGORY_EXTERN(JCS_Log, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(JCS_Error, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(JCS_Warning, Log, All);

/**
 * @class JCS_Debug
 * @brief Debug related class will be design here.
 */
class JCSUE_PLUGIN_API JCS_Debug
{
public:
    JCS_Debug();
    virtual ~JCS_Debug();

    /**
     * @func Log
     * @brief normal logger
     * @param msg : Message to log.
     * @param ... : types.
     */
    static void Log(const wchar_t* msg, ...);

    /**
     * @func Error
     * @brief error logger
     * @param msg : Message to log.
     * @param ... : types.
     */
    static void Error(const wchar_t* msg, ...);

    /**
     * @func Warnings
     * @brief warnings logger
     * @param msg : Message to log.
     * @param ... : types.
     */
    static void Warning(const wchar_t* msg, ...);

private:
    /**
     * @func GetArgumentCount
     * @brief Get the argument count from the message.
     * @param msg : format of the message.
     * @return int : count of the argument.
     */
    static int32 GetArgumentCount(const wchar_t* msg);

    /**
     * @func ConvertFinalResult
     * @brief Convert format and argument to wide char ptr.
     * @param msg : format
     * @param va : argument list.
     */
    static void ConvertFinalResult(wchar_t msg[], wchar_t result[], va_list va);
};
