#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Index where cmp doesn't return 0
 * @array: Array to comb through
 * @size: Size of the array
 * @cmp: Comparison function
 *
 * Return: Index or -1
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (i);
	}
	return (-1);
}
