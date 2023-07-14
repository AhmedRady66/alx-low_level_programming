#include <stdio.h>

/**
 * main - prog: diplay lowecase but not e and q.
 * Return: 0 success.
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low == 'q' || low == 'e')
			continue;
		putchar(low);
	}
	putchar('\n');
	return (0);
}
