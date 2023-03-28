#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
int i;

for (i = strlen(s) - 1; i >= 0; i--)
{
printf("%c", s[i]);
}
printf("\n");
}
