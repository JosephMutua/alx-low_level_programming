#include "main.h"

/**
 * _memcpy - This function copies the memory area
 * @dest: the buffer where the other memory will be copied.
 * @src: the buffer to be copied.
 * @n: the number of buffers to be copied.
 *
 * Return: String on success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
