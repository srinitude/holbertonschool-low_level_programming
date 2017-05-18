#include "holberton.h"

/**
 * print_line - Prints a line with length determined by argument
 * @n: Length of the line
 *
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
