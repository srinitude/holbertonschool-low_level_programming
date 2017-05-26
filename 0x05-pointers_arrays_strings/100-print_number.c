#include "holberton.h"

/**
 * power - Computes exponentiation
 * @base: The base raised by the degree
 * @degree: The degree the base is raised to
 *
 * Return: Result of the computation
 *
 */

int power(int base, int degree)
{
	int i;
	int number = 1;

	for (i = 0; i < degree; i++)
	{
		number *= base;
	}
	return (number);
}

/**
 * print_positive_number - Prints any positive integer
 * @n: The integer in question
 *
 */

void print_positive_number(int n)
{
	int possible_places = 9;
	int orig_n = n;
	int i, quo, rem;

	for (i = possible_places; i > 0; i--)
	{
		quo = n / power(10, i);
		rem = n % power(10, i);

		if (rem != orig_n)
		{
			if (quo >= 0 && quo <= 9)
			{
				_putchar('0' + quo);
				if (i == 1 && (quo >= 0 && quo <= 9))
				{
					if (rem >= 0 && rem <= 9)
						_putchar('0' + rem);
				}
			}
		}
		else if ((rem == orig_n) && (i == 1))
		{
			_putchar('0' + rem);
		}
		n = rem;
	}
}

/**
 * print_negative_number - Prints any negative integer
 * @n: The integer in question
 *
 */

void print_negative_number(int n)
{
	int possible_places = 9;
	int orig_n = n;
	int i, quo, rem;
	int neg_start = 0;

	for (i = possible_places; i > 0; i--)
	{
		quo = n / power(10, i);
		rem = n % power(10, i);

		if (rem != orig_n)
		{
			if (neg_start == 0)
			{
				neg_start = i;
				quo = -quo;
				rem = -rem;
			}
			if (quo >= 0 && quo <= 9)
			{
				if (neg_start == i)
					_putchar('-');
				_putchar('0' + quo);
				if (i == 1 && (quo >= 0 && quo <= 9))
				{
					if (rem >= 0 && rem <= 9)
						_putchar('0' + rem);
				}
			}
		}
		else if ((rem == orig_n) && (i == 1))
		{
			_putchar('-');
			_putchar('0' + rem);
		}
		n = rem;
	}
}

/**
 * print_number - Prints the number
 * @n: The number in question
 *
 */

void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n > 0)
	{
		print_positive_number(n);
	}
	else if (n == -1)
	{
		_putchar('-');
		_putchar('1');
	}
	else
	{
		print_negative_number(n);
	}
}
