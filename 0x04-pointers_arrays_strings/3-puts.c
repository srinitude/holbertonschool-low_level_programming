#include "holberton.h"

/**
 * _puts - Prints a string to stdout (standard output)
 * @str: The string to print
 *
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
