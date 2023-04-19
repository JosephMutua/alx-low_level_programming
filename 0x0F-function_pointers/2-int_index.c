#include "function_pointers.h"

/**
 * int_index - Searches for a function.
 * @array: the array where the value will be searched
 * @size: the size of the array
 * @cmp: function pointer of function used to compare.
 *
 * Return: Index of the value on sucess and 1 on failure.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (!array || !size || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);

	i = 0;
	j = -1;
	while (i < size)
	{
		if ((*cmp)(array[i]) == 1)
		{
			j = i;
			break;
		}
		else
		{
			i++;
		}
	}
	return (j);
}
