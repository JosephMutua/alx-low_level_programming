#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the list_t.
 * @head: pointer to the memory to be freed.
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *j;

	while (head)
	{
		j = head->next;
		free(head->str);
		free(head);
		head = j;
	}
}
