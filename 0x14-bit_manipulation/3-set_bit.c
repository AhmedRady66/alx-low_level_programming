#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: input
 * @index: input
 * Return: if success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int key = sizeof(n) * 8;

	if (index >= key)
		return (-1);
	return (!!(*n |= 1l << index));
}
