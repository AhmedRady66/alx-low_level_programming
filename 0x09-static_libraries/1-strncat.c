#include "main.h"

/**
 * *_strncpy - function that copies a string.
 * @dest: parameter of function
 * @src: parameter of function
 * @n: parameter of function
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = '\0';
	return (dest);
}
