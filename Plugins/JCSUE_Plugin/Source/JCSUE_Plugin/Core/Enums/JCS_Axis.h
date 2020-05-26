/**
 * $File: JCS_Axis.h $
 * $Date: 2017-03-10 00:19:20 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright (c) 2017 by Shen, Jen-Chieh $
 */

 /**
  * ATTENTION(jenchieh): if declaring the enum in isolate header file.
  * Do not use "include guard", use "pragma once" instead.
  */
#pragma once

/**
 * @enum JCS_Axis
 * @brief x, y, z axis.
 */
UENUM()
enum JCS_Axis
{
    k_none UMETA(DisplayName = "NONE"),

    k_x UMETA(DisplayName = "X"),
    k_y UMETA(DisplayName = "Y"),
    k_z UMETA(DisplayName = "Z"),
};
