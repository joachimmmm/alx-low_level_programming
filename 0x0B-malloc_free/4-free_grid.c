#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2d grid from alloc_grid func
 * @grid: the grid
 * @height: of the grid
 * Return : void
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
