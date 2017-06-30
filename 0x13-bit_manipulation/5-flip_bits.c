#include "holberton.h"

/**
 * flip_bits - Determine number of bit flips
 * @n: First number
 * @m: Second number
 *
 * Return: Number of flips
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, flips = 0, num_bits;
	unsigned long int flip_mask, looper;

	flip_mask = n ^ m;
	num_bits = sizeof(unsigned long int) * 8;
	looper = ~0;
	looper = looper & 1;
	for (i = 0; i < num_bits; i++)
	{
		if ((flip_mask & looper) > 0)
			flips++;
		looper = looper << 1;
	}
	return (flips);
}
