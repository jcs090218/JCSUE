// Notice: See LICENSE.txt for modification and distribution information - Copyright (c) 2017 by Shen, Jen-Chieh

#include "JCSUE.h"
#include "JCSUE_Character.h"


// Sets default values
AJCSUE_Character::AJCSUE_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJCSUE_Character::BeginPlay()
{
	Super::BeginPlay();
	

	m_pPlayerController = GetWorld()->GetFirstPlayerController();
	if (!m_pPlayerController)
	{
		JCSUE_Debug::Error(
			L"World should have at least one character in the scene...");
	}
	else 
	{
		// set to global
		JCSUE_Input::SetGlobalPlayerController(m_pPlayerController);
	}
}

// Called every frame
void AJCSUE_Character::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );


#ifdef JCSUE_DEBUG
	if (JCSUE_Input::GetKeyDown(EKeys::R))
	{
		JCSUE_Debug::Log(L"Hello World");
	}

	if (JCSUE_Input::GetKey(EKeys::E))
	{
		JCSUE_Debug::Log(L"Hello World : E held down.");
	}
#endif
}

// Called to bind functionality to input
void AJCSUE_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
