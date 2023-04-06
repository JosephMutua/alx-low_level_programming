#include "main.h"

/**
 * _sqr - this function determines the square of a number
 * @i: the expected results
 * @j: the starting point for the guess.
 *
 * Return: the value of i where the j * j == i.
 */
int _sqr(int i, int j);

int _sqr(int i, int j)
{
	if ((j * j) == i)
	{
		return (j);
	}
	else if ((j * j) > i)
	{
		return (-1);
	}
	return (_sqr(i, j + 1));
}

/**
 * _sqrt_recursion - determines the squareroot of a number
 * @n: the number whose square root is being determined
 *
 * Return: the squareroot of n.
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (_sqr(n, 1));
}
