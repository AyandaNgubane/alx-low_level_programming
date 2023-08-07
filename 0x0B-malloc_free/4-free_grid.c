#include <stdlib.h>
#include "main.h"

/**
 * free_greed - frees a 2d greed
 *
 * @grid: 2d array
 * @height: height of array
 * Return: void
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
