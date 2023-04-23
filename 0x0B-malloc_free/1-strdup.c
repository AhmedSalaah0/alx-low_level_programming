#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function dublicates a string
 * @str: string
 * Return: Null or pointer
 */

char *_strdup(char *str)
{
char *s;
unsigned int i, l;

if (str == NULL)
return (NULL);

l = 0;
while (str[l] != '\0')
l++;

s = malloc(sizeof(char) * (l + 1));

if (s == NULL)
return (NULL);

for (i = 0; i < l; i++)
s[i] = str[i];

s[l] = '\0';

return (s);
}
