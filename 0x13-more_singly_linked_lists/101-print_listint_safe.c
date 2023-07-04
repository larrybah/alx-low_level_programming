#include "lists.h"
/**
 * print_listint_safe - prints linked list
 * @head: head of list
 * Return: linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	if (head == NULL)
	{
		return(0);
	}

	while (head != NULL)
	{
		printf("%d ", head->n);
		head = head->next;
		count++;
	}

	return (count);
}
