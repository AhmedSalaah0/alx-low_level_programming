#include "main.h"
/**
 *flip_bits - func to flib bits 
 *@n: the number
 *@m: second number
 *Return: number of flibed bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int c = 0, d = n ^ m;

while (d)
{
c += (d & 1);
d >>= 1;
}
return (c);
}
