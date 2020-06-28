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
 * @def JCS_DEBUG
 * @brief Debug macro
 */
#define JCS_DEBUG
#else
/**
 * @def JCS_DEBUG
 * @brief Release macro
 */
#define JCSUE_RELEASE
#endif

/* Defines */
#include "JCS_StdAfx.h"
#include "JCS_Name.h"

/* Enums */
#include "Core/Enums/JCS_Axis.h"
#include "Core/Enums/JCS_Keys.h"

/* Supoort */
#include "Supports/JCS_Debug.h"
#include "Supports/JCS_Utility.h"
#include "Supports/JCS_Input.h"

/* Core */
#include "Core/JCS_Mathf.h"
#include "Core/JCS_String.h"
#include "Core/JCS_WString.h"
#include "Core/Tweener/JCS_Tweener.h"
#include "Core/Tweener/JCS_Easing.h"

/* Components */
#include "Components/JCS_Character.h"
#include "Components/Actions/JCS_GoStraightAction.h"
#include "Components/Actions/JCS_RotateAction.h"
#include "Components/Events/JCS_OrderEvent.h"
