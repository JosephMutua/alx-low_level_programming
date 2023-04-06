#include "main.h"

/**
 * prm - determines if a number is a prime number
 * @i: the number which is being determined
 * @j: the itarations
 *
 * Return: 1 if the n is prime number otherwise return 0.
 */
int prm(int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	else if (i % j == 0)
	{
		return (0);
	}
	else
		return (prm(i, j + 1));
}

/**
 * is_prime_number - determines if a number is prime
 * @n: the number being determined
 *
 * Return: 1 when it is prime and 0 when it is not.
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
		return (prm(n, 2));
}
