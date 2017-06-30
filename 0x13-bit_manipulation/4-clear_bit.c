#include "holberton.h"

/**
 * deux - Exponentation with base 2
 * @degree: The degree to raise base to
 *
 * Return: The result
 *
 */

unsigned long int deux(unsigned int degree)
{
	unsigned int i;
	unsigned long int result = 1;

	for (i = 0; i < degree; i++)
		result *= 2;
	return (result);
}

/**
 * clear_bit - Clears a bit at a given index
 * @n: Pointer to the integer
 * @index: Index to clear the bit
 *
 * Return: 1 if successful, -1 if failure
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int num_bits;

	num_bits = sizeof(unsigned int) * 8;
	if (index >= num_bits)
		return (-1);
	mask = ~(deux(index));
	*n = *n & mask;
	return (1);
}
