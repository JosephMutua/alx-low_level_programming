#include <unistd.h>

/**
 * _putchar - writes the chareacter c to stdiout
 * @c: The the character to be printed
 *
 * Return: on success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
