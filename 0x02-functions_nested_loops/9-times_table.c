#include "main.h"

/**
 * times_table - function to print the 9 times table
 */
void times_table(void)
{
	int num, mult, pro;

	for (num = 0; num < 10; num++)
	{
		_putchar('0');
		for (mult = 1; mult < 10; mult++)
		{
			_putchar(',');
			_putchar(' ');

			pro = num * mult;

			if (pro <= 9)
				_putchar(' ');
			else
				_putchar((pro / 10) + '0');

			_putchar((pro % 10) + '0');
		}
		_putchar('\n');
	}
}
