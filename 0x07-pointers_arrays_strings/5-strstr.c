#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring.
 * @haystack: input string to search
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k;

	for (i = 0; haystack[i]; i++)
	{
		for (j = i, k = 0; needle[k] && haystack[j] == needle[k]; j++, k++)
			if (needle[k] == '\0')
				return (haystack + i);
	}
	return (NULL);
}
