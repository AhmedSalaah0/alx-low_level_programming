#include "main.h"
/**
 *
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
if ((sizeof(unsigned long) * 8) <= index)
return (-1);

if (n & (1 << index) == 0)
	return (0);
return (1);
}
