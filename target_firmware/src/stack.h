#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

void push(float value);
float pop(void);
bool is_empty(void);
bool is_full(void);
void reset(void);

#endif