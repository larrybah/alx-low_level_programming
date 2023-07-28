#include "lists.h"
/**
 * find_listint_loop - find the loop in a linked list
 * @head: pointer to first node
 * Return: address of node where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *var1;
	listint_t *var2;

	if (!head)
		return (NULL);
	var1 = var2 = head;
	while (var2->next && (var2->next)->next)
	{
		var1 = var1->next;
		var2 = (var2->next)->next;
		if (var1 == var2)
		{
			var1 = head;
			while (var1 != var2)
			{
				var1 = var1->next;
				var2 = var2->next;
			}
			return (var2);
		}
	}
	return (NULL);
}
