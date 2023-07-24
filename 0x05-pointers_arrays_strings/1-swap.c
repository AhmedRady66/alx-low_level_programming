#include "main.h"

/**
 * swap_int - function to swap to elements
 * @a: parameter of function
 * @b: parameter of function
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
