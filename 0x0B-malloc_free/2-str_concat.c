#include <stdlib.h>
#include "main.h"
/**
 *str_concat - concatinate a string
 *@s1: first string
 *@s2: second string
 *Return: NULL if empty otherwise concatinated string
 */
char *str_concat(char *s1, char *s2)
{
char *c;
unsigned int l1 = 0, l2 = 0, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[l1])
l1++;
while (s2[l2])
l2++;
c = malloc(sizeof(char) * (l1 + l2 + 1);

if (c == NULL)
return (NULL);

for (i = 0; i < l1; i++)
c[i] = s1[i];

for (j = 0; j < l2; j++)
c[i + j] = s2[j];

return (c);
}
