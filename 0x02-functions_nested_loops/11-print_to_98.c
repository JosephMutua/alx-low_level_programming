#include "main.h"

/**
 * print_to_98 - prints number from n to 98.
 * @n: the starting point of the numbers.
 *
 * Return : void.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			if (i < 10)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (i == 98)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else if (i < 0)
			{
				if (_abs(i) < 10)
				{
					_putchar('-');
					_putchar(_abs(i) + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar('-');
					_putchar((_abs(i) / 10) + '0');
					_putchar((_abs(i) % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			if (i < 10)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (i == 98)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else if (i > 100)
			{
				_putchar((i / 100) + '0');
				_putchar(((i % 100) / 10) + '0');
				_putchar((((i % 100) / 10) % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
