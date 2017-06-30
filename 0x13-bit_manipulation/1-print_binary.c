#include "holberton.h"

/**
 * power_of_2 - Computes exponentiation
 * @degree: The degree
 *
 * Return: The result
 *
 */

unsigned int power_of_2(unsigned int degree)
{
	unsigned int i;
	unsigned int result = 1;

	for (i = 0; i < degree; i++)
		result *= 2;
	return (result);
}

/**
 * print_binary - Print binary representation of number
 * @n: The number
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int largest = 0;
	unsigned int current, i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 0; ; i++)
	{
		largest = power_of_2(i);
		if (largest > n)
			break;
	}
	largest = power_of_2(--i);
	for (i = 0; ; i++)
	{
		current = n & largest;
		if (current > 0)
			_putchar('1');
		else
			_putchar('0');
		if (largest == 1)
			break;
		largest = largest >> 1;
	}
}
