#include <stdio.h>
/**
 * main -  The starting point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 9; x++)
	{
		putchar((x % 10) + '0');
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
