#include "search_algos.h"

/**
 * binary_search_imp - Implementation of binary search
 * @array: The array to search through
 * @value: The value to search for
 * @l: Lower bound to start printing
 * @u: Upper bound to end printing
 *
 * Return: The index of the value or -1
 */
int binary_search_imp(int *array, int value, size_t l, size_t u)
{
	size_t mid, i;
	int first = 1;

	printf("Searching in array: ");
	for (i = l; i <= u; i++)
	{
		if (first)
		{
			printf("%i", array[i]);
			first = 0;
		}
		else
			printf(", %i", array[i]);
	}
	printf("\n");

	mid = (l + u) / 2;
	if (l == u && array[mid] != value)
		return (-1);
	if (array[mid] == value)
		return ((int)mid);

	if (array[mid] > value)
		return (binary_search_imp(array, value, l, mid - 1));
	else
		return (binary_search_imp(array, value, mid + 1, u));
}

/**
 * binary_search - Search for a value in an array using binary search
 * @array: The array to search through
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index of the value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_imp(array, value, (size_t)0, size - 1));
}
