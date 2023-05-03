#include "lists.h"

/**
 * sum_listint - returns the sum of all numers in a list
 * @head: pointer to the list.
 *
 * Return: sum of all values
 */
int sum_listint(listint_t *head)
{
	int s;

	if (!head)
		return (0);
	s = 0;
	while (head)
	{
		s = s + head->n;
		head = head->next;
	}
	return (s);
}
