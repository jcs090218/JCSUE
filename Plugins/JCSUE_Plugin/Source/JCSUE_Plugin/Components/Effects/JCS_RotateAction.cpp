/**
 * $File: JCS_RotateAction.cpp $
 * $Date: 2017-03-11 14:25:09 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright (c) 2017 by Shen, Jen-Chieh $
 */

#include "./JCS_RotateAction.h"
#include "../../JCSUE_Plugin.h"

UJCS_RotateAction::UJCS_RotateAction()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UJCS_RotateAction::BeginPlay()
{
    Super::BeginPlay();

    m_pActor = GetOwner();
}

void UJCS_RotateAction::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

#ifdef JCS_DEBUG
    Test();
#endif

    // check if action active?
    if (!m_active)
        return;

    // do action.
    switch (m_axis)
    {
    case JCS_Axis::k_x:
    {
        FRotator newRotation = FRotator(m_rotateSpeed * DeltaTime, 0, 0);
        m_pActor->AddActorLocalRotation(newRotation);
    }
    break;
    case JCS_Axis::k_y:
    {
        FRotator newRotation = FRotator(0, m_rotateSpeed * DeltaTime, 0);
        m_pActor->AddActorLocalRotation(newRotation);
    }
    break;
    case JCS_Axis::k_z:
    {
        FRotator newRotation = FRotator(0, 0, m_rotateSpeed * DeltaTime);
        m_pActor->AddActorLocalRotation(newRotation);
    }
    break;
    }
}

#ifdef JCS_DEBUG
// Test code put here.
void UJCS_RotateAction::Test()
{
    if (JCS_Input::GetKeyDown(EKeys::K))
    {
        m_active = !m_active;
    }
}
#endif
