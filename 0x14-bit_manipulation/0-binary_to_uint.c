#include "main.h"
/**
 * binary_to_uint - convert binary number to decimal
 * @b:first bit of binary num
 * Return: 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int x = 0;
int i = 0;

if (!b)
return (0);

while (b[i] != '\0')
{
if (b[i] == '1')
{
x = (x << 1) + 1;
}
else if (b[i] == '0')
{
x = x << 1;
}
else
{
return (0);
}
i++;
}

return (x);
}
