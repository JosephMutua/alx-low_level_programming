#include <stdio.h>
/**
 * main - The starting point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	while (x < 10)
	{
		putchar((x % 10) + '0');
		putchar(',');
		putchar(' ');
		x++;
	}
	putchar('\n');
	return (0);
}
