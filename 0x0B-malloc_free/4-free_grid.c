#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - function frees memory allocated for a 2d array.
 * @grid: double pointer to the 2d-array.
 * @height: the number of rows of the 2d-array.
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (!grid)
	{
		while (i < height)
		{
			free(grid[i]);
			grid[i] = NULL;
			i++;
		}
		free(grid);
		grid = NULL;
	}
}
