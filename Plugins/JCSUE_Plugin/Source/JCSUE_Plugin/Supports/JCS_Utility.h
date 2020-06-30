/**
 * $File: JCS_Utility.h $
 * $Date: 2017-03-09 00:47:22 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright (c) 2017 by Shen, Jen-Chieh $
 */

#pragma once

#include "Blueprint/UserWidget.h"
#include "Components/ActorComponent.h"

namespace JCS_Utility
{
    /**
     * @func GetComponent
     * @brief Get a component from ACTOR.
     * @param { AActor* } actor : Target actor object.
     * @return { T* } : Target component pointer that you want to get.
     */
    template <class T>
    T* GetComponent(AActor* actor)
    {
        auto ac = actor->GetComponentByClass(T::StaticClass());
        return Cast<T>(ac);
    }

    /**
     * @func GetComponent
     * @brief Get a component from ACTOR from component reference.
     * @param { AActor* } actor : Target actor object.
     * @param { FComponentReference } comRef : Component reference.
     * @return { T* } : Target component pointer that you want to get.
     */
    template <class T>
    T* GetComponent(AActor* actor, FComponentReference comRef)
    {
        auto component = comRef.GetComponent(actor);
        return Cast<T>(component);
    }

    /**
     * @func FindComponentByClass
     * @brief Find a component by class name.
     * @param { AActor* } actor : Target actor object.
     * @return { T* } : Target component pointer that you want to get.
     */
    template <class T>
    T* FindComponentByClass(AActor* actor)
    {
        return actor->FindComponentByClass<T>();
    }

    /**
     * @func AddToViewport
     * @brief Add widget by PATH to WORLD.
     * @param { UWorld* } world : World to add to.
     * @param { TCHAR* } path : Widget load path.
     * @return { bool } :
     *   - Return true, if succesfully added.
     *   - Return false, if failed adding.
     */
    inline bool AddToViewport(UWorld* world, TCHAR* path)
    {
        UClass* testWidget = LoadClass<UUserWidget>(NULL, path);
        if (!testWidget)
            return false;

        APlayerController* p_PC = world->GetFirstPlayerController();
        if (!p_PC)
            return false;

        UUserWidget* uw = CreateWidget<UUserWidget>(p_PC, testWidget);
        if (!uw)
            return false;

        uw->AddToViewport();
        return true;
    }

    /**
     * @func AddToViewport
     * @brief Add widget by PATH to actor component's world.
     * @param { UActorComponent* } ac : The current actor component action.
     * @param { TCHAR* } path : Widget load path.
     * @return { bool } :
     *   - Return true, if succesfully added.
     *   - Return false, if failed adding.
     */
    inline bool AddToViewport(UActorComponent* ac, TCHAR* path)
    {
        return AddToViewport(ac->GetWorld(), path);
    }
}
