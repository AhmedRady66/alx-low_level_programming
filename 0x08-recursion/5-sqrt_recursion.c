#include "main.h"

/**
 * squrt - function to calculate the natural square root of a number.
 * @n: value of the input.
 * @guess: the numbe of the given root.
 * Return: int the value of the root.
 */
int squrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess < n)
		return (squrt(n, guess + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - function that call another function to do what it should.
 * @n: input of the function.
 * Return: int if the above function.
 */
int _sqrt_recursion(int n)
{
	return (squrt(n, 1));
}
