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
void *p;

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
p = malloc(new_size);
return (p);
}

if (new_size == old_size)
return (ptr);

p = malloc(new_size);

if (p != NULL)
{
	if (new_size > old_size)
	{
		memcpt(p, ptr, old_size);
	}
	else
		memcpy(p, ptr, new_size);
}
free(ptr);

return (p);
}
