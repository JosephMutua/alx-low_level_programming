#include "main.h"

/**
 * factorial - determines the factorial of a number
 * @n: The number whose factorial is being determined.
 *
 * Return: the factorial of the n.
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
