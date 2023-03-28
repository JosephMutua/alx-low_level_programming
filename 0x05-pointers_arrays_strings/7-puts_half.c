#include "main.h"

/**
 * puts_half - prints the second half of string.
 * @str: the string to be used.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		j = (i / 2);
		while (j <= i - 1)
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		j = (i + 1) / 2;
		while (j <= i - 1)
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar('\n');
}
