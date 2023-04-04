#include "main.h"
/**
 * _memcpy - copies n bytes from mermory area src to dest
 * @dest: destination buffer
 * @src: source buffer
 * @n: number of bytes to be copied
 *
 * Return: pointer to buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
