#include "main.h"

/**
 * *string_toupper -  lowercase letters to uppercase
 * @str: parameter of function
 * Return: ptr
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}

	return (ptr);
}
