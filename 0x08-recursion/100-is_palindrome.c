#include "main.h"

int check(char *s, int i, int len);
int _strlen(char *s);

/**
 * is_palindrome - checks ifpalindrome
 * @s: reverse
 *
 * Return: 1 if true
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, _strlen(s)));
}

/**
 * _strlen - returns the length
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * check - checks the characters
 * @s: string
 * @i: it
 * @len: length
 *
 * Return: 1 if palindrome
 */
int check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check(s, i + 1, len - 1));
}
