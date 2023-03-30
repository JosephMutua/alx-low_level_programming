#include "main.h"
/**
 * *string_toupper -  converts all letters of a string to uppercase.
 * @str: the string to be converted
 *
 * Return: the uppercase of the letters.
 */
char *string_toupper(char *str)
{
	int i, len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	i = 0;
	while (i < len)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}
