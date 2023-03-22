#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints number from n to 98.
 * @n: the starting point of the numbers.
 *
 * Return : void.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d", i);
				break;
			}
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d", i);
				break;
			}
			printf("%d, ", i);
		}
	}
	printf("\n");
}
