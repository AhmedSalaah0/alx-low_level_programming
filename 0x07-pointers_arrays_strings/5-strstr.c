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
if (*needle == '\0')
{
	return (haystack);
}
for (; *haystack != '\0'; haystack++)
{
	char *haystack_ptr = haystack;
	char *needle_ptr = needle;

	while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr)
	{
		haystack_ptr++;
		needle_ptr++;
	}
	if (*needle_ptr == '\0')
	{
	return (haystack);
	}
	}
return (NULL);
}
