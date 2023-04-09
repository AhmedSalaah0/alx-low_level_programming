#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success
 */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	}

	return (NULL);
}
