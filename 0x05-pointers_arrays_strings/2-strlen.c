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

	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
	}
	return (i);
}
