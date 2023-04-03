#include "main.h"

/**
 * _memset - filles memory with a constant byte.
 * @s: the pointer to the memoey address where the new value will be inserted.
 * @b: the character to be inserted.
 * @n: the number of character to be inserted in the new location.
 *
 * Return: A string on success.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
