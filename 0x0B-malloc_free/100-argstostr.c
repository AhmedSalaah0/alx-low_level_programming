#include "main.h"
#include <stdlib.h>
/**
 *ar
 *
 */
char *argstostr(int ac, char **av)
{
char *s;
int i, j, l = 0, f = 0;

if (ac == 0 || av == 0)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
l++;
}
l++;

s = malloc(sizeof(char) * l);
if (s == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != ' '; j++)
	{
		s[f] = av[i][j];
		f++;
	}
	s[f] = '\n';
	f++;
}
	s[f] = '\0';
return (s);
}