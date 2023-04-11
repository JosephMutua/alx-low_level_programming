#include "main.h"
#include <stdlib.h>
/**
 * _strlen - finds the length of a string pointer.
 * @str: the string whose length is being determined.
 *
 * Return: the length of the str.
 */

int _strlen(char *str)
{
	unsigned int i;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

/**
 * str_concat - concatenates two strings.
 * @s1: string were the other value will be added.
 * @s2: the string to be added to s1.
 *
 * Return: Pointer to the new string on Success
 */
char *str_concat(char *s1, char *s2)
{
	char *constr;
	unsigned int i, lens1, lens2;

	lens1 = _strlen(s1);
	lens2 = _strlen(s2);
	constr = malloc(sizeof(char) * (lens1 + lens2));
	if (constr == 0)
	{
		return (0);
	}

	for (i = 0; i < (lens1 + lens2); i++)
	{
		if (i < lens1)
		{
			constr[i] = s1[i];
		}
		else
		{
			constr[i] = s2[i - lens1];
		}
	}
	return (constr);
}
