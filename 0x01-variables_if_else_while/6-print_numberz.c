#include <stdio.h>

/**
 * main - prog: display numbers from 0 to 9
 * Return: 0 success.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
