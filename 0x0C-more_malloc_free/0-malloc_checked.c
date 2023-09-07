#include "main.h"

/**
 * *malloc_checked -  function that allocates memory using malloc.
 * @b: input
 * Return: n
 */
void *malloc_checked(unsigned int b)
{
	int *n = malloc(b);

	if (n == NULL)
		exit(98);

	return (n);
}
