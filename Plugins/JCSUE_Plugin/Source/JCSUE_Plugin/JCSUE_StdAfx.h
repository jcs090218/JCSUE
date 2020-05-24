/**
 * $File: JCSUE_StdAfx.h $
 * $Date: 2017-02-26 15:18:31 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright (c) 2017 by Shen, Jen-Chieh $
 */

#pragma once

// NOTE: Comment this out if importing dll we are exporting to dll file.
#define EXPORTS_DLL

// Defines import/export dynamic link library.
#ifndef EXPORTS_DLL
// Import
#if defined (_MSC_VER)
// Microsoft
#define DECLSPEC_ACTION __declspec(dllimport)
#define JCSUE_DLL __declspec(dllimport)
#elif defined (__GNUC__)
// GCC
#define DECLSPEC_ACTION __attribute__((visibility(dllimport)))
#define JCSUE_DLL __attribute__((visibility(dllimport)))
#else
// Default
#define DECLSPEC_ACTION
#define JCSUE_DLL
#endif
#else
// Export
#if defined (_MSC_VER)
// Microsoft
#define DECLSPEC_ACTION __declspec(dllexport)
#define JCSUE_DLL __declspec(dllexport)
#elif defined (__GNUC__)
// GCC
#define DECLSPEC_ACTION __attribute__((visibility(dllexport)))
#define JCSUE_DLL __attribute__((visibility(dllexport)))
#else
// Default
#define DECLSPEC_ACTION
#define JCSUE_DLL
#endif
#endif


// prevent redefined
#undef EXTERN_C_BEGIN
#undef EXTERN_C_END

// c plus plus define?
#ifdef __cplusplus
#define EXTERN_C_BEGIN extern "C" {
#define EXTERN_C_END }
#else
// set to the empty sign
#define EXTERN_C_BEGIN
#define EXTERN_C_END
#endif


/**
 * @def MAX_BUFFER_LOG
 * @brief Maxinum of the buffer per log.
 */
#define JCSUE_MAX_BUFFER_LOG 128
