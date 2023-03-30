#include "main.h"

/**
 * _strncpy - copies a string to a pointer
 * @dest: the pointer where the string is to be copied
 * @src: the string to be copied
 * @n: the number of strings to be copied.
 *
 * Return: On success dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
