#include "holberton.h"

/**
 * puts2 - "Puts" every second character in a string
 * @str: The string in question
 *
 */

void puts2(char *str)
{
	int index = 0;

	while (*str)
	{
		if (index % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		index++;
	}
	_putchar('\n');
}
