#include "holberton.h"

/**
 * _puts_recursion - "Puts" a string recursively
 * @s: The string in question
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
