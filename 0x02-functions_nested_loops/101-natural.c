#include "main.h"

/**
 * main - prog: prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 success
 */
int main(void)
{
	int result = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			result += i;
		}
	}

	printf("%d\n", result);
	return (0);
}
