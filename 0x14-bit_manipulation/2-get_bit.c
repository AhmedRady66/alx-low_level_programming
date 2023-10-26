#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: input
 * @index: input
 * Return: placeholder
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int key = sizeof(n) * 8;

	if (index >= key)
		return (-1);
	return ((n >> index) & 1);
}
