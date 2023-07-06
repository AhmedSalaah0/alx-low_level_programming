#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/**
 *binary_to_uint - convert binary to decimal
 *@b: binary num as a string
 *Return: num after convert
 */


unsigned int binary_to_uint(const char *b)
{
int res = 0, bs = 1, i, len = strlen(b);
char *str = (char *)b;

if (len <= 1)
return atoi(b);

for (i = len - 1; i >= 0; i--)
{
if (str[i] == '1')
res += bs;
bs *= 2;
}
return (res);
}
