/**
 * $File: JCS_DestroyObjectWithTime.cpp $
 * $Date: 2020-06-27 22:10:29 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright © 2020 by Shen, Jen-Chieh $
 */

#include "JCS_DestroyObjectWithTime.h"

UJCS_DestroyObjectWithTime::UJCS_DestroyObjectWithTime()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UJCS_DestroyObjectWithTime::BeginPlay()
{
    Super::BeginPlay();

    m_pActor = GetOwner();
}

void UJCS_DestroyObjectWithTime::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    DoDestroy(DeltaTime);
}

void UJCS_DestroyObjectWithTime::DoDestroy(float DeltaTime)
{
    timer += DeltaTime;

    if (timer < timeToDestroy)
        return;

    m_pActor->Destroy();
}
