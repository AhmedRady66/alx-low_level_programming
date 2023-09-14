#include "variadic_functions.h"

/**
 * print_numbers - print numbers, followed by a new line
 * @separator: input ,
 * @n: input
 * @...: input numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			separator = "";
		printf("%d%s", va_arg(ap, int), separator);
	}
	printf("\n");
	va_end(ap);
}
