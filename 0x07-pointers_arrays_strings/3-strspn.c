#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input string to search for prefix
 * @accept: string of accepted char
 *
 * Return: number of bytes in the initial segment of s which consist onlt of
 * bytrs from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, cou = 0;

	for (i = 0; s[i] ; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				cou++;
				break;
			}
		}
		if (!accept[j])
			break;
	}
	return (cou);
}
