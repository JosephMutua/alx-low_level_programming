#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a particular index
 * @head: pointer to the pointer of the linked list
 * @idx: index
 * @n: value to be added.
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *i_new, *t_nod;

	i_new = malloc(sizeof(listint_t));

	if (!i_new)
		return (NULL);
	j = 0;
	t_nod = *head;
	while (*head && idx)
	{
		if (!t_nod)
			return (NULL);
		if (j == idx - 1)
			break;
		t_nod = t_nod->next;
		j++;
	}
	i_new->n = n;
	if (!idx)
	{
		i_new->next = t_nod;
		*head = i_new;
	}
	else
	{
		i_new->next = t_nod->next;
		t_nod->next = i_new;
	}
	return (i_new);
}
