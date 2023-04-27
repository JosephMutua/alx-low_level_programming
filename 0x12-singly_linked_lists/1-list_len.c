#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @h: the pointer to the list.
 *
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
