#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - locates the first occurance in string s
 * of any the bytes in the string accept.
 * @s: the string to check for the occurance.
 * @accept: The string with occurances.
 *
 * Return: pointer of s.
 */
char *_strpbrk(char *s, char *accept)
{
	char *j, *a;

	for (j = s; *j != '\0'; j++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*j == *a)
			{
				return ((char *)j);
			}
		}
	}
	return (NULL);
}
