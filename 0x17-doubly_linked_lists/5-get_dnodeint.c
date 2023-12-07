#include "lists.h"

/**
 * get_dnodeint_at_index - search for a specific node
 * @head: head of linked list
 * @index: key
 * Return: key value
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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
