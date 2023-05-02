#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees the list
 * @head: pointer to the struct
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *i;

	while (head)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
