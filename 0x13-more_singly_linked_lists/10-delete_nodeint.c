#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of a linked list
 * @index: key
 * Return: 1 success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *node;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			prev->next = node->next;
			free(node);
			return (1);
		}
		i++;
		prev = node;
		node = node->next;
	}
	return (-1);
}
