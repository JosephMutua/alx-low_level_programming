#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - prints elements in a list
 * @h: the pointer contining the list
 *
 * Return: the number of elements
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i;

	if (!h)
		return (0);
	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}

