#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - the function prints a list of strings.
 * @separator: pointer to the separator
 * @n: the number of items to print.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list values;
	char *value;

	if (separator == NULL || *separator == 0)
		separator = "";
	if (n > 0)
	{
		va_start(values, n);
		for (i = 0; i < n; i++)
		{
			value = va_arg(values, char *);
			if (value == NULL)
				value = "nil";

			if (i == n - 1)
				printf("%s\n", value);
			else
			{
				printf("%s", value);
				printf("%s", separator);
			}
		}
	}
}
