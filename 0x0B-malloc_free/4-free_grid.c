#include "main.h"
/**
 * free_grid - frees the 2D array of alloc_grid
 * @grid: pointer pointing to the address of 2D grid
 * @height: number of rows in the grid
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
