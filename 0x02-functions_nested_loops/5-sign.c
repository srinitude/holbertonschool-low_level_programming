#include "holberton.h"

/**
 * print_sign - prints the sign of the number passed to function
 * @n: The integer to evaluate
 *
 * Return: 1 if integer is greater than 0
 * Returns 0 if integer is 0 and returns -1 if integer is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
