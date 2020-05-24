/**
 * $File: JCSUE_Mathf.cpp $
 * $Date: 2017-03-03 22:02:56 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright (c) 2017 by Shen, Jen-Chieh $
 */

#include "./JCSUE_Mathf.h"
#include "../JCSUE_Plugin.h"

JCSUE_Mathf::JCSUE_Mathf()
{
	// empty..
}

JCSUE_Mathf::~JCSUE_Mathf()
{
	// empty..
}

// exponent of the base.
float32 JCSUE_Mathf::Pow(float32 b, int32 e)
{
	float result = b;

	for (int index = 0;
		index < e;
		++index)
	{
		result *= result;
	}

	return result;
}

// sqr a value.
float32 JCSUE_Mathf::Sqr(float32 val)
{
	return val * val;
}
