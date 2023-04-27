#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds node to the head
 * @head: pointer to the pointer of the head
 * @str: the string to add in the head of the list
 *
 * Return: pointers to the str
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *node_t;

	node_t = malloc(sizeof(list_t));
	if (node_t == NULL)
		return (NULL);
	node_t->str = strdup(str);
	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	node_t->len = i;
	node_t->next = *head;
	*head = node_t;
	return (node_t);
}
