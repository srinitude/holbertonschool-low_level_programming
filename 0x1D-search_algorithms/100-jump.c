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
 * linear - Linear search C implementation
 * @array: The array to search through
 * @start: Where to search searching
 * @size: Size of array
 * @value: The value to search for
 * @idx: Flag for indicating last index
 * @j: Jump size
 *
 * Return: The value or -1
 */
int l(int *array, int start, int size, int value, int idx, int j)
{
	int i = start, bound = start + j;
	int current = 0;
	int last_idx = size - 1;

	if (array == NULL)
		return (-1);
	printf("Value found between indexes [%i] and [%i]\n", start, bound);
	if (idx)
	{
		for (; i <= last_idx; i++)
		{
			current = array[i];
			print_value_at_index((int)i, current);
			if (current == value)
				return ((int)i);
		}
		return (-1);
	}
	for (; i <= bound; i++)
	{
		current = array[i];
		print_value_at_index((int)i, current);
		if (current == value)
			return ((int)i);
	}
	return (-1);
}

/**
 * jump_search - Jump search algorithm
 * @array: The array to search through
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index of the value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t j = (size_t)sqrt((double)size);
	size_t i = 0;
	int current = 0, prev = 0;
	int s = (int)size;

	if (array == NULL)
		return (-1);
	for (; i < size; i += j)
	{
		current = array[i];
		print_value_at_index(i, current);
		if (array[i] >= value)
		{
			prev = (int)(i - j);
			return (l(array, prev, s, value, 0, j));
		}
		if (i == size - 1)
			return (l(array, (int)i, s, value, 1, j));
	}
	return (-1);
}
