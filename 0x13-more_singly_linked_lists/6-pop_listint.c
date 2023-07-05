#include "lists.h"
/**
 * pop_listint - removes the head node
 * @head: head of node
 * Return: node to be removed
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;

	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (data);
}
