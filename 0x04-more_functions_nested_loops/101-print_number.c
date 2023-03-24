#include "main.h"

/**
 * print_number - this function will print the numbers
 * @n: the number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	if ( n < 0)
	{
		_putchar('-');
		if (n < -9)
		{
			_putchar(n / 10 + '0');
		}
		_putchar(n % 10 + '0');
	}
	else if ( n > 0)
	{
		if (n > 999)
		{
			_putchar(n / 1000 + '0');
			_putchar(n / 100 + '0');
			_putchar(n / 10 + '0');
		}
		else if (n > 99)
		{
			_putchar(n / 100 + '0');
			_putchar(n / 10 + '0');
		}
		else if (n > 9)
			_putchar(n / 10 + '0');
		_putchar(n % 10);
	}
	else
		_putchar(n + '0');
}
	
