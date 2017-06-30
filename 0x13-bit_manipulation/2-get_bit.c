#include "holberton.h"

/**
 * two_much_power - Exponentation with base 2
 * @degree: The degree to raise base to
 *
 * Return: Result
 *
 */

unsigned int two_much_power(unsigned int degree)
{
	unsigned int i;
	unsigned int result = 1;

	for (i = 0; i < degree; i++)
		result *= 2;
	return (result);
}

/**
 * get_bit - Gets the value of a bit at given index
 * @n: The number to retrieve bit from
 * @index: The index to retrieve
 *
 * Return: The index or -1
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask, result, num_bits;

	num_bits = sizeof(unsigned int) * 8;
	if (index > num_bits)
		return (-1);
	mask = two_much_power(index);
	if (mask > n)
		return (-1);
	result = n & mask;
	if (result == mask)
		return (1);
	return (0);
}
