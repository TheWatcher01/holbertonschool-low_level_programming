#include "main.h"

/**
 * **alloc_grid - Function that returns a pointer to a 2 dimensional
 * array of integers. Each element of the grid is initialized to 0.
 *
 * @width: The number of columns in the 2D array.
 * @height: The number of rows in the 2D array.
 *
 * Return: A pointer to the newly created 2D array on success.
 * If memory allocation fails, or if width or height is 0 or negative,
 * the function returns NULL.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
