#include "main.h"

/**
 * _abs - function that return postive number only
 * @n: input of a function
 * Return: 'n' as positive number
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
