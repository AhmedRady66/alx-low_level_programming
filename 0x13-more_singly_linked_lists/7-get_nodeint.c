#include "lists.h"

/**
 * get_nodeint_at_index - search for a specific node
 * @head: head of linked list
 * @index: key
 * Return: key value
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
