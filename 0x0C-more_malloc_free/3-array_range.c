#include <stdlib.h>
#include "main.h"
/**
 *array_range - func to find array range
 *@min: minimum array val
 *@max: maximum array val
 *Return: NULL if fails
 */
int *array_range(int min, int max)
{
int *a, i;

if (min > max)
return (NULL);

a = malloc(sizeof(int) * (max - min +1));

if (a == NULL)
return (NULL);

for (i = 0; i <= max-min; i++)
a[i] = min + i;

return (a);
}
