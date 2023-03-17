#include <stdio.h>
/**
 * main - The starting point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
			continue;
		else
			putchar(x);
	}
	putchar('\n');
	return (0);
}
