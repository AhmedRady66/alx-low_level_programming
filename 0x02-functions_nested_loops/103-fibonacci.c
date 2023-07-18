#include "main.h"

/**
 * main - prog: prints the sum of the even-valued terms
 * Return: 0 success
 */
int main(void)
{
	unsigned long t1 = 0, t2 = 1, next_term;
	float sum;

	while (1)
	{
		next_term = t1 + t2;

		if (next_term > 4000000)
			break;
		if ((next_term % 2) == 0)
			sum += next_term;

		t1 = t2;
		t2 = next_term;
	}
	printf("%.0f\n", sum);
	return (0);
}
