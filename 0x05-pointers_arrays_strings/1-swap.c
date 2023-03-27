#include "main.h"

/**
 * swap_int - swaps the two integers
 * @a: address of the first value to be swapped
 * @b: address of the second value to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
