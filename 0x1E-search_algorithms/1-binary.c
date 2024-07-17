#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers.
 * @array: array of integers.
 * @size: size of the array.
 * @value: search value.
 *
 * Return: 0 success.
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, l = 0, r = size - 1, i;

	if (array == NULL)
	{
		return (-1);
	}

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i > l)
			{
				printf(", ");
			}
			printf("%d", array[i]);
		}
		printf("\n");
		mid = (l + r) / 2;
		if (array[mid] < value)
		{
			l = mid + 1;
		}
		else if (array[mid] > value)
		{
			r = mid - 1;
		}
		else
		{
			return (mid);
		}
	}

	return (-1);
}
