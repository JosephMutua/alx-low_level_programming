#include "main.h"

/**
 * _strspn - This function returns the length of a prefix substring
 * @s: the string to be used.
 * @accept: The string that has the characters.
 *
 * Return: the length of the prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 1;
	j = 0;
	while (*accept)
	{
		while (*s)
		{
			if (*accept == *s)
			{
				break;
			}
			s++;
		}
		accept++;
		i++;
	}
	if (j < i)
	{
		j = i;
	}
	return (j);
}
