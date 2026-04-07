#include "parser.h"

char *next_token(char *input, int *index, char *token)
{
    int i = 0;

    while (input[*index] == ' ')
    {
        (*index)++;
    }

    if (input[*index] == '\0')
    {
        return 0;
    }

    while (input[*index] != ' ' && input[*index] != '\0')
    {
        token[i++] = input[*index];
        (*index)++;
    }

    token[i] = '\0';
    return token;
}