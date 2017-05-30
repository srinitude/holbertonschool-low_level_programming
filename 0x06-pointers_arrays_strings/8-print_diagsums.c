#include "holberton.h"
#include <stdio.h>

/**
 * square - Computes square
 * @base: The base
 *
 * Return: Result of the computation
 *
 */

int square(int base)
{
	return (base * base);
}

/**
 * print_diagsums - Print the sum of the diagonals
 * @a: The matrix of which to print diagonals from
 * @size: The size of each side of the matrix
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int right = 0;
	int left = 0;

	for (i = 0; i < square(size); i += (size + 1))
		right += *(a + i);
	for (i = square(size) - size; i > 0; i -= (size - 1))
		left += *(a + i);
	printf("%i, %i\n", right, left);
}
