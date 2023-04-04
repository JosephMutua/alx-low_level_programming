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
	char *j;
	char *a;
	unsigned int i;

	i = 1;
	for (a = accept; *a != '\0'; a++)
	{
		for (j = s; *j != '\0'; j++)
		{
			if (*a == *j)
			{
				i++;
				break;
			}
		}
		if (*a == '\0')
		{
			break;
		}
	}
	return (i);
}
