#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte.
 * @s: A pointer to the starting memory location to be set.
 * @b: value to be set.
 * @n: number of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
