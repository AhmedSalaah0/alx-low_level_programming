#include "main.h"
/**
 * clear_bit -  function that sets the value of a bit to 0
 * @n: the number
 * @index: index num
 * Return: -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long) * 8)
return (-1);

*n &= ~(1UL << index);
return (1);
}
