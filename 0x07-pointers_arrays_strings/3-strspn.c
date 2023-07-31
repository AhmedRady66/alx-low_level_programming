#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string in which the search will be performed.
 * @accept: containing the set of characters to be searched.
 * Return: count.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*s == *p)
			{
				break;
			}
			p++;
		}
		if (*p == '\0')
		{
			break;
		}
		count++;
		s++;
	}

	return (count);
}
