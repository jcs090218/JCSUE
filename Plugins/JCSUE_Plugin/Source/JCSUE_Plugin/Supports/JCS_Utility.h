/**
 * $File: JCS_Utility.h $
 * $Date: 2017-03-09 00:47:22 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright (c) 2017 by Shen, Jen-Chieh $
 */

#pragma once

#include "Components/ActorComponent.h"

namespace JCS_Utility
{
    /**
     * @func GetComponent
     * @desc Get a component from ACTOR.
     * @return Target component pointer that you want to get.
     */
    template <class T>
    T* GetComponent(const AActor* actor)
    {
        auto ac = actor->GetComponentByClass(T::StaticClass());
        return Cast<T>(ac);
    }
}
