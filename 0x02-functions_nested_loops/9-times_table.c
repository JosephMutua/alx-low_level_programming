#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: returns null.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 9)
			{
				if ((i * j) <= 9)
					_putchar((i * j) + '0');
				else
				{
					_putchar((i * j) / 10 + '0');
					_putchar((i * j) % 10 + '0');
				}
				break;
			}
			if (((i * j) <= 9) && (i * (j + 1) < 10))
			{
				_putchar((i * j) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if ((i * j) > 9)
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
				_putchar(',');
			}
			else
			{
				_putchar((i * j) + '0');
				_putchar(',');
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
