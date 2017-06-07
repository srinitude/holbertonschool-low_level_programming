#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Frees up grid
 * @grid: The grid in question
 * @height: Height of the grid
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
}
