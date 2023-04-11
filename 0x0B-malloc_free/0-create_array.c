#include "main.h"
#include <stdlib.h>

/**
 * create_array - this function creates an array of char
 * @size: the size of the array
 * @c: the charater to be initilized.
 *
 * Return: array on success and 1 on error
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = (char *) malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
