#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers undefined numbers.
 * @separator: the character to separate values.
 * @n: number of arguements.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list values;

	va_start(values, n);

	if (n <= 0)
		return;
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", va_arg(values, int));
		else
		{
			printf("%d", va_arg(values, int));
			if (separator == NULL)
			{
				separator = "";
			}
			printf("%s", separator);
		}
	}
	va_end(values);
	printf("\n");
}
