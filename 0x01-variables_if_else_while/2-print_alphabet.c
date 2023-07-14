#include <stdio.h>

/**
 * main - prog: display lowercase alphabet.
 * Return: 0 success.
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}
