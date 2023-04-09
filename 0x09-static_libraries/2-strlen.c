#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int i = 1, f = 0;
	char p = s[0];

	while (p != '\0')
	{
		f++;
		p = s[i++];
	}
	return (f);
}
