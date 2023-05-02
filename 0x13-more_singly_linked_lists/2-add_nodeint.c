#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node at the begining of a list
 * @head: pointer that points to a pointer of the list
 * @n: the value to be added.
 *
 * Return: adderss of the element added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;

	i = malloc(sizeof(listint_t));

	if (!i)
		return (0);
	i->n = n;
	i->next = *head;
	*head = i;
	return (*head);
}
