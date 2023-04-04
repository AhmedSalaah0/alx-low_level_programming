#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a char in a string
 * @s: the string to search for the char in
 * @c: the char to locate in the string
 *
 * Return: pointer of the char c in string s,
 * or NULL if the char is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
