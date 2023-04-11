#include "main.h"
#include <stdlib.h>

/**
 * _strlen - finds the length of a string.
 * @str: the length of the string.
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	unsigned int i;

	i =  0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i + 1);
}
/**
 * _strdup - returnts a copy of a string.
 * @str: the string to be returned.
 *
 * Return: the str duplicate on success
 */
char *_strdup(char *str)
{
	char *copystr;
	unsigned int len, i;

	len = _strlen(str);
	if (str == 0)
	{
		return (NULL);
	}
	copystr = (char *) malloc(sizeof(char) * len);
	if (copystr == 0)
	{
		return (0);
	}
	for (i = 0; i < len; i++)
	{
		copystr[i] = *str;
		str++;
	}
	return (copystr);
}
