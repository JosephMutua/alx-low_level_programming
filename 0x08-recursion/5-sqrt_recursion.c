#include "main.h"

/**
 * _sqrt_recursion - find the square root of n.
 * @n: the value whose square root is being determined
 *
 * Return: the squareroot.
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
	return (_sqrt_recursion(n - 1));
}
