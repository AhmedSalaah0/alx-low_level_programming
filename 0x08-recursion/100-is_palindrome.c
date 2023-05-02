#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * is_palindrome - check if string is palindrome
 * @s: string that while check
 * Return: 1 if palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
if (strlen(s) <= 1)
{
return (1);
}
return tolower(s[0]) == tolower(s[strlen(s) - 1]) && is_palindrome(s + 1);
}
