#include "holberton.h"

/**
 * print_binary - Print binary representation of number
 * @n: The number
 *
 */

void print_binary(unsigned long int n)
{
	unsigned int i, start = 0;
	unsigned long int num_bits, mask, result;

	num_bits = sizeof(unsigned long int) * 8 - 1;
	mask = (unsigned long int)1 << num_bits;
	for (i = 0; i < num_bits; i++)
	{
		if (i == (num_bits - 1))
			mask = 1;
		if ((n & mask) > 0)
			start = 1;
		result = n & mask;
		if (start)
		{
			if (result > 0)
				_putchar('1');
			else
				_putchar('0');
		}
		if ((i == (num_bits - 1)) && (start == 0))
			_putchar('0');
		mask >>= 1;
	}
}
