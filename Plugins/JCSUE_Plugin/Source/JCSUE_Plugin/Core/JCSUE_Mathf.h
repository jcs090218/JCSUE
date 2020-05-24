/**
 * $File: JCSUE_Mathf.h $
 * $Date: 2017-03-03 22:02:29 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright (c) 2017 by Shen, Jen-Chieh $
 */
#pragma once

#include "../JCSUE_Plugin.h"

 /**
  * @func JCSUE_Mathf
  * @brief Store all the math function here.
  * P.S. very simple.
  */
class JCSUE_Mathf
{
public:
	JCSUE_Mathf();
	virtual ~JCSUE_Mathf();

	/**
	 * @func Pow
	 * @brief exponent of the base.
	 * @param b : base
	 * @param e : exponent
	 * @return float : power of the value.
	 */
	static float Pow(float32 b, int32 e);

	/**
	 * @func Sqr
	 * @brief sqr a value
	 * @param value to square.
	 * @return float : squred value.
	 */
	static float Sqr(float32 val);

	/* setter */

	/* getter */

};
