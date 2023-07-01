#include "lists.h"
/**
 * free_list - frees the list
 * @head: head node
 */
void free_list(list_t *head)
{
	free(*head);
}
