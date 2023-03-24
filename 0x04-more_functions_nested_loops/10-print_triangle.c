#include "main.h"

/**
 * print_triangle - print the triangle
 * @size: the size of the triangle to be drawn.
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			k = size - i - 1;
			for (j = 0; j < size; j++)
			{
				if (k > j)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
