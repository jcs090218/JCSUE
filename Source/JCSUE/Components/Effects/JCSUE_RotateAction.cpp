/**
* $File: JCSUE_RotateAction.cpp $
* $Date: 2017-03-11 14:25:09 $
* $Revision: $
* $Creator: Jen-Chieh Shen $
* $Notice: See LICENSE.txt for modification and distribution information
*                   Copyright (c) 2017 by Shen, Jen-Chieh $
*/
#include "JCSUE.h"
#include "JCSUE_RotateAction.h"

// Sets default values for this component's properties
UJCSUE_RotateAction::UJCSUE_RotateAction()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UJCSUE_RotateAction::BeginPlay()
{
	Super::BeginPlay();

	m_pActor = GetOwner();
}

// Called every frame
void UJCSUE_RotateAction::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

#ifdef JCSUE_DEBUG
	Test();
#endif

	// check if action active?
	if (!m_active)
		return;

	// do action.
	switch (m_axis)
	{
	case JCSUE::JCSUE_Axis::k_x:
	{
		FRotator newRotation = FRotator(m_rotateSpeed * DeltaTime, 0, 0);
		m_pActor->AddActorLocalRotation(newRotation);
	}
	break;
	case JCSUE::JCSUE_Axis::k_y:
	{
		FRotator newRotation = FRotator(0, m_rotateSpeed * DeltaTime, 0);
		m_pActor->AddActorLocalRotation(newRotation);
	}
	break;
	case JCSUE::JCSUE_Axis::k_z:
	{
		FRotator newRotation = FRotator(0, 0, m_rotateSpeed * DeltaTime);
		m_pActor->AddActorLocalRotation(newRotation);
	}
	break;
	}
}

#ifdef JCSUE_DEBUG
// Test code put here.
void UJCSUE_RotateAction::Test()
{
	if (JCSUE_Input::GetKeyDown(EKeys::K))
	{
		m_active = !m_active;
	}
}
#endif
