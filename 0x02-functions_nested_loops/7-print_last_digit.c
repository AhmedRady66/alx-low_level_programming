#include "main.h"

/**
 * print_last_digit - function to find last digit
 * @n: input function
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n > 0)
		n = n % 10;
	else
		n = -1 * (n % 10);
	_putchar('0' + n);
	return (n);
}
