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

	j = (i / 2);
	while (j <= i - 1)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
