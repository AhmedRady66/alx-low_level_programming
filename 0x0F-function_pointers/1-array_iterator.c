#include "function_pointers.h"

/**
 * array_iterator -  executes each element of an array.
 * @array: input
 * @size: input
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action == NULL || array == NULL)
	{
		return;
	}
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
