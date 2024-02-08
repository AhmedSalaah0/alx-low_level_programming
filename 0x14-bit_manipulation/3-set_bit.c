#include <stdio.h>
#include "main.h"
/**
 * set_bit - set a bit at specfic idx
 * @n: pointer to the num
 * @index: the index
 * Return: 1 if success and -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int r;

	if (index > 63)
		return (-1)

	r = 1 << index;
	*n = (*n | m);

	return (1);
}
