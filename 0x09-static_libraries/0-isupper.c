#include "main.h"

/**
 * _isupper - function  that checks for uppercase character.
 * @c: is input to function.
 * Return: 1 if its uppercase.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
