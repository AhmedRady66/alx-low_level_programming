#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function to print numbers to 98
 * @n: input function
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		int i;
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
	}
}
