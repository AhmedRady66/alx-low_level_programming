#include "main.h"

/**
 * _pow_recursion - function that returns value of x raised to power of y.
 *
 * @x: input of value.
 * @y: input of the power.
 *
 * Return: int the value.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
