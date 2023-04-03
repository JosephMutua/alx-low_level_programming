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
	unsigned int j;

	j = 1;
	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				break;
			}
			else
			{
				j++;
			}
			accept++;
		}
		s++;
	}
	return (j);
}
