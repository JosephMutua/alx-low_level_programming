#include "main.h"

/**
 * reverse_array - this function reverses an array of integers
 * @a: the array to be reveresed
 * @n: the size of array to be reversed.
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
