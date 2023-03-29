#include <stdio.h>
#include <string.h>

/**
 * @s is an array of char
 * function print_rev reverce the array of char
 *
 * then print new line
 */
void puts_half(char *str){
int i; 
if (strlen(str)%2 == 0)
{
for (i = strlen(str)/2 ; i < strlen(str) ; i++)
printf("%c", str[i]);
}
else
{
for (i = (strlen(str)-1)/2 ; i < strlen(str) ; i++)
printf("%c", str[i]);
}
printf("\n");
}
