#include "main.h"

/**
 * main - prog: prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 success
 */
int main(void)
{
	int i;
	unsigned long int t1 = 1, t2 = 2;
	unsigned long int next_term = t1 + t2;

	printf("%llu, %llu, %llu, ", t1, t2, next_term);

	for (i = 0; i < 50; i++)
	{
		t1 = t2;
		t2 = next_term;
		next_term = t1 + t2;
		if (i == 49)
			printf("%llu\n", next_term);
		else
			printf("%llu, ", next_term);
	}
	return (0);
}
