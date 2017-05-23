#include "holberton.h"

/**
 * puts_half - "Puts" the latter half of the string
 * @str: The string in question
 *
 */

void puts_half(char *str)
{
	int length = 0;
	int i, print_index;

	while (*str)
	{
		length++;
		str++;
	}
	length--;

	for (i = 0; i < length; i++)
	{
		str--;
	}

	if (length % 2)
		print_index = (length - 1) / 2;
	else
		print_index = length / 2;

	for (i = 0; i < print_index; i++)
	{
		str++;
	}
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
