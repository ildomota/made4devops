#include "stack.h"

#define STACK_SIZE 10

static float stack[STACK_SIZE];
static int top = -1;

void push(float value)
{
    if (top < STACK_SIZE - 1)
    {
        top++;
        stack[top] = value;
    }
}

float pop(void)
{
    if (top >= 0)
    {
        float val = stack[top];
        top--;
        return val;
    }
    return 0;
}

bool is_empty(void)
{
    return top == -1;
}

bool is_full(void)
{
    return top == STACK_SIZE - 1;
}

void reset(void)
{
    top = -1;
}