#include "main.h"
/**
 * jack_bauer - prints the every minute of the day.
 *
 * Return: the list of each minute.
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	while (i <= 2)
	{
		j = 0;
		while (j < 10)
		{
			k = 0;
			while (k < 6)
			{
				l = 0;
				while (l <= 9)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
					l++;
				}
				k++;
			}
			if (i >= 2 && j >= 3)
				break;
			j++;
		}
		i++;
	}
}
