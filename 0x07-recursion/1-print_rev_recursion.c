#include "holberton.h"

/**
 * _print_rev_recursion - Print a string in rev recursively
 * @s: The string in question
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
