#include "main.h"
#include <stdlib.h>

/**
 * _strchr - returns a pointer to the occurance of c in the s
 * @s: string to be checked.
 * @c: the letter to be checked.
 *
 * Return: On success return the pointer.
 */
char *_strchr(char *s, char c)
{

	for ( ; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
