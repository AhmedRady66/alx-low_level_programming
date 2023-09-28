#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: input
 * @index: input
 * Return: 1 if success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int key = sizeof(n) * 8;

	if (index >= key)
		return (-1);
	if (*n & 1l << index)
		*n ^= 1l << index;
	return (1);
}
