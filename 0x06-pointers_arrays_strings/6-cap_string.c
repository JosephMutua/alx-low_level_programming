#include "main.h"

/**
 * *cap_string - This function capitalizes all words of a string
 * @str: string to be capitalized.
 *
 * Return: On sucess return the capital of all strings.
 */
char *cap_string(char *str)
{
	int i, len, j;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (
				str[i] == ' ' ||
				str[i] == '\t' ||
				str[i] == '\n' ||
				str[i] == ',' ||
				str[i] == ';' ||
				str[i] == '.' ||
				str[i] == '!' ||
				str[i] == '?' ||
				str[i] == '"' ||
				str[i] == '(' ||
				str[i] == ')' ||
				str[i] == '{' ||
				str[i] == '}'
		   )
		{
			for (j = 'a'; j <= 'z'; j++)
			{
				if (str[i + 1] == j && i != 0)
					str[i + 1] = j - 32;
				else if (str[i] == j && i == 0)
					str[i] = j - 32;
			}
		}
	}
	return (str);
}
