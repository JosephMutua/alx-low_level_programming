#include "main.h"

/**
 * _strcpy - Copies a string to another destination
 * @dest: the pointer to where the string is to be copied.
 * @src: the string that is to be coppied.
 *
 * Return: Always the string.
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j <= i - 1)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
