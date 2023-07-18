#include "main.h"

/**
 * main - prog: prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 success
 */
int main(void)
{
	int i;
	unsigned long t1 = 0, t2 = 1, next_term;

	for (i = 0; i < 50; i++)
	{
		next_term = t1 + t2;
		printf("%lu", next_term);

		t1 = t2;
		t2 = next_term;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
