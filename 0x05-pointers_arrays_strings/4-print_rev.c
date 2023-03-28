#include "main.h"
/**
 * @s is an array of char
 * function print_rev reverce the array of char
 *
 * then print new line
 */
void print_rev(char *s)
{
int i;

for (i = strlen(s)-1; i >= 0; i--)
{
printf("%c", s[i]);
}
printf("\n");
}
