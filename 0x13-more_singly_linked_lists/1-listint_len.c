#include "lists.h"
/**
 * listint_len - prints list length
 * @h: head of list
 * Return: length of lists
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
