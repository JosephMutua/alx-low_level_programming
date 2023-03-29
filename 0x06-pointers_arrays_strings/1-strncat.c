#include "main.h"

/**
 * _strncat - This function conantinates two strings
 * with the length of the src.
 * @dest: this is the string to be concatinated.
 * @src: this is the string to be added to the dest
 * @n: this is the length of the src string.
 *
 * Return: On success return dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (dest[len] != 0)
	{
		len++;
	}

	len =  len - 1;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[len + 1] = src[i];
		i++;
		len++;
	}
	dest[len + 1] = '\0';
	return (dest);
}
