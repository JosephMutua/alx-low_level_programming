#include "main.h"

/**
 * _pow_recursion - uses recursion to determine the power of a number/
 * @x: the whose power is being determined.
 * @y: the power of the number
 *
 * Return: the value of x to the poweer of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return (x * (_pow_recursion(x, y - 1)));
}
