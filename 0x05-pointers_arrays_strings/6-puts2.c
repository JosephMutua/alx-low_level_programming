#include "main.h"

/**
 * puts2 - prints one character of every two characters
 * @str: the string to be used
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < i)
	{
		_putchar(j + '0');
		j+=2;
	}
	_putchar('\n');
}
