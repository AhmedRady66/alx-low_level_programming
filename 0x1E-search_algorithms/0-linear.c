#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers.
 * @array: array of integers.
 * @size: size of the array.
 * @value: search value.
 *
 * Return: 0 success
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
