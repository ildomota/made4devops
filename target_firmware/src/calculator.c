#include <string.h>
#include "parser.h"
#include "ops.h"
#include "calculator.h"
#include "stack.h"
#include "parse.h"

void calculator_init(void)
{
    reset();
}

float calculate(const char *input)
{
    char token[20];
    int index = 0;

    reset();

    while (next_token((char *)input, &index, token))
    {
        if (strcmp(token, "+") == 0)
        {
            float b = pop();
            float a = pop();
            push(add(a, b));
        }
        else if (strcmp(token, "-") == 0)
        {
            float b = pop();
            float a = pop();
            push(sub(a, b));
        }
        else if (strcmp(token, "*") == 0)
        {
            float b = pop();
            float a = pop();
            push(mul(a, b));
        }
        else if (strcmp(token, "/") == 0)
        {
            float b = pop();
            float a = pop();
            push(divi(a, b));
        }
        else
        {
            float value = get_operand(token);
            push(value);
        }
    }

    return pop();
}