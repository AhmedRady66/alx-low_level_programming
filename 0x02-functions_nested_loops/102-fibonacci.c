#include "main.h"

/**
 * main - prog: prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 success
 */
int main(void)
{
	int i;
	unsigned long t1 = 0, t2 = 1;
	unsigned long next_term = t1 + t2;

	printf("%lu, %lu, %lu, ", t1, t2, next_term);

	for (i = 0; i < 50; i++)
	{
		t1 = t2;
		t2 = next_term;
		next_term = t1 + t2;
		if (i == 49)
			printf("%lu\n", next_term);
		else
			printf("%lu, ", next_term);
	}
	return (0);
}
