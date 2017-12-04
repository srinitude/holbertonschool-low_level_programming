#include "search_algos.h"

/**
 * print_value_at_index - Print value at index
 * @i: The current index
 * @v: The current value
 */
void print_value_at_index(int i, int v)
{
	printf("Value checked array[%i] = [%i]\n", i, v);
}

/**
 * linear_search - Linear search C implementation
 * @array: The array to search through
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int current = 0;

	if (array == NULL)
		return (-1);
	for (; i < size; i++)
	{
		current = array[i];
		print_value_at_index((int)i, current);
		if (current == value)
			return ((int)i);
	}
	return (-1);
}
