#include "main.h"

/**
 * *array_range - function that creates an array of integers.
 * @min: min value in array
 * @max: max value in array
 * Return: arr
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(*arr));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
