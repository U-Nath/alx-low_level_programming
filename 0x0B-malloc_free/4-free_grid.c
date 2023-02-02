#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees the memory from the grid created by alloc_grid
 * @grid: the previously created grid
 * @height: ff
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
