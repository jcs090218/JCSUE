/**
 * $File: Test_UserWidget.h $
 * $Date: 2020-06-29 18:09:30 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright © 2020 by Shen, Jen-Chieh $
 */

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Test_UserWidget.generated.h"

/**
 * @class UTest_UserWidget
 * @desc Test the widget in Unreal Engine. Get to know how exactly the UI 
 * system works in Unreal Engine.
 */
UCLASS()
class JCSUE_API UTest_UserWidget : public UUserWidget
{
    GENERATED_BODY()

protected:

    virtual void NativeConstruct() override;

private:
    UFUNCTION() void PrintHello();
};
