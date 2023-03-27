#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: string to be printed in reverse.
 *
 * Return: Always void.
 */
void print_rev(char *s)
{
	int i, len;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	
	len = i;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
