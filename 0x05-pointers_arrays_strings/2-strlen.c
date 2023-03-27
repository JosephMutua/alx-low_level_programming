#include "main.h"

/**
 * _strlen - determines the length of a string
 * @s: the string to be determined its length
 *
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
