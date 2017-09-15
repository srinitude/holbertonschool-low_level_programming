#include "sort.h"

/**
 * selection_sort - Implementation of selection sort
 * @array: The array to sort
 * @size: The size of the array
 *
 * Return: None
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, sm_idx;
	int current, sm_num;

	for (i = 0; i < size - 1; i++)
	{
		current = array[i];
		sm_num = current;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < sm_num)
			{
				sm_num = array[j];
				sm_idx = j;
			}
		}
		if (current != sm_num)
		{
			array[sm_idx] = current;
			array[i] = sm_num;
			print_array((const int *)array, size);
		}
	}

}
