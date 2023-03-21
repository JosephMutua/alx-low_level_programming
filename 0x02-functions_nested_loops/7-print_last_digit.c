#include "main.h"
/**
 * print_last_digit - Determines the last digit.
 * @i: the num to be used.
 *
 * Return: the last digit.
 */
int print_last_digit(int i)
{
	int l_num;

	l_num = i % 10;
	if (l_num < 0)
	{
		l_num = l_num * -1;
	}
	_putchar(l_num + '0');
	return (l_num);
}
