#include "main.h"

/**
 * print_diagonal - prints the diagonal n times.
 * @n: the number of times to draw the diagonal.
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{

			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	}
	else
	{
		_putchar('\n');
	}
}
