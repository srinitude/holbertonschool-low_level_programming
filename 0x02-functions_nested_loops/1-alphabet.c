#include "holberton.h"

/**
 * print_alphabet - Print the lowercase alphabet
 *
 * Return - Void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
