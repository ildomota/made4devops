#ifndef PARSE_H
#define PARSE_H

#include <stdbool.h>

bool is_operator(char c);
float get_operand(const char *token);
char get_operator(const char *token);

#endif