#include "holberton.h"

/**
 * reverse_array - Reverse the contents of the array
 * @a: The array in question
 * @n: The number of elements in the array
 *
 */

void reverse_array(int *a, int n)
{
	int mid = n / 2;
	int last_index = n - 1;
	int i, temp;

	for (i = 0; i < mid; i++)
	{
		temp = a[i];
		a[i] = a[last_index - i];
		a[last_index - i] = temp;
	}
}
