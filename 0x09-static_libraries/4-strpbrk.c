#include "main.h"
#include <stdlib.h>

/**
 * *_strpbrk - function that locates a character in a string.
 * @s: string in which the search will be performed.
 * @accept: The character to be found in the string.
 * Return: s.
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}

	return (NULL);
}
