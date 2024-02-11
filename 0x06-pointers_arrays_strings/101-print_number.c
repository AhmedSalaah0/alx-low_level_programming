#include "main.h"
#include <limits.h>
/**
 * print_number - print number using _putchar
 * @n: the number
 * Return: Void
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10 != 0)
print_number(n / 10);
_putchar('0' + n % 10);
}
