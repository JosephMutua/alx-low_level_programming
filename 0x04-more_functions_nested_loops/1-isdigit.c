#include "main.h"

/**
 * _isdigit - checks for digit.
 * @c: the value to be checked.
 *
 * Return: 1 when c is a digit and 0 otherwise.
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
