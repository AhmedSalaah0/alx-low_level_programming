#include "main.h"
/**
 * binary_to_uint - convert binary number to decimal
 * @b:first bit of binary num
 * Return: 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int x = 0;
if (!b)
return (0);

while (*b)
{
if (*b == '1' || *b == '0')
{
x <<= 1;
x += (*b - '0');
b++;
}
else
{
return (0);
}
}

return (x);
}
