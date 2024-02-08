#include "main.h"
/**
 * flip_bits - find num of number that should be fliped
 * @n: first number
 * @m: second number
 * Return: number should be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter;

	for (counter = 0; n || m; n >>= 1, m >>= 1)
		if ((n & 1) != (m & 1))
			counter++;

	return (counter);
}
