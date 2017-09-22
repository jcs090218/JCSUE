// Notice: See LICENSE.txt for modification and distribution information - Copyright (c) 2017 by Shen, Jen-Chieh

#pragma once


#include "Widgets/SCompoundWidget.h"

/**
 * 
 */
class JCSUE_API SJCSUE_CompoundWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SJCSUE_CompoundWidget)
	{}
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);
};
