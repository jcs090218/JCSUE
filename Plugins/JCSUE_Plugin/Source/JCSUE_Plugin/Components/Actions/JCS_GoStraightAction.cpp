/**
 * $File: JCS_GoStraightAction.cpp $
 * $Date: 2020-05-26 22:19:50 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright © 2020 by Shen, Jen-Chieh $
 */

#include "JCS_GoStraightAction.h"
#include "../../JCSUE_Plugin.h"

UJCS_GoStraightAction::UJCS_GoStraightAction()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UJCS_GoStraightAction::BeginPlay()
{
    Super::BeginPlay();

    m_pActor = GetOwner();
}

void UJCS_GoStraightAction::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

#ifdef JCS_DEBUG
    Test();
#endif

    // check if action active?
    if (!active)
        return;

    FVector newPos = m_pActor->GetTransform().GetLocation();

    // do action.
    switch (axis)
    {
    case JCS_Axis::k_x:
    {
        newPos.X += moveSpeed * DeltaTime;
    }
    break;
    case JCS_Axis::k_y:
    {
        
        newPos.Y += moveSpeed * DeltaTime;
    }
    break;
    case JCS_Axis::k_z:
    {
        newPos.Z += moveSpeed * DeltaTime;
    }
    break;
    }

    m_pActor->SetActorLocation(newPos);
}

#ifdef JCS_DEBUG
void UJCS_GoStraightAction::Test()
{

}
#endif
