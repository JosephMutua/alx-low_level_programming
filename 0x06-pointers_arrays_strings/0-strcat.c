#include "main.h"

/**
 * _strcat -  concantinates two strings.
 * @dest: the string to were the other one will be added.
 * @src: the string to be combined with the dest string.
 *
 * Return: On success return the dest.
 */
char *_strcat(char *dest, char *src)
{
	int len, len2;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}

	len2 = 0;
	while (src[len2] != '\0')
	{
		dest[(len - 1) + 1] = src[len2];
		len2++;
		len++;
	}
	dest[(len - 1) + 1] = '\0';
	return (dest);
}
