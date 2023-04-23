#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - function
 * @width: array width
 * @height: array height
 * Return: NULL or g(pointer)
 */
int **alloc_grid(int width, int height)
{
int **g, i, j;

if (width <= 0 || height <= 0)
return (NULL);

g = malloc(height * sizeof(int *));

if (g == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
	g[i] = calloc(width, sizeof(int));
	if (g[i] == NULL)
	{
		for (j = 0; j < i; j++)
			free(g[j]);
		free(g);
		return (NULL);
	}
}
for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
g[i][j] = 0;

return (g);
}
