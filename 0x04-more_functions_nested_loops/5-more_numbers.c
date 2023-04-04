#include "main.h"
/**
 * more_numbers - print numbers from 1 to 14
 *
 * followed by new line
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
{
	for (j = 0; j < 15; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
	i++;
}
}
