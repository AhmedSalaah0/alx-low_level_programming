#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function free 2d array
 * @grid: 2d array
 * @height: array height
 * Return: (free)
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
