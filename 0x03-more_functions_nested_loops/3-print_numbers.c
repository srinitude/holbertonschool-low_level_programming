#include "holberton.h"

/**
 * print_numbers - Prints numbers 1-9
 *
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
