#include "led.h"
#include <avr/io.h>

void led_init(void)
{
    DDRB |= (1 << PB7);
}

void led_set(led_state_t state)
{
    if (state == LED_ON)
    {
        PORTB |= (1 << PB7);
    }
    else
    {
        PORTB &= ~(1 << PB7);
    }
}