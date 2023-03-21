#include "main.h"
/**
 * print_alphabet - Prints the alphabet
 *
 * Return: Alway 0 (Success)
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
