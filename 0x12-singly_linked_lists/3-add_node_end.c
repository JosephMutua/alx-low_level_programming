#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Adding nodes at the end.
 * @head: pointer of poineter to struct
 * @str: the string to be added
 *
 * Return: address of the new location.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_t, *j;
	int i;

	node_t = malloc(sizeof(list_t));
	if (node_t == NULL)
		return (NULL);
	i = 0;
	if (!str)
	{
		node_t->str = NULL;
		node_t->len = 0;
	}
	else
	{
		node_t->str = strdup(str);
		while (*str != '\0')
		{
			i++;
			str++;
		}
		node_t->len = i;
	}
	node_t->next = NULL;

	if (*head)
	{
		j = *head;
		while (j->next != NULL)
			j = j->next;
		j->next = node_t;
	}
	else
		*head = node_t;
	return (node_t);
}
