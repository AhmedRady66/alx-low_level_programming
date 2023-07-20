#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: input of function.
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
