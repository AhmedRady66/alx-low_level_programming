#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that that multiplies two numbers.
 * @argc: int argument
 * @argv: char argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
