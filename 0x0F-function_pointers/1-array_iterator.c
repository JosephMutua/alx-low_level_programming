#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - prints the numbers in the array.
 * @array: pointer to the array to printed.
 * @size: the size of the array.
 * @action: pointer to the function to be used.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !size || !action)
		return;
	i = 0;
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
