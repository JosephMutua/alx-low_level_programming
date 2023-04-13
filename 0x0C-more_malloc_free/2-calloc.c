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
	int *i;
	unsigned int j;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	i = malloc(nmemb * size);
	if (i == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < nmemb * size; j++)
	{
		i[j] = 0;
	}
	return (i);
}
