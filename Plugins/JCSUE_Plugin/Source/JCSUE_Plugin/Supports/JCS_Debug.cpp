/**
 * $File: JCS_Debug.cpp $
 * $Date: 2017-02-26 15:11:05 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright (c) 2017 by Shen, Jen-Chieh $
 */

#include "./JCS_Debug.h"
#include "../JCSUE_Plugin.h"
#include "../Core/JCS_String.h"

DEFINE_LOG_CATEGORY(JCS_Log);
DEFINE_LOG_CATEGORY(JCS_Error);
DEFINE_LOG_CATEGORY(JCS_Warning);

JCS_Debug::JCS_Debug()
{
    // empty..
}

JCS_Debug::~JCS_Debug()
{
    // empty..
}

// normal logger
void JCS_Debug::Log(const wchar_t* msg, ...)
{
    // NOTE(jenchieh): no longer need this.
    //int argc = GetArgumentCount(msg);

    wchar_t temp[JCS_MAX_BUFFER_LOG] = L"";
    wchar_t result[JCS_MAX_BUFFER_LOG] = L"";
    wcscpy_s(temp, msg);

    va_list va;
    va_start(va, msg);
    ConvertFinalResult(temp, result, va);
    va_end(va);

    UE_LOG(JCS_Log, Log, TEXT("¶ %s"), result);
}

// error logger
void JCS_Debug::Error(const wchar_t* msg, ...)
{
    wchar_t temp[JCS_MAX_BUFFER_LOG] = L"";
    wchar_t result[JCS_MAX_BUFFER_LOG] = L"";
    wcscpy_s(temp, msg);

    va_list va;
    va_start(va, msg);
    ConvertFinalResult(temp, result, va);
    va_end(va);

    UE_LOG(JCS_Error, Error, TEXT("¶ %s"), result);
}

// warnings logger
void JCS_Debug::Warning(const wchar_t* msg, ...)
{
    wchar_t temp[JCS_MAX_BUFFER_LOG] = L"";
    wchar_t result[JCS_MAX_BUFFER_LOG] = L"";
    wcscpy_s(temp, msg);

    va_list va;
    va_start(va, msg);
    ConvertFinalResult(temp, result, va);
    va_end(va);

    UE_LOG(JCS_Warning, Warning, TEXT("¶ %s"), result);
}


// Get the argument count from the message format.
int32 JCS_Debug::GetArgumentCount(const wchar_t* msg)
{
    // count holder.
    int cnt = 0;

    for (cnt = 0; cnt < wcslen(msg); ++msg)
    {
        if (*msg == '%')
        {
            wchar_t nextChar = *(++msg);

            switch (nextChar)
            {
            case 'd':
            case 'c':
            case 's':
            case 'x':
                ++cnt;
                break;
            }
        }
    }

    return cnt;
}

// Convert format and argument to wild char ptr.
void JCS_Debug::ConvertFinalResult(wchar_t src[], wchar_t dest[], va_list va)
{
    // offset of the destination
    int offset = 0;

    // offset of the source
    int targetOffset = 0;

    // flags that sees '%' char
    bool startFlag = false;

    for (unsigned int count = 0; count < wcslen(src); ++count)
    {
        //UE_LOG(JCS_Warning, Warning, TEXT("* %s"), dest);

        // set terminated string sign.
        dest[count + offset] = L'\0';

        // get current char
        wchar_t currentChar = src[count + targetOffset];

        // check if start the flag.
        if (!startFlag && currentChar == L'%')
        {
            dest[count + offset] = L' ';
            --count;

            startFlag = true;
            continue;
        }

        if (startFlag)
        {
            // get next character
            wchar_t nextChar = src[count + targetOffset + 1];

            switch (nextChar)
            {
                /* decimal */
            case L'd':
            {
                // srcorary hold the integer buffer string.
                wchar_t valBuffer[JCS_MAX_BUFFER_LOG];
                const int decimal = 10;

                // NOTE(jenchieh): this never get the correct value...
                int val = va_arg(va, int);

                _itow_s(val, valBuffer, JCS_MAX_BUFFER_LOG, decimal);

                // concatenate the two wide char array!
                /*
                  wcscat_s(dest, JCS_MAX_BUFFER_LOG, valBuffer);
                */
                // >>>> OR <<<<<
                ///*
                JCS_WString::WCharArrayCat(valBuffer, dest, JCS_MAX_BUFFER_LOG);
                //*/

                offset += wcslen(valBuffer) - 1;
                ++targetOffset;
            }
            break;
            /* string */
            case L's':
            {
                wchar_t* val = va_arg(va, wchar_t*);

                JCS_WString::WCharArrayCat(val, dest, JCS_MAX_BUFFER_LOG);

                offset += wcslen(val) - 1;
                ++targetOffset;
            }
            break;
            /* char */
            case L'c':
            {
                wchar_t* val = va_arg(va, wchar_t*);

                JCS_WString::WCharArrayCat(val, dest, JCS_MAX_BUFFER_LOG);

                offset += wcslen(val) - 1;
                ++targetOffset;
            }
            break;
            /* float */
            case L'f':
            {
                // srcorary hold the integer buffer string.
                wchar_t valBuffer[JCS_MAX_BUFFER_LOG];
                const int decimal = 10;

                double val = va_arg(va, double);


                // get float/double to wide string.
                std::wstring wideString = JCS_WString::TypeNameToWString(val);

                // copy wide string to wide array.
                JCS_WString::WString_To_WCharArray(wideString, valBuffer);

                // concatenate the two wide char array!
                JCS_WString::WCharArrayCat(valBuffer, dest, JCS_MAX_BUFFER_LOG);

                offset += wcslen(valBuffer) - 1;
                ++targetOffset;
            }
            break;
            /* error handle */
            default:
            {
                Error(L"Wrong argument type...");
            }
            break;
            }

            // end flags
            startFlag = false;
        }
        else
        {
            dest[count + offset] = src[count + targetOffset];
        }
    }
}
