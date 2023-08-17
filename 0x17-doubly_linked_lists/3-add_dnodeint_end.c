#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of doubly list
 * @n: new node to add
 * @head: head of list
 * Return: newly added node on success
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node;
		new_node->prev = current;
	}
	return (new_node);
}
