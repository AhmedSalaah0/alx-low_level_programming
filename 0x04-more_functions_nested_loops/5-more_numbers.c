#include "main.h"
/**
 * more_numbers - print numbers from 1 to 14
 *
 * followed by new line
 */
void more_numbers(void)
{
	int i = 0;
	int j, p, f;

	while (i < 10)
{
	for (j = 0; j < 15; j++)
	{
		if (j < 10)
		{
		_putchar(j + '0');
		}
		else
		{
		p = j % 10;
		f = j % 100 / 10;
		_putchar(f + '0');
		_putchar(p + '0');
		}
		
	}
	_putchar('\n');
	i++;
}
}
