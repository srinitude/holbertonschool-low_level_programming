#include "search_algos.h"

/**
 * print_array - Print the array
 * @array: The array to print
 * @first: The first index
 * @last: The last index
 */
void print_array(int *array, size_t first, size_t last)
{
	size_t i = first;
	int start = 1;

	printf("Searching in array: ");
	for (; i <= last; i++)
	{
		if (start)
		{
			printf("%i", array[i]);
			start = 0;
			continue;
		}
		printf(", %i", array[i]);
	}
	printf("\n");
}

/**
 * bs_imp - Implementation of binary search
 * @array: The array to search through
 * @first: First index
 * @last: Last index
 * @value: The value to search for
 *
 * Return: The index of the value or -1
 */
int bs_imp(int *array, size_t first, size_t last, int value)
{
	size_t mid = (first + last) / 2;

	print_array(array, first, last);
	if (array[mid] == value)
		return (mid);
	if (first == last)
		return (-1);
	if (value < array[mid])
		return (bs_imp(array, first, mid, value));
	else
		return (bs_imp(array, mid + 1, last, value));
}

/**
 * binary_search - Binary Search algorithm
 * @array: The array to search through
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index of the value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t last_idx = size - 1;

	if (array == NULL)
		return (-1);
	return (bs_imp(array, (size_t)0, last_idx, value));
}
