#include "main.h"
#include <stdlib.h>

/**
 * *_strchr - function that locates a character in a string.
 * @s: string in which the search will be performed.
 * @c: The character to be found in the string.
 * Return: s.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
