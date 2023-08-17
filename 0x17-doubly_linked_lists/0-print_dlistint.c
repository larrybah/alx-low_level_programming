#include "lists.h"
/**
 * print_dlistint - prints all elements in a doubly linked list
 * @h: head node
 * Return: elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t len = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		len++;
	}
	return (len);
}
