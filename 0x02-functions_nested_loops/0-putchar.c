#include "main.h"

/**
 * main - prog: Prints _putchar.
 * Return: 0 success.
 */
int main(void)
{
	char arr[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		putchar(arr[i]);
	putchar('\n');

	return (0);
}
