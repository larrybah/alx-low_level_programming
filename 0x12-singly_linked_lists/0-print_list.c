#include "lists.h"
/**
 * print_list - prints all the elements in the list
 * @h: list of elements
 * Return: elements
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	int len;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			len = 0;
		}
		else
		{
			len = strlen(h->str);
		}
		printf("[%d] %s\n", len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
