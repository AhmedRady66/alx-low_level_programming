#include "main.h"

/**
 * _isalpha - function check if the input is alphabet or not
 * @c: input of function
 * Return: 1 if 'c' is alphabet
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
