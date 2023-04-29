#include <stdlib.h>
#include "main.h"
/**
 *_calloc - function allocates memory for an array
 *@nmemb: num of arr
 *@size: array size
 *Return:NULL if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
unsigned int i;

if (nmemb == 0 || size == 0)
	return (0);

p = malloc(nmemb * size);
if (p == NULL)
	return (NULL);

for (i = 0; i < (nmemb * size); i++)
	*((char *)p + i) = 0;

return (p);
}
