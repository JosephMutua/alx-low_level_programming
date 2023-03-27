#include "main.h"

/**
 * rev_string - prints a string in reverse form.
 * @s: the string to be printed.
 *
 * Return: void
 */
void rev_string(char *s)
{
	int j, len;
	char temp;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	
	len = j - 1;
	for (j = 0; j < len; j++)
	{
		temp = s[j];
		s[j] = s[len];
		s[len] = temp;
		len--;
	}
}
