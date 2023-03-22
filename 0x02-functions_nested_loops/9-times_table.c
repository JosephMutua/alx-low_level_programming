#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: returns null.
 */
void times_table(void)
{
	int i = 0, j, k;

	while (i < 10)
	{
		j = 0;

		while (j < 10)
		{
			k = i * j;

			if (j < 9)
			{
				if (k <= 9)
				{
					_putchar(k + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
					_putchar(',');
				}
				_putchar(' ');
			}
			else
			{
				if (k <= 9)
				{
					_putchar(k + '0');
				}
				else
				{
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
