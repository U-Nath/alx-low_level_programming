#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - initiates an array of arrays of integers
 *
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: NULL in case of any errors
 * the grid, in case of success
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j, k, l;

	if (height <= 0 || width <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(matrix[j]);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		matrix[k][l] = 0;
	}
	return (matrix);
}
