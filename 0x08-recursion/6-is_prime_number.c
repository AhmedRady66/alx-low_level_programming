#include "main.h"

/**
 * prime - function that returns 1 if the input integer is a prime number.
 * @n: input of the value.
 * @y: input of the checker.
 * Return: 1 if prime otherwise 0.
 */
int prime(int n, int y)
{
	if (y >= n && n > 1)
		return (1);
	else if (n % y == 0 || n < 2)
		return (0);
	else
		return (prime(n, y + 1));
}

/**
 * is_prime_number - function to check if the number is prime.
 * @n: the input.
 * Return: 1
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
