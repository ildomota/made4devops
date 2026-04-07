#include "ui.h"
#include <stdio.h>

void ui_puts(const char *text)
{
    printf("%s", text);
}

char *ui_gets(char *buffer)
{
    return scanf("%s", buffer) ? buffer : NULL;
}