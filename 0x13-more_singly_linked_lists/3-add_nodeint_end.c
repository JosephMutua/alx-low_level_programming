#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: pointer to the header
 * @n: the element to add
 *
 * Return: address of the added elements
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i, *j;

	j = malloc(sizeof(listint_t));

	if (!j)
		return (0);
	j->n = n;
	j->next = NULL;
	if (!*head)
	{
		*head = j;
		return (*head);
	}
	while (i->next)
	{
		i = i->next;
	}
	i->next = j;
	return (j);
}
