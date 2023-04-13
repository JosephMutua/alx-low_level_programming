#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - finds the length of the string.
 * @s: string to be determined.
 *
 * Return: the length of the string.
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - copies s2 n characters to s1.
 * @s1: the string where s2 will be copied.
 * @s2: the string to be copied
 * @n: the number of string to be copied.
 *
 * Return: the string of the concantated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *constr, *em;
	unsigned int i;

	em = "";
	if (s1 == NULL)
		s1 = em;
	if (s2 == NULL)
		s2 = em;

	if (n >= _strlen(s2))
		n = _strlen(s2);
	constr = malloc(sizeof(*s1) * (_strlen(s1) + n));
	if (constr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < _strlen(s1) + n; i++)
	{
		if (i < _strlen(s1))
		{
			constr[i] = s1[i];
		}
		else
		{
			constr[i] = *s2;
			s2++;
		}
	}
	constr[i] = '\0';
	return (constr);
}
