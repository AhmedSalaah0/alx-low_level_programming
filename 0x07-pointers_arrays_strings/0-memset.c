#include "main.h"
/**
* _memaer - function fills memory with constant byte
* @s: starting address of memory to be filled
* @b: the desired value
* @n: number of bytes to be changed
*
* Return : changed array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
