#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free the previously 2D grid
 * @grid: grid being freed
 * @height: size of grid
 * Return: return nothing
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid != NULL || height != 0)
	{
		for (x = 0; x < height; x++)
		{
			free(grid[x]);
		}
		free(grid);
	}
}
