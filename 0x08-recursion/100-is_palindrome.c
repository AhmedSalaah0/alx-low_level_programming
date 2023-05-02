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
    int l = strlen(s);
    char *p = s;
    char *q = s + l - 1;

    while (p < q)
    {
        while (!isalpha(*p))
            p++;
        while (!isalpha(*q))
            q--;
        if (tolower(*p) != tolower(*q))
            return (0);
        p++;
        q--;
    }

    return (1);
}
