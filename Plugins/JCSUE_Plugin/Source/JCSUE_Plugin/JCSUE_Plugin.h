// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FJCSUE_PluginModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};


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

// supoort
#include "Supports/JCSUE_Debug.h"
#include "Supports/JCSUE_Utility.h"
#include "Supports/JCSUE_Input.h"

// core
#include "Core/JCSUE_Mathf.h"
#include "Core/JCSUE_String.h"
#include "Core/JCSUE_WString.h"
#include "Core/Tweener/JCSUE_Tweener.h"
#include "Core/Tweener/JCSUE_Easing.h"
