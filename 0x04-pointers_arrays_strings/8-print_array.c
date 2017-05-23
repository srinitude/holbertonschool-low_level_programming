#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Print the elements of the array
 * @a: The array in question
 * @n: The number of elements in the array
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
		{
			printf("%i, ", *(a + i));
		}
		else
		{
			printf("%i\n", *(a + i));
		}
	}
}
