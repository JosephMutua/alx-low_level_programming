#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pops a value from a list
 * @head: pointer to the pointer containing the list
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *j;
	int i;

	i = 0;
	if (*head)
	{
		i = (*head)->n;
		j = (*head)->next;
		free(head);
		*head = j;
	}
	return (i);
}
