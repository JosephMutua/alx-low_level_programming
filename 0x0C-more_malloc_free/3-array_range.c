#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of all values from min to max in order
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: array pointer
 */
int *array_range(int min, int max)
{
	unsigned int i;
	int *point;

	if (min > max)
		return (NULL);
	point = malloc(sizeof(int) * (max - min + 1));
	if (point == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		point[i] = min;
		min++;
		i++;
	}
	return (point);
}
