#include "main.h"
#include <stdio.h>

/**
* *_memset - fills memory with constant byte
* @s: pointer to put the constant
* @b: constant number
* @n: number of bytes to be changed
* Return: changed array with new value for n bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
