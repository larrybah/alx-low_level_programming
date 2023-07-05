#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/**
 * insert_nodeint_at_index - inserts node at a specified index
 * @head: head of list
 * @idx: index to add node
 * @n: node to be added
 * Return: add node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	count = 0;

	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}

		current = current->next;
		count++;
	}

	free(new_node);
	return (NULL);
}
