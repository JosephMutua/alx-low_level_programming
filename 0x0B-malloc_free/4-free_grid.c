#include "main.h"
#include <stdlib.h>

/**
 * free_grid - this function frees a 2 dimention grid.
 * @grid: the grid the to be freed.
 * @height: the height og the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL)
		return;
	j = 0;
	while (j < height)
	{
		free(grid[j]);
		j++;
	}
	free(grid);
}
