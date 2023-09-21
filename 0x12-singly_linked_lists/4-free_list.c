#include "lists.h"

/**
 * free_list - free linked list
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *node;
	list_t *next;

	if (!head)
		return;
	node = head;
	while (node)
	{
		next = node->next;
		free(node->str);
		free(node);
		node = next;
	}
}
