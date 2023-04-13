#include <stdlib.h>
#include "main.h"

/**
 * _calloc -  locates memory to an array using malloc.
 * @nmemb: the element of the array.
 * @size: the size of the elements in the array
 *
 * Return: pointer to the array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *col;
	unsigned int j;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	col = malloc(nmemb * size);
	if (col == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= (nmemb * size); j++)
	{
		col[j] = 0;
	}
	return (col);
}
