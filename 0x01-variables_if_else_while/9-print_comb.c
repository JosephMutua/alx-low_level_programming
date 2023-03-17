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
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
			x++;
		}
		else
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
