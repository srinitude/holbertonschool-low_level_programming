#include "sort.h"

/**
 * swap - Swap two elements
 * @array: The array to swap in
 * @bigger: Index with bigger element
 * @smaller: Index with smaller element
 * @size: Size of the array
 *
 * Return: None
 */
void swap(int *array, size_t bigger, size_t smaller, size_t size)
{
	int temp = 0;

	temp = array[bigger];
	array[bigger] = array[smaller];
	array[smaller] = temp;

	print_array((const int *)array, size);
}

/**
 * bubble_sort - Buuble Sort implementation
 * @array: The array to sort
 * @size: The size of the array
 *
 * Return: None
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, new_size = size;
	int current = 0, next = 0;

	if (!array || size == 0 || size == 1)
		return;
	for (; i < size - 1; i++)
	{
		for (j = 0; j < new_size - 1; j++)
		{
			current = array[j];
			next = array[j + 1];
			if (current > next)
				swap(array, j, j + 1, size);
		}
		new_size--;
	}
}
