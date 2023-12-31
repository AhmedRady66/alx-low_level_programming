#include "main.h"

/**
 * flip_bits - flip to get from one number to another
 * @n: input
 * @m: input
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		if (xor & 1ul)
			count++;
		xor = xor >> 1;
	}
	return (count);
}
