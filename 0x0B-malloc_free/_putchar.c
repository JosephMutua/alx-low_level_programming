#include "main.h"
#include <unistd.h>

/**
 * _putchar - This function prints a character to the standard output
 * @c: the character to be printed.
 *
 * Return: 0 on success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
