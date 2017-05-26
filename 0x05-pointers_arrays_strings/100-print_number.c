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
 * print_number - Prints the number
 * @n: The number in question
 *
 */

void print_number(int n)
{
	int possible_places = 10;
	int original_n = n;
	int i = 0;
	int quo, rem;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = possible_places; i > 0; i--)
	{
		quo = n / power(10, i);
		rem = n % power(10, i);

		if (rem != original_n)
		{
			if (quo >= -9 && quo <= -1)
			{
				quo = -quo;
				_putchar('-');
				_putchar('0' + quo);
				if (i == 1 && (quo >= 0 && quo <= 9) && (rem >= -9 && rem <= -1))
				{
					rem = -rem;
					_putchar('0' + rem);
					break;
				}
			}
			if (quo >= 0 && quo <= 9)
			{
				_putchar('0' + quo);
				if (i == 1 && (quo >= 0 && quo <= 9) && (rem >= 0 && rem <= 9))
					_putchar('0' + rem);
			}
		}
		n = rem;
	}
}
