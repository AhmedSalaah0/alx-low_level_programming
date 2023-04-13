#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked : malloc function
 * @b: size allocated in memory
 * Return: allocated variable
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	
	return (p);
}
