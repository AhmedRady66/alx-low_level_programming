#include "main.h"

/**
 * *create_array - function that creates an array of chars
 * @size: size of array
 * @c: specific char
 * Return: n.
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (NULL);
	while (size--)
		n[size] = c;
	return (n);
}
