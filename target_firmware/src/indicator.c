#include "indicator.h"
#include "led.h"

static indicator_t current_state = INDICATOR_OFF;

void indicator_set(indicator_t state)
{
    current_state = state;

    if (state == INDICATOR_ON)
    {
        led_set(LED_ON);
    }
    else if (state == INDICATOR_OFF)
    {
        led_set(LED_OFF);
    }
}