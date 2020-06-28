/**
 * $File: Test_OrderEvent.cpp $
 * $Date: 2020-06-28 19:30:46 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright © 2020 by Shen, Jen-Chieh $
 */

#include "Test_OrderEvent.h"

UTest_OrderEvent::UTest_OrderEvent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UTest_OrderEvent::BeginPlay()
{
    Super::BeginPlay();

    m_pOrderEvent = Cast<UJCS_OrderEvent>(GetOwner()->GetComponentByClass(UJCS_OrderEvent::StaticClass()));

    m_pOrderEvent->StartEvent(this->intervalTime, [this]()
    {
        this->DoExecution();
    });
}

void UTest_OrderEvent::DoExecution()
{
    UE_LOG(LogTemp, Warning, TEXT("%s"), *word);

    ++this->m_counter;

    if (this->m_counter == printCount)
        m_pOrderEvent->DoneEvent();
}