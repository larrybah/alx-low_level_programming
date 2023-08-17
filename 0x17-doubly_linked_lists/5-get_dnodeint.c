#include "lists.h"
/**
 * get_dnodeint_at_index - get element at nth index
 * @head: head of the list
 * @index: index of the nth element
 * Return: element at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len;
	dlistint_t *current;

	if (head == NULL || index <= 0)
	{
		return (NULL);
	}

	current = head;
	len = 1;
	while (current != NULL && len <= index)
	{
		current = current->next;
		len++;
	}
	return (current);
}
