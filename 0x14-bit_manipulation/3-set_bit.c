#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: the number
 * @index: the index number
 * Return: -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long) * 8)
return (-1);

*n |= (1UL << index);
return (1);
}
