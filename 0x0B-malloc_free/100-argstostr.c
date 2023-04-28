#include "main.h"
#include <stdlib.h>
/**
 *argstostr - concarenares all args
 *@ac:args counrer
 *@av:array of args
 *Return: new string pointer
 */
char *argstostr(int ac, char **av)
{
char *s;
int i, j, l = 0, f = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
{
for (j = 0; av[i][j]; j++)
l++;
}
l++;
}
s = malloc(sizeof(char) * l);
if (s == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j]; j++)
	{
		s[f++] = av[i][j];
		f++;
	}
	s[f++] = '\n';
}
	s[f] = '\0';
return (s);
}
