#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - This fucntion creates a memory location using malloc
 * @b: the size of memory to be located.
 *
 * Return: pointer to the memory location allocated.
 */
void *malloc_checked(unsigned int b)
{
	char *mem;

	mem = malloc(b);
	if (mem == 0)
	{
		free(mem);
		exit(98);
	}
	return (mem);
}
