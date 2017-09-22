#ifndef __JCSUE_H__
/**
* $File: JCSUE.h $
* $Date: 2017-02-26 15:06:09 $
* $Revision: $
* $Creator: Jen-Chieh Shen $
* $Notice: See LICENSE.txt for modification and distribution information
*                   Copyright (c) 2017 by Shen, Jen-Chieh $
*/
#define __JCSUE_H__


// UE defines
#include "Engine.h"

// lib version defines
#ifndef JCSUE_LIB
#define JCSUE_LIB
#endif


#ifdef UE_BUILD_DEBUG
/**
 * @def JCSUE_DEBUG
 * @brief Debug macro
 */
#define JCSUE_DEBUG
#else
/**
 * @def JCSUE_DEBUG
 * @brief Release macro
 */
#define JCSUE_RELEASE
#endif

// defines
#include "JCSUE_StdAfx.h"
#include "JCSUE_Name.h"

// enums
#include "Core/Enums/JCSUE_Axis.h"
#include "Core/Enums/JCSUE_Keys.h"

// core
#include "Core/JCSUE_Mathf.h"
#include "Core/JCSUE_String.h"
#include "Core/JCSUE_WString.h"
#include "Core/Tweener/JCSUE_Tweener.h"
#include "Core/Tweener/JCSUE_Easing.h"

// supoort
#include "Support/JCSUE_Debug.h"
#include "Support/JCSUE_Utility.h"
#include "Support/JCSUE_Input.h"

#endif /* __JCSUE_H__ */
