#include <stdlib.h>

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
	unsigned int j, fulsize;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	fulsize = nmemb * size;
	col = malloc(fulsize);
	if (col == NULL)
	{
		return (0);
	}

	for (j = 0; j < (nmemb * size); j++)
	{
		col[j] = 0;
	}
	return (col);
}
