#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - constructs 2D array
 * @width: width of array
 * @height: height of array
 * Return: pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		matrix[x] = malloc(width * sizeof(int));
		if (matrix[x] == NULL)
		{
			while (x >= 0)
				free(matrix[x--]);
			free(matrix);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			matrix[x][y] = 0;
	}
	return (matrix);
}
