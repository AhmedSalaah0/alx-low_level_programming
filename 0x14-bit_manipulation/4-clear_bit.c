#include "main.h"
/**
 * clear_bit - clear bits from 0 to index
 * @n: the binary number
 * @index: the index
 * Return: 1 if success or -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int r = 0;

	if (index > 63)
		return (-1);

	r = 1 << index;

	if (*n & r)
		*n ^= r;

	return (1);

}
