#include "lists.h"
/**
 * free_listint_safe - free a list
 * @h: the pointer to the list to free
 * Return: size of free'd list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listint_t *temp = NULL;

	if (!(h && *h))
		return (nodes);

	while (*h)
	{
		nodes++;
		if (*h > (*h)->next)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
		else
		{
			free(*h);
			*h = NULL;
		}
	}
	*h = NULL;
	return (nodes);
}
