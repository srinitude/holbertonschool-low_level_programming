#include "sort.h"

/**
 * partition - Lomuto quick sort
 * @array: The array
 * @low: lowest index of the array
 * @hi: highest index of the array
 * @size: size of array
 *
 * Return: Partition index
 */
int partition(int *array, int low, int hi, size_t size)
{
	int i, j;
	int swap, pivot;

	pivot = array[hi];
	i = low - 1;

	for (j = low; j <= hi - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap = array[j];
				array[j] = array[i];
				array[i] = swap;
				print_array((const int *)array, size);
			}
		}

	}
	if (pivot < array[i + 1])
	{
		swap = array[i + 1];
		array[i + 1] = array[hi];
		array[hi] = swap;
		print_array((const int *)array, size);
	}
	return (i + 1);
}


/**
 * quick_sort_imp - Lomuto quick sort
 * @array: The array
 * @low: lowest index of the array
 * @hi: highest index of the array
 * @size: size of array
 *
 * Return: None
 */
void quick_sort_imp(int *array, int low, int hi, size_t size)
{
	int par;

	if (low < hi)
	{
		par = partition(array, low, hi, size);
		quick_sort_imp(array, low, par - 1, size);
		quick_sort_imp(array, par + 1, hi, size);
	}
}

/**
 * quick_sort - Lomuto quick sort
 * @array: The array
 * @size: Size of the array
 *
 * Return: None
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_imp(array, (size_t)0, size - 1, size);
}
