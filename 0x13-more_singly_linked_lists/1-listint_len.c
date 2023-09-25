#include "lists.h"

/**
 * listint_len - prints linked list length
 * @h: pointer to first node
 * Return: length
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
