#include "main.h"

/**
 * _islower - function to check if 'c' is lowercase or otherwise
 * @c: input of a function
 * Return: 1 if its a lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
