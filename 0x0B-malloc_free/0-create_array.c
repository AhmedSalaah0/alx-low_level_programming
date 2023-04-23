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
unsigned int i;
char *array = malloc(size * sizeof(char));

if (size == 0)
return (NULL);

if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
