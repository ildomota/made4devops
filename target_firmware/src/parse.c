#include "parse.h"
#include <stdlib.h>

bool is_operator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

float get_operand(const char *token)
{
    return strtof(token, NULL);
}

char get_operator(const char *token)
{
    return token[0];
}