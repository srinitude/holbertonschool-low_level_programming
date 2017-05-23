#include "holberton.h"

/**
 * print_rev - Prints passed string in reverse
 * @s: The string in question
 *
 */

void print_rev(char *s)
{
	char *beginning = s;

	while (*s != '\0')
	{
		s++;
	}
	
	s--;

	while (s >= beginning)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
