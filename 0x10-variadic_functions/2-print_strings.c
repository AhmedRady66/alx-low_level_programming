#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: input ,
 * @n: input
 * @...: input char
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *separatorstr;
	int i;

	if (n < 1)
	{
		printf("\n");
		return;
	}
	va_start(valist, n);
	i = 0;

	while (i < (int) n)
	{
		separatorstr = va_arg(valist, char *);
		if (separatorstr != NULL)
			printf("%s", separatorstr);
		else
			printf("(nil)");
		if (separator != NULL && i != (int) n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(valist);

}
