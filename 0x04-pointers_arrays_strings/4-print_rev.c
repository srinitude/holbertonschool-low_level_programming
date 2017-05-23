#include "holberton.h"
#include <string.h>

/**
 * print_rev - Prints passed string in reverse
 * @s: The string in question
 *
 */

void print_rev(char *s)
{
	int length = strlen(s);
	char *end = s + length - 1;

	while (end >= s)
	{
		_putchar(*end);
		end = end - 1;
	}
	_putchar('\n');
}
