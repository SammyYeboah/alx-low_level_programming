#include "main.h"

/**
 * free_grid- frees a 2D grid created previously
 * @grid: grid's double pointer
 * @height: grid height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
