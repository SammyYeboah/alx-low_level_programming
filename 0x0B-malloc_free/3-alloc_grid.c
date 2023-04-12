#include "main.h"

/**
 *alloc_grid- returns a pointer to a 2D int array
 *@width: width of array
 *@height: height of array
 *Return: NULL on failure and when width or height is <= 0
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int))
			if (grid[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(grid[j]);
				free(grid);
				return (NULL);
			}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}
