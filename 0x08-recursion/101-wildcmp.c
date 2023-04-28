#include "main.h"
/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if the strings can be considered
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '\0')
return (1);
else if (*s1 == '\0')
return (0);
else if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
return (1);
else
return (0);
}
else if (*s1 == '\0' || *s2 == '\0')
{
return (*s1 == *s2);
}
else if (*s1 != *s2)
{
return (0);
}
else
{
return (wildcmp(s1 + 1, s2 + 1));
}
}
