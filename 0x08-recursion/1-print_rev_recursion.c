#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - print string reverse
 * @s: string which reversed
 */
void _print_rev_recursion(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
