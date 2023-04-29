#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *_realloc - reallocates a memory block
 *@ptr: first pointer
 *@old_size: old array size
 *@new_size: new array size
 *Return: Null if fail
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
char *op;
unsigned int i;

if (new_size == old_size)
	return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
p = malloc(new_size);
return (p);
}

p = malloc(new_size);

if (!p)
	return (NULL);
op = ptr;
	if (new_size < old_size)
	{
	for (i = 0; i < new_size; i++)
		p[i] = op[i];
	}
	if (new_size > old_size)
	{
	for (i = 0; i < old_size; i++)
	p[i] = op[i];
	}
free(ptr);

return (p);
}
