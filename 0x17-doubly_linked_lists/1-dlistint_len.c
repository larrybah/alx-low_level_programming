#include "lists.h"

/**
 * dlistint_len - length of doubly linked list
 * @h: head of list
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
