#include <stdlib.h>
#include "main.h"
/**
 * create_array - array return string
 * @size: string size
 * @c: string
 * Return: NULL if fail or = 0 otherwise array
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
return (NULL);

char *array = malloc(size * sizeof(char));

if (array == NULL)
return (NULL);

unsigned int i;

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
