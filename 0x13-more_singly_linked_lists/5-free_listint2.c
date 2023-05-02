#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to the list pointer
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *j;

	if (!head)
		return;

	while (*head)
	{
	j = (*head)->next;
		free(*head);
		*head = j;
	}
	*head = NULL;
}
