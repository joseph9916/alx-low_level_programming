#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocate a grid with malloc
 * @width: Width of the grid
 * @height: height of grid
 * Return: point to the initial grid
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width == 0 || height == 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(grid + i) = malloc(sizeof(int) * width);
		if (*grid == NULL)
		{
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
