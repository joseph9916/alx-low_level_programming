#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - Free a grid from the space allocated to it
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
