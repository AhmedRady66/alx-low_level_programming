#include "lists.h"

/**
 * print_listint - prints linked list
 * @h: pointer to first node
 * Return: size
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
