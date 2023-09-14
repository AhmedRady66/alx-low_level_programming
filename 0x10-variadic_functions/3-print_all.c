#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: variety of inputs
 */

void print_all(const char * const format, ...)
{
	int indx, find;
	char *str;
	va_list ap;

	indx = 0;

	va_start(ap, format);
	while (format != NULL && format[indx] != '\0')
	{
		switch (format[indx])
		{
			case 'i':
				printf("%i", va_arg(ap, int));
				find = 0;
				break;
			case 's':
				str = va_arg(ap, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				find = 0;
				break;
			case 'c':
				printf("%c", va_arg(ap, int));
				find = 0;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				find = 0;
				break;
			default:
				find = 1;
				break;
		}
		if (find == 0 && format[indx + 1] != '\0')
			printf(", ");
		indx++;
	}
	printf("\n");
	va_end(ap);
}
