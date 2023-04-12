#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a 2 dimensional array of integers.
 * @width: Teh width
 * @height: The height
 *
 * Return: Two dimensional array.
 */
int **alloc_grid(int width, int height)
{
	int **arr2d;
	int j, k;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	arr2d = malloc(sizeof(*arr2d) * height);
	if (arr2d == NULL)
	{
		return (0);
	}
	for (k = 0; k < height; k++)
	{
		arr2d[k] = malloc(sizeof(int) * width);
		if (arr2d[k] == 0)
		{
			for (k = 0; k < j; k++)
			{
				free(arr2d[k]);
			}
			free(arr2d);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr2d[k][j] = 0;
	}
	return (arr2d);
}
