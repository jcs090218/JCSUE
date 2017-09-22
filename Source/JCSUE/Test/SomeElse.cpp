// Notice: See LICENSE.txt for modification and distribution information - Copyright (c) 2017 by Shen, Jen-Chieh

#include "JCSUE.h"
#include "SomeElse.h"


// Sets default values for this component's properties
USomeElse::USomeElse()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USomeElse::BeginPlay()
{
	Super::BeginPlay();

	// ...

	JCSUE::JCSUE_Debug::Log(L"Hello %d - %d - %d - %d", -1, 10, 33, 99);
	JCSUE::JCSUE_Debug::Log(L"Hello %s - %s", L"Something els", L"OP");
	JCSUE::JCSUE_Debug::Log(L"Hello %f", 12.321f);

	m_pInputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

	if (!m_pInputComponent)
	{
		JCSUE_Debug::Log(L"Faild to find component.");
	}
}


// Called every frame
void USomeElse::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );
}
