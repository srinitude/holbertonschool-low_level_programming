#include "holberton.h"

/**
 * print_rev - Prints passed string in reverse
 * @s: The string in question
 *
 */

void print_rev(char *s)
{
	int length = 0;
	char *beginning = s;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	while (s >= beginning)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
