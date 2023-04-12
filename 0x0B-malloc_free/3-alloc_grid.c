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
	int i, j, k;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	arr2d = (int **) malloc(sizeof(*arr2d) * height);
	if (arr2d == NULL)
	{
		return (0);
	}
	for (k = 0; k < height; k++)
	{
		arr2d[k] = (int *) malloc(sizeof(int) * width);
		if (arr2d[k] == 0)
		{
			while (k--)
			{
				free(arr2d[k]);
			}
			free(arr2d);
			return (NULL);
		}
	}
	for (j = 0; j < width; j++)
		for (i = 0; i < height; j++)
		{
			arr2d[j][i] = 0;
		}
	return (arr2d);
}
