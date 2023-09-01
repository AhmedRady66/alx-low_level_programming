#include "main.h"

/**
 * *_memcpy - function that copies memory area.
 * @dest: memory location where the data will be copied.
 * @src: memory location from where the data will be copied.
 * @n: The number of bytes to copy.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
