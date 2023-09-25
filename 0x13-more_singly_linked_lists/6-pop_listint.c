#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: head of linked list
 * Return: value deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!head || !newNode)
		return (0);
	newNode = *head;
	*head = newNode->next;
	return (newNode->n);
}
