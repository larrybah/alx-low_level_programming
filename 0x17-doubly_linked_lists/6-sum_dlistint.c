#include "lists.h"
/**
 * sum_dlistint - sum nodes in the list.
 * @head: head of list
 * Return: sum of all the nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	if (head == NULL)
	{
		return (0);
	}

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
