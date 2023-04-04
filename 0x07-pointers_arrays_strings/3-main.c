#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "oleh";
	unsigned int n, y;

	n = _strspn(s, f);
	y = _strspn("First, solve the problem. Then, write the code.", "[]{}()");
	printf("%u\n", y);
	printf("%u\n", n);
	return (0);
}
