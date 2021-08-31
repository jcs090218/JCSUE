# JCS_OrderEvent

Execute an operation in order with interval of time.

## Variables

| Name | Description |
|:---|:---|
| intervalTime | Time for each execution." |


## Functions

| Name | Description |
|:---|:---|
| StartEvent | Start a new event with interval of time and execution orders. |
| DoneEvent | Terminate the current event loop. |


## Example

Test_OrderEvent.h

```c++
#pragma once

#include "../JCSUE.h"
#include "Components/ActorComponent.h"
#include "Test_OrderEvent.generated.h"

class UJCS_OrderEvent;

/**
 * @class UTest_OrderEvent
 * @brief Test component `JCS_OrderEvent` component.
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class JCSUE_API UTest_OrderEvent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere,
        Category = "Runtime Variables",
        meta = (ToolTip = "Text to print for testing."))
    FString word = "Hello World!!~~";

    UPROPERTY(EditAnywhere,
        Category = "Runtime Variables",
        meta = (ToolTip = "Count to print the text."))
    int printCount = 5;

    UPROPERTY(EditAnywhere,
        Category = "Runtime Variables",
        meta = (ToolTip = "Interval time for each print."))
    float intervalTime = 1.0f;

private:
    GENERATED_BODY()

    int m_counter = 0;

    UJCS_OrderEvent* m_pOrderEvent = nullptr;

public:
    UTest_OrderEvent();

    virtual void BeginPlay() override;

    /* operator */

    /* setter */

    /* getter */

private:
    void DoExecution();
};
```

Test_OrderEvent.cpp

```c++
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
````
