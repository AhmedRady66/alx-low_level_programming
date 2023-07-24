#include "main.h"

/**
 * _strlen - function to find length of string
 * @s: parameter of function
 * Return: i success
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}

	return (i);
}
