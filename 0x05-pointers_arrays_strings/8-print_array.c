#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the values of an array.
 * @a: the array to be printed.
 * @n: the size of the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
