#include "holberton.h"

/**
 * print_most_numbers - Prints most of the numbers from 0-9
 *
 */

void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		switch (n)
		{
		case '2':
		case '4':
			continue;
		default:
			_putchar(n);
		}
	}
	_putchar('\n');
}
