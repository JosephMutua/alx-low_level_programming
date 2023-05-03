#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to the pointer of the list
 * @index: the index of the node.
 *
 * Return: nth noded
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;
	
	if (!head)
		return (NULL);
	j = 0;
	while (head)
	{
		if (j == index)
			return (head);
		head = head->next;
		j++;
	}
}
