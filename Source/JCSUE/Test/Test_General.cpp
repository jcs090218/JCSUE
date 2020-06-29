/**
 * $File: Test_General.cpp $
 * $Date: 2020-05-23 00:05:07 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright ?2020 by Shen, Jen-Chieh $
 */

#include "./Test_General.h"

UTest_General::UTest_General()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UTest_General::BeginPlay()
{
    Super::BeginPlay();

    if (this->m_pTestWidget)
    {
        this->m_pTestWidget->RemoveFromViewport();
        this->m_pTestWidget = nullptr;
    }

    if (UClass* testWidget = LoadClass<UUserWidget>(NULL, TEXT("/Game/JCSUE/GUI/_Test._Test_C")))
    {
        if (APlayerController* p_PC = GetWorld()->GetFirstPlayerController())
        {
            this->m_pTestWidget = CreateWidget<UUserWidget>(p_PC, testWidget);
            if (this->m_pTestWidget)
            {
                this->m_pTestWidget->AddToViewport();
            }
        }
    }

    //JCS_Debug::Log(L"Hello %d - %d - %d - %d", -1, 10, 33, 99);
    //JCS_Debug::Log(L"Hello %s - %s", L"Something els", L"OP");
    //JCS_Debug::Log(L"Hello %f", 12.321f);

    m_pInputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

    if (!m_pInputComponent)
    {
        //JCS_Debug::Log(L"Faild to find component.");
    }
}

void UTest_General::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
    Super::TickComponent( DeltaTime, TickType, ThisTickFunction );
}
