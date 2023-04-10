#include <unistd.h>
/**
 * _putchar - writes a single character to the standard output
 * @c: the character to be printed
 *
 * Returns: 1 On success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
