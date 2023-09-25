#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of linked list
 * @idx: key
 * @n: data
 * Return: value
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *node;
	unsigned int i = 0;

	if (!head || !newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (!idx)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			newNode->next = node->next;
			node->next = newNode;
			return (newNode);
		}
		i++;
		node = node->next;
	}
	free(newNode);
	return (NULL);
}
