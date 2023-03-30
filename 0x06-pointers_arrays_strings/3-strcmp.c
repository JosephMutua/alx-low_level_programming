#include "main.h"

/**
 * _strcmp - compares who values are returns the difference
 * @s1: the first value to be compared.
 * @s2: the second value to be compared.
 *
 * Return: On success the difference.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*(char *)s1 - *(char *)s2);
}
