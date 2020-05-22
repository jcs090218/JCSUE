//#ifndef __JCSUE_AXIS_H__
/**
 * $File: JCSUE_Axis.h $
 * $Date: 2017-03-10 00:19:20 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright (c) 2017 by Shen, Jen-Chieh $
 */
//#define __JCSUE_AXIS_H__

/**
 * ATTENTION(jenchieh): if declaring the enum in isolate header file. 
 * Do not use "include guard", use "pragma once" instead.
 * 
 * NOTE(jenchieh): This is stupid... :P
 */
#pragma once

UENUM()
namespace JCSUE
{
	/**
	* @enum JCSUE_Axis
	* @brief x, y, z axis.
	*/
	enum JCSUE_Axis
	{
		k_none UMETA(DisplayName = "NONE"),

		k_x UMETA(DisplayName = "X"),
		k_y UMETA(DisplayName = "Y"),
		k_z UMETA(DisplayName = "Z"),
	};
}

typedef JCSUE::JCSUE_Axis JCSUE_Axis;

//#endif /* __JCSUE_AXIS_H__ */
