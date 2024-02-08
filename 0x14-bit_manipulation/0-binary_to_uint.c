#include <stdio.h>
#include <math.h>
#include <string.h>
#include "main.h"
/**
 *binary_to_uint - convert bin num to uint
 *@b: bin num
 *Return: converted num if can otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = strlen(b), j;
	unsigned int res = 0;

	if (b == NULL)
	return (0);
	for (i--, j = 1; i >= 0; i--, j *= 2)
	{
	if (b[i] != '1' && b[i] != '0')
	{
	return (0);
	}
	if (b[i] & 1)
	{
	res += j;
	}
	}

return (res);
}
