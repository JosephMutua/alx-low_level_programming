#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of the numbers
 * @n: The number of arguements
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list values;

	if (n == 0)
		return (0);

	va_start(values, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(values, int);
	va_end(values);

	return (sum);
}
