#include "main.h"
#include <stdlib.h>

/**
 * *_strstr - function that locates a substring.
 * @haystack: the longer string to search
 * @needle: the substring to search for
 * Return: the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *p;

	while (*haystack != '\0')
	{
		p = needle;
		while (*p != '\0' && *haystack == *p)
		{
			haystack++;
			p++;
		}
		if (*p == '\0')
		{
			return (haystack - (p - needle));
		}
		haystack++;
	}

	return (NULL);
}
