#include <stdio.h>
#include "main.h"

/**
 * print_binary - convert dec to bin
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
    unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
    int print_flag = 0;

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    while (mask > 0)
    {
        if (n & mask || print_flag)
        {
            _putchar((n & mask) ? '1' : '0');
            print_flag = 1;
        }
        mask >>= 1;
    }
}

