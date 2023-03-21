#include "main.h"
/**
 * _islower - checks if a char is lowercase
 * @c: is the char being checked
 *
 * Return: 0 when not lowercase and 1 when true
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
