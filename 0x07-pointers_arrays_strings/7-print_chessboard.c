#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints the chessboard
 *
 * @a: number of rows
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int r = 0;
int c = 0;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
		putchar(a[r][c]);
		}
	putchar('\n');
	}
}
