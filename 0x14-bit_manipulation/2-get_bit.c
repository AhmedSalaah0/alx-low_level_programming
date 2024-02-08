#include <stdio.h>
#include "main.h"
/**
 * get_bit: find a bit in an index
 * @index: index of bit
 * @n: input number
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i < 63; i++, n >>= 1) 
	{
		if (index == i)
			return (n & 1);
	}
	return (-1);
}
