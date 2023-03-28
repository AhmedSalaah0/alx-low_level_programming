#include <stdio.h>
#include <string.h>
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
char rev[strlen(s)-1];
int j;

for (i = strlen(s); i >= 0; i--)
{
rev[strlen(s)-i] = s[i-1];
}
for (j = 0 ; j < strlen(s);j++)
s[j] = rev[j];
}printf("\n");
}
