#include <stdio.h>
#include <util/delay.h>
#include <avr/io.h>
#include "serial_com.h"
#include "led.h"
#include "indicator.h"
#include "calculator.h"
#include "ui.h"

int main(void)
{
    char buffer[100];

    uart_init();
    led_init();
    calculator_init();

    ui_puts("Enter expression:\n");

    while (1)
    {
        if (ui_gets(buffer) != NULL)
        {
            float result = calculate(buffer);
            printf("Result: %f\n", result);
        }
    }
}