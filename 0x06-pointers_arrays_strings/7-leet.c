#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * @str: parameter of function
 * Return: ptr
 */
char *leet(char *str)
{
	char *ptr = str;
	char alpha[] = {'A', 'E', 'O', 'T', 'L'};
	int val[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*str)
	{
		for (i = 0; i < sizeof(alpha) / sizeof(char); i++)
		{
			if (*str == alpha[i] || *str == alpha[i] + 32)
			{
				*str = 48 + val[i];
			}
		}
		str++;
	}

	return (ptr);
}
