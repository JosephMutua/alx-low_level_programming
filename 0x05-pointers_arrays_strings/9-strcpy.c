#include "main.h"
#include <stddef.h>
/**
 * _strcpy - Copies a string to another destination
 * @dest: the pointer to where the string is to be copied.
 * @src: the string that is to be coppied.
 *
 * Return: Always the string.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
