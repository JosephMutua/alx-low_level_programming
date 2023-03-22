#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: returns null.
 */
void times_table(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;

		while (j < 10)
		{
			if (j < 9)
			{
				if ((i * j) <= 9)
				{
					_putchar((i * j) + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(((i * j) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
					_putchar(',');
				}
				_putchar(' ');
			}
			else
			{
				if ((i * j) <= 9)
					_putchar((i * j) + '0');
				else
				{
					_putchar(((i * j) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
