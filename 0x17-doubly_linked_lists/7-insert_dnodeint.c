#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
/**
 * insert_dnodeint_at_index - inserts node at an index
 * @h: head of list
 * @idx: index to be inserted.
 * @n: node to be inserted.
 * Return: inserted node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *current;

	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (*h);
	}

	current = *h;
	count = 0;

	while (current != NULL && count <= idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		printf("Out of bounds\n");
		free(new_node);
		exit(0);
	}

	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;

	return (new_node);
}
