#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc and exits if malloc fails
 *
 * @b: the size of the memory to be allocated
 *
 * Return: pointer to the allocated memory
 *         exits with status value of 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
