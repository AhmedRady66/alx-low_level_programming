#include "main.h"

/**
 * _strcmp -  function that compares two strings
 * @s1: parameter of function
 * @s2: parameter of function
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			result = ((int)*s1 - '\0') - ((int)*s2 - '\0');
			break;
		}
		s1++;
		s2++;
	}

	return (result);
}
