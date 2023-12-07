#include "lists.h"

/**
 * free_dlistint - free linked list
 * @head: head of linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
