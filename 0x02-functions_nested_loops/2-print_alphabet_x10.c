#include "main.h"

/**
 * print_alphabet_x10 - utilizes on _putchar function to print
 *                      10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	int i;
	char low;

	for (i = 0; i < 10; i++)
	{
		for (low = 'a'; low <= 'z'; low++)
		{
			_putchar(low);
		}
		putchar('\n');
	}
}
