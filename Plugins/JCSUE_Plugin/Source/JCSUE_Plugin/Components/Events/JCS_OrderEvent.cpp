/**
 * $File: JCS_OrderEvent.cpp $
 * $Date: 2020-06-28 16:48:36 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright © 2020 by Shen, Jen-Chieh $
 */

#include "JCS_OrderEvent.h"

UJCS_OrderEvent::UJCS_OrderEvent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UJCS_OrderEvent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    DoLoop(DeltaTime);
}

void UJCS_OrderEvent::StartEvent(float it, TFunction<void()> fnc)
{
    this->intervalTime = it;
    this->execution = fnc;

    this->m_active = true;
}

void UJCS_OrderEvent::DoneEvent()
{
    this->m_active = false;
}

void UJCS_OrderEvent::DoLoop(float DeltaTime)
{
    if (!this->m_active)
        return;

    this->m_timer += DeltaTime;

    if (m_timer < intervalTime)
        return;

    if (this->execution != nullptr)
        this->execution();

    m_timer = 0.0f;
}
