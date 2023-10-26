#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: input
 */
void print_binary(unsigned long int n)
{
	int bin = sizeof(n) * 8;
	int pr = 0;

	while (bin)
	{
		if (n & 1l << --bin)
		{
			_putchar('1');
			pr++;
		}
		else if (pr)
			_putchar('0');
	}
	if (!pr)
		_putchar('0');
}
