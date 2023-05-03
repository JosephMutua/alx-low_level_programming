#include "lists.h"

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

	if (!head || !(*head))
		return (0);
	i = (*head)->n;
	j = (*head)->next;
	free(head);
	*head = j;

	return (i);
}
