#include "main.h"

/**
 * *_strdup - contains a copy of the string given as a parameter.
 * @str:  duplicate of the string.
 * Return: s.
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *s;

	if (str == 0)
		return (NULL);
	for (i = 0; str[size] != '\0'; size++)
		;
	s = malloc(size * sizeof(*str) + 1);
	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			s[i] = str[i];
	}
	return (s);
}
