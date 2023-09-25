#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: head of linked list
 * Return: value deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int value;

	if (!head || !head)
		return (0);
	current = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = current;
	return (value);
}
