/**
* $File: JCSUE_RotateAction.h $
* $Date: 2017-03-11 14:25:53 $
* $Revision: $
* $Creator: Jen-Chieh Shen $
* $Notice: See LICENSE.txt for modification and distribution information
*                   Copyright (c) 2017 by Shen, Jen-Chieh $
*/
#pragma once

#include "Components/ActorComponent.h"
#include "JCSUE_RotateAction.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class JCSUE_API UJCSUE_RotateAction : public UActorComponent
{
	GENERATED_BODY()

private:
	// Flag to check active this component.
	UPROPERTY(EditAnywhere, Category = "Runtime Variables")
	bool m_active = true;

	// Axis this actor rotate.
	//UPROPERTY(EditAnywhere, Category = "Runtime Variables")
	TEnumAsByte<JCSUE::JCSUE_Axis> m_axis = JCSUE::JCSUE_Axis::k_x;

	// How fast actor rotate.
	UPROPERTY(EditAnywhere, Category = "Runtime Variables")
	float m_rotateSpeed = 10.0f;

	// current actor.
	AActor* m_pActor = nullptr;

public:
	// Sets default values for this component's properties
	UJCSUE_RotateAction();

	// Called when the game starts
	virtual void BeginPlay() override;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
#ifdef JCSUE_DEBUG
	/**
	* @func Test
	* @brief Test code put here.
	*/
	void Test();
#endif
};
