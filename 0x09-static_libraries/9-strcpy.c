#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: parametr of function
 * @src: parameter of function
 * Return: dest value
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*ptr = *src;
		src++;
		ptr++;
	}

	*ptr = '\0';

	return (dest);
}
