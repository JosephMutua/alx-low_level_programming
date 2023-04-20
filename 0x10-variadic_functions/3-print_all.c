#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_int - prints an interefre 
 * @value: the value to print
 *
 * Return: Nothing
 */
void print_int(va_list value)
{
	printf("%d", va_arg(value, int));
}
/**
 * print_char - prints the a character
 * @value: the character to print.
 *
 * Return: Nothing
 */
void print_char(va_list value)
{
	printf("%c", va_arg(value, int));
}
/**
 * print_float - prints a float number
 * @value: the float to print
 *
 * Return: Nothing.
 */

void print_float(va_list value)
{
	printf("%f", va_arg(value, double));
}
/**
 * print_string - prints a string
 * @value: the string to be printed.
 *
 * Return: Nothing.
 */
void print_string(va_list value)
{
	char *val;

	val = va_arg(value, char *);
	printf("%s", val);
}
		
/**
 * print_all - print anything
 * @format: the format of each input.
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list values;
	op_mat operation[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_float}
	};
	int j, i;

	va_start(values, format);
	i = 0;
	while (format && format[i]) 
	{
		j = 0;
		while (operation[j].opera)
		{
			if (operation[j].opera[0] == format[i])
			{
				(operation[j].f)(values);
				if (format[i] + 1)
				{
					printf(", ");
				}
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(values);
}
