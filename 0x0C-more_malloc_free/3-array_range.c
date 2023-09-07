#include "main.h"

/**
 * *array_range - function that creates an array of integers.
 * @min: min value in array
 * @max: max value in array
 * Return: arr
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(*arr) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
		arr[i] = min++;
	return (arr);
}
