#include "function_pointers.h"

/**
 * print_name - prints the name in the arguement.
 * @name: the name to be printed.
 * @f: the pointer to the function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f) (char *))
{
	if (!f || !name)
		return;
	(*f)(name);
}
