#include "main.h"
/**
 * *_memaer - function fills memory with constant byte 
 * @*s string 
 * @b char
 * @n an integer only positve
 *
 * return s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0 ; i < n ; i++)
{
*(s+i) = b;
}
return (s);
}
