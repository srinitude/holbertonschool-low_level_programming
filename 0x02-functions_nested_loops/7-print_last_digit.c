#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of an integer
 * @d: The integer in question
 *
 * Return: The last digit of the integer
 *
 */

int print_last_digit(int d)
{
	char last_digit = d % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
		_putchar('0' + last_digit);
		return (last_digit);
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
