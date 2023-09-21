#include "lists.h"

/**
 * _strlen - find length of a string
 * @s: input
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	if (!s)
		return (0);
	while (*s++)
		len++;
	return (len);
}

/**
 * print_list - prints linked list
 * @h: pointer to first node
 * Return: size
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		s++;
	}
	return (s);
}
