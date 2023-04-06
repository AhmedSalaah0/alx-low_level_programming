#include "main.h"
#include <string.h>
/**
 * is_palindrome - check if string is palindrome
 * @s: string that while check
 * Return: 1 if palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
		return (1);
	if (s[0] == s[len - 1])
		return (is_palindrome(s + 1) && 1);
	else
		return (0);
}
