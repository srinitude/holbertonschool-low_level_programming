#include "holberton.h"

/**
 * print_alphabet_x10 - Print the lowercase alphabet 10 times
 *
 * Return - Void
 */

void print_alphabet_x10(void)
{
	int index;

	for (index = 0; index < 10; index++)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
