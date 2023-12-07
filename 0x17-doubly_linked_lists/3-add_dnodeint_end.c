#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at the end of a list
 * @head: head of the linked list
 * @n: input integer
 * Return: linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *node;

	if (!head || !new)
	{
		return (new ? free(new), NULL : NULL);
	}
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;

		node->next = new;
		new->prev = node;
	}
	return (new);
}