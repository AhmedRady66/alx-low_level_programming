#include "lists.h"

/**
 * dlistint_len -  prints all the elements of a dlistint_t list
 * @h: input integer
 * Return: length of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len  = 0;

	while (h !=  NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
