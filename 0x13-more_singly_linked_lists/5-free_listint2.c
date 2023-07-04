#include "lists.h"
/**
 * free_listint2 - frees lists when head is NULL
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *next;

	temp = *head;
	while (*temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*head = NULL;
}
