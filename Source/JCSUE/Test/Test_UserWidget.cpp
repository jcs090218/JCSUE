/**
 * $File: Test_UserWidget.cpp $
 * $Date: 2020-06-29 18:09:16 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright © 2020 by Shen, Jen-Chieh $
 */

#include "Test_UserWidget.h"
#include "Components/Button.h"
#include "../JCSUE.h"

void UTest_UserWidget::NativeConstruct()
{
    Super::NativeConstruct();

    auto btn = Cast<UButton>(GetWidgetFromName("Btn_Test"));

    if (btn)
    {
        FScriptDelegate Del;
        Del.BindUFunction(this, "PrintHello");
        btn->OnClicked.Add(Del);
    }
}

void UTest_UserWidget::PrintHello()
{
    JCS_Debug::Log(L"Hello from Button click!");
}
