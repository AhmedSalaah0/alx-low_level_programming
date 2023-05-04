#include "main.h"
/**
 * get_bit - get the val of bit
 * @n: numer
 * @index: index number
 * Return: -1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long) * 9)
	return (-1);

return ((n >>  index) & 1);
}
