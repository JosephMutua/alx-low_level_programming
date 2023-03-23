#include "main.h"

/**
 * _isupper - determines if a number is a upper or lower.
 * @c: is the letter to be checked.
 *
 * Return: return 1 if upper and 0 if otherwise
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
