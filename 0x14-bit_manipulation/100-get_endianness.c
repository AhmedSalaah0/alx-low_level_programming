#include "main.h"
/**
 *get_endianness - function that checks the endianness
 *Return: 1 if big
 */
int get_endianness(void)
{
unsigned int i = 1;
char *s = (char *)&i;

return ((int)*s);
}
