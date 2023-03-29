#include <stdio.h>
#include <string.h>

/**
 * @s is an array of char
 * function print_rev reverce the array of char
 *
 * then print new line
 */
void puts_half(char *str)
{
int i;
int len = strlen(str);

if (len % 2 == 0)
{
for (i = len / 2 ; i < len && i != '\0' ; i++)
printf("%c", str[i]);
}
else
{
for (i = (len - 1) / 2 ; i < len && i != '\0' ; i++)
printf("%c", str[i]);
}
printf("\n");
}
