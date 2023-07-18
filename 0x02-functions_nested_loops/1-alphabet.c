#include "main.h"

/**
 * print_alphabet - utilizes on _putchar function to print
 *                   the lowercase of alphabet
 */
void print_alphabet(void)
{
	char low = 'a';

	while (low < 'z')
	{
		_putchar(low);
		low++;
	}
	_putchar('\n');
}
