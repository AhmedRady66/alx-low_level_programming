#include "main.h"

/**
 * main - prog: prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 success
 */
int main(void)
{
	int i;
	int t1 = 1, t2 = 2;
	int next_term = t1 + t2;

	printf("%d, %d, %d, ", t1, t2, next_term);

	for (i = 0; i < 50; i++)
	{
		t1 = t2;
		t2 = next_term;
		next_term = t1 + t2;
		if (i == 49)
			printf("%d\n", next_term);
		else
			printf("d, ", next_term);
	}
	return (0);
}
