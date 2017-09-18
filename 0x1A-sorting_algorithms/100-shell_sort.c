#include "sort.h"

/**
 * insertion_sort - Implementation of insertion
 * @arr: The array
 * @idx: The index
 * @s: The stopping point
 * @g: The gap
 *
 * Return: None
 */
void insertion_sort(int *arr, size_t idx, size_t s, size_t g)
{
	size_t i;
	int compare, prev, swap;

	for (i = idx; i >= (s + g); i -= g)
	{
		compare = arr[i];
		prev = arr[i - g];
		if (prev > compare)
		{
			swap = prev;
			arr[i - g] = compare;
			arr[i] = swap;
		}
	}
}

/**
 * shell_sort - Implementation of shell sort
 * @array: The array to sort
 * @size: The size of the array
 *
 * Return: None
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap = 0, initial_gap;

	if (!array || size == 0 || size == 1)
		return;
	while (size > gap)
	{
		gap = (gap * 3) + 1;
		if (size > gap)
			initial_gap = gap;
	}
	gap = initial_gap;
	for (; gap >= 1; gap = ((gap - 1) / 3))
	{
		for (i = 0; i < size - 1; i++)
		{
			j = i + gap;
			if (j <= (size - 1))
				insertion_sort(array, j, i, gap);
		}
		print_array((const int *)array, size);
	}
}
