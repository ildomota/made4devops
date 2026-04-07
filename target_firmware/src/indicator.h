#ifndef INDICATOR_H
#define INDICATOR_H

typedef enum
{
    INDICATOR_OFF,
    INDICATOR_ON,
    INDICATOR_BLINK_SLOW,
    INDICATOR_BLINK_FAST
} indicator_state_t;

void indicator_set_state(indicator_state_t state);

#endif