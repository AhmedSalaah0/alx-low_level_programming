#include "main.h"
/**
 *get_bit - git the bit of index
 *@n: bin num
 *@index: index of bit
 *Return: -1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
if ((sizeof(unsigned long) * 8) <= index)
return (-1);

if (n & (1 << index) == 0)
	return (0);
return (1);
}
