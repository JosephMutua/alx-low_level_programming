#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct match_op - struct to match operations
 * @opera: string of data type
 * @f: pointer to the function for displaying the data type
 */
typedef struct match_op
{
	char *opera;
	void (*f)(va_list);
} op_mat;
#endif
