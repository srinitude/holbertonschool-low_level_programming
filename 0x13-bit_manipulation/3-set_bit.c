#include "holberton.h"

/**
 * two_to_the - Exponentiation with base 2
 * @degree: The degree to raise base to
 *
 * Return: The result
 *
 */

unsigned int two_to_the(unsigned int degree)
{
	unsigned int i;
	unsigned int result = 1;

	for (i = 0; i < degree; i++)
		result *= 2;
	return (result);
}

/**
 * set_bit - Sets a value of a bit to 1
 * @n: Pointer to the number to set bit
 * @index: The index of the number to set
 *
 * Return: 1 if successful, -1 if not
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int num_bits;

	num_bits = sizeof(unsigned int) * 8;
	if (index >= num_bits)
		return (-1);
	mask = two_to_the(index);
	*n = *n | mask;
	return (1);
}
