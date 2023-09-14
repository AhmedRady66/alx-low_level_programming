#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: input ,
 * @n: input
 * @...: input char
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			separator = "";
		else if (!n)
			printf("(nil)");
		printf("%s%s", va_arg(ap, const char *), separator);
	}
	printf("\n");
	va_end(ap);
}
