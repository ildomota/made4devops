#ifndef LED_H
#define LED_H

typedef enum
{
    LED_OFF,
    LED_ON
} led_state_t;

void led_init(void);
void led_set(led_state_t state);

#endif