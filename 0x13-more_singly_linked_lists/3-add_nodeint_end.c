#include "lists.h"

/**
 * *add_nodeint_end - add new node
 * @head: new head of list
 * @n: data
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t  *current = *head;

	if (!head || !newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newNode;
	return (newNode);
}
